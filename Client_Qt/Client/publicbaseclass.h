#ifndef PUBLICBASECLASS_H
#define PUBLICBASECLASS_H
#include "basic.h"
class PublicBaseClass:public QMainWindow{
public slots:
    virtual void show(){
        QMainWindow::show();
    }
protected:
    bool isLogIn;
    PublicBaseClass* calling_model;
    //other necessary info
};
#endif // PUBLICBASECLASS_H
