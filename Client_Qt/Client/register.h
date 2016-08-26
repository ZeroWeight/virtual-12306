#ifndef REGISTER_H
#define REGISTER_H
#include "publicbaseclass.h"
class Register:public PublicBaseClass{
public slots:
    UndefArgument _MainQuery(UndefArgument);
    UndefArgument _QuickQuery(UndefArgument);
signals:
    void Communicate_(UndefArgument);
};

#endif // REGISTER_H
