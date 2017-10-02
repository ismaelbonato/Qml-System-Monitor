#ifndef QPROCESS_H
#define QPROCESS_H

#include <QObject>
#include <QString>
//#include "processinformationworker.h"

class QProcess : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString userName READ userName WRITE setUserName NOTIFY userNameChanged)

public:
    explicit QProcess(QObject *parent = nullptr);

    QString userName();
    void setUserName(const QString &userName);

private:
    //processInformationWorker* processesThread;

signals:
    void userNameChanged();

private:
    QString m_userName;
};

#endif // QPROCESS_H
