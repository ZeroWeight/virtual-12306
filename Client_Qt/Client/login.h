#ifndef LOGIN_H
#define LOGIN_H
#include "publicbaseclass.h"
class LogIn:public PublicBaseClass{
public slots:
    UndefArgument _Communicate(UndefArgument);
    UndefArgument _MainQuery(UndefArgument);
    UndefArgument _QuickQuery(UndefArgument);
signals:
    void Communicate_(UndefArgument);
};

#endif // LOGIN_H
