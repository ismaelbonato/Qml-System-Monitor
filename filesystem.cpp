#include "filesystem.h"

QFileSystem::QFileSystem(QObject *parent) :
    QObject(parent)
{

}

QString QFileSystem::userName()
{
    return m_userName;
}

void QFileSystem::setUserName(const QString &userName)
{
    if (userName == m_userName)
        return;

    m_userName = userName;
    emit userNameChanged();
}
