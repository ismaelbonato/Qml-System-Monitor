#ifndef QFILESYSTEM_H
#define QFILESYSTEM_H

#include <QObject>
#include <QString>

class QFileSystem : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString userName READ userName WRITE setUserName NOTIFY userNameChanged)

public:
    explicit QFileSystem(QObject *parent = nullptr);

    QString userName();
    void setUserName(const QString &userName);

private:
    //processInformationWorker* processesThread;

signals:
    void userNameChanged();

private:
    QString m_userName;
};

#endif // QFILESYSTEM_H
