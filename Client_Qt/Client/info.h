#ifndef INFO_H
#define INFO_H
#include "basic.h"
class Info:public QObject{
    Q_OBJECT
private:
    bool m_isLogIn;
public slots:
    void is_LogIn(){
        Ans(m_isLogIn);
    }
    UndefArgument _Communicate(UndefArgument);
signals:
    void Ans(bool);
};

#endif // INFO_H
