#ifndef MAINQUERY_H
#define MAINQUERY_H
#include "publicbaseclass.h"
class MainQuery:public PublicBaseClass{
public slots:
    UndefArgument _Buy(UndefArgument);
    UndefArgument _Communicate(UndefArgument);
signals:
    void Communicate_(UndefArgument);
    void LogIn_(UndefArgument);
    void Register_(UndefArgument);
    void Buy_(UndefArgument);
    void Update_(UndefArgument);
};

#endif // MAINQUERY_H
