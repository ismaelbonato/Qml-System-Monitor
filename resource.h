#ifndef QRESOURCE_H
#define QRESOURCE_H

#include <QObject>
#include <QString>
#include <QSettings>
#include <QtCharts/QXYSeries>

QT_CHARTS_USE_NAMESPACE

class QResource : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString userName READ userName WRITE setUserName NOTIFY userNameChanged)

    Q_PROPERTY(QAbstractSeries *Serie READ getSerieUpdate WRITE setSerieUpdate NOTIFY SerieUpdated)

public:
    explicit QResource(QObject *parent = nullptr);
    ~QResource();



    QString userName();
    QAbstractSeries *getSerieUpdate();
    void setSerieUpdate(QAbstractSeries *series);


    void setUserName(QString &userName);
    void setCpuUse(int Value);
    int getCpuUse();
signals:
    void userNameChanged();
    void SerieUpdated();

private:
    QString m_userName;
    int m_cpuUse;

};

#endif // QRESOURCE_H
