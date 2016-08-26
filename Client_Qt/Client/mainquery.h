#ifndef MAINQUERY_H
#define MAINQUERY_H
#include "publicbaseclass.h"
class MainQuery:public PublicBaseClass{
public slots:
    UndefArgument _Buy(UndefArgument);
    UndefArgument _Communicate(UndefArgument);
    UndefArgument _Pay(UndefArgument);
signals:
    void Communicate_(UndefArgument);
    void LogIn_(UndefArgument);
    void Register_(UndefArgument);
    void Buy_(UndefArgument);
};

#endif // MAINQUERY_H
