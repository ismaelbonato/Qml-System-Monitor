#include "resource.h"

QResource::QResource(QObject *parent) :
    QObject(parent)
{
}

QResource::~QResource()
{

}

QString QResource::userName()
{
    return m_userName;
}

QAbstractSeries *QResource::getSerieUpdate()
{

}

void QResource::setSerieUpdate(QAbstractSeries *series)
{
    int v;
}

void QResource::setUserName(QString &userName)
{
   if (userName == m_userName)
        return;

    emit userNameChanged();
}

void QResource::setCpuUse(int Value)
{
    m_cpuUse = Value;
}

int QResource::getCpuUse()
{
    return m_cpuUse;
}
