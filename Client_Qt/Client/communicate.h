#ifndef COMMUNICATE_H
#define COMMUNICATE_H

#include "publicbaseclass.h"
class Communicate:public QObject {
    Q_OBJECT
public slots:
    UndefArgument _Login(UndefArgument);
    UndefArgument _Register(UndefArgument);
    UndefArgument _Query(UndefArgument);
    UndefArgument _Buy(UndefArgument);
    UndefArgument _Confirm(UndefArgument);
    UndefArgument _Pay(UndefArgument);
    UndefArgument _Update(UndefArgument);
signals:
    void LogIn_(UndefArgument);
    void MainQuery_(UndefArgument);
    void Confirm_(UndefArgument);
};

#endif // COMMUNICATE_H
