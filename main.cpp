#include <QApplication>
#include <QQmlApplicationEngine>

#include "process.h"
#include "filesystem.h"
#include "resource.h"


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    qmlRegisterType<QProcess>("io.qt.examples.process", 1, 0, "Process");
    qmlRegisterType<QResource>("io.qt.examples.resource", 1, 0, "Resource");
    qmlRegisterType<QFileSystem>("io.qt.examples.filesystem", 1, 0, "FileSystem");

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
