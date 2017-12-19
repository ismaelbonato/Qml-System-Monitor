#include <QtWidgets/QApplication>
#include <QtQml/QQmlContext>
#include <QtQuick/QQuickView>
#include <QtQml/QQmlEngine>
#include <QtCore/QDir>

#include "process.h"
#include "filesystem.h"
#include "resource.h"


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

     QQuickView viewer;

    // The following are needed to make examples run without having to install the module
    // in desktop environments.
#ifdef Q_OS_WIN
    QString extraImportPath(QStringLiteral("%1/../../../../%2"));
#else
    QString extraImportPath(QStringLiteral("%1/../../../%2"));
#endif

    viewer.engine()->addImportPath(extraImportPath.arg(QGuiApplication::applicationDirPath(),
                                      QString::fromLatin1("qml")));
    QObject::connect(viewer.engine(), &QQmlEngine::quit, &viewer, &QWindow::close);

    viewer.setTitle(QStringLiteral("System Monitor"));

    QResource resource(&viewer);
    viewer.rootContext()->setContextProperty("resource", &resource);

    viewer.setSource(QUrl(QStringLiteral("qrc:/main.qml")));
    viewer.setResizeMode(QQuickView::SizeRootObjectToView);
  //  viewer.setColor(QColor("#404040"));
    viewer.show();

    return app.exec();
}
