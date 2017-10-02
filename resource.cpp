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

void QResource::setUserName(QString &userName)
{
   if (userName == m_userName)
        return;



    m_cpuUse = userName.split(" ")[0].toInt();
    emit cpuUseChanged();
}

void QResource::setCpuUse(int Value)
{
    m_cpuUse = Value;
}

int QResource::getCpuUse()
{
    return m_cpuUse;
}
