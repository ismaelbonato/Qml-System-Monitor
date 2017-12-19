#ifndef QRESOURCE_H
#define QRESOURCE_H


#include <QtCore/QObject>
#include <QtCharts/QAbstractSeries>

QT_BEGIN_NAMESPACE
class QQuickView;
QT_END_NAMESPACE

QT_CHARTS_USE_NAMESPACE

class QResource : public QObject
{
    Q_OBJECT


public:
    explicit QResource(QQuickView *appViewer, QObject *parent = 0);
    ~QResource();

Q_SIGNALS:

public slots:
    void generateData(int type, int rowCount, int colCount);
    void update(QAbstractSeries *series);


signals:

private:
    QQuickView *m_appViewer;
    QList<QVector<QPointF> > m_data;
    int m_index;
};

#endif // QRESOURCE_H
