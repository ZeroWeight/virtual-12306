#ifndef QUICKQUERY_H
#define QUICKQUERY_H
#include "publicbaseclass.h"
class QuickQuery:public PublicBaseClass{
public slots:
signals:
    void LogIn_(UndefArgument);
    void Register_(UndefArgument);
    void Communicate_(UndefArgument);
    void Update(UndefArgument);
};

#endif // QUICKQUERY_H
