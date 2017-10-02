#include "process.h"

QProcess::QProcess(QObject *parent) :
    QObject(parent)
{

}

QString QProcess::userName()
{
    return m_userName;
}

void QProcess::setUserName(const QString &userName)
{
    if (userName == m_userName)
        return;

    m_userName = userName;
    emit userNameChanged();
}
