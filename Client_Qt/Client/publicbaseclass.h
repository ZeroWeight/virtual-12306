#ifndef PUBLICBASECLASS_H
#define PUBLICBASECLASS_H
#include "basic.h"
class PublicBaseClass:public QMainWindow{
public slots:
    virtual void show(){
        QMainWindow::show();
    }
    inline void _GetStatus(bool b){
        isLogIn=b;
    }
signals:
    void isLogIn_(void);

private:
    bool isLogIn;
    PublicBaseClass* calling_model;
};
#endif // PUBLICBASECLASS_H
