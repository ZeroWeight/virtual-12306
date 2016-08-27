#ifndef PAY_H
#define PAY_H
#include "publicbaseclass.h"
class Pay:public PublicBaseClass{
    Q_OBJECT
public slots:
    UndefArgument _Comfirm(UndefArgument);
signals:
    void Communicate_(UndefArgument);
};

#endif // PAY_H
