#ifndef CONFIRM_H
#define CONFIRM_H
#include "publicbaseclass.h"
class Confirm:public PublicBaseClass{
public slots:
    UndefArgument _Communicate(UndefArgument);
signals:
    void Pay_(UndefArgument);
    void Communicate_(UndefArgument);
};

#endif // CONFIRM_H
