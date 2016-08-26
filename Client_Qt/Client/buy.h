#ifndef BUY_H
#define BUY_H
#include "publicbaseclass.h"
class Buy:public PublicBaseClass{
public slots:
    UndefArgument _MainQuery(UndefArgument);
signals:
    void MainQuery_(UndefArgument);
    void Communicate_(UndefArgument);
};

#endif // BUY_H
