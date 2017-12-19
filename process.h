#ifndef QPROCESS_H
#define QPROCESS_H

#include <QObject>
#include <QString>
//#include "processinformationworker.h"

class QProcess : public QObject
{
    Q_OBJECT

public:
    explicit QProcess(QObject *parent = nullptr);

private:


signals:

private:

};

#endif // QPROCESS_H
