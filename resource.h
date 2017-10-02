#ifndef QRESOURCE_H
#define QRESOURCE_H

#include <QObject>
#include <QString>
#include <QSettings>

//using namespace QtCharts;

class QResource : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString userName READ userName WRITE setUserName NOTIFY userNameChanged)
    Q_PROPERTY(int cpuUse READ getCpuUse WRITE setCpuUse NOTIFY cpuUseChanged)

public:
    explicit QResource(QObject *parent = nullptr);
    ~QResource();

    QString userName();
    int cpuUse;
    void setUserName(QString &userName);
    void setCpuUse(int Value);
    int getCpuUse();
signals:
    void userNameChanged();
    void cpuUseChanged();

private:
    QString m_userName;
    int m_cpuUse;

};

#endif // QRESOURCE_H
