#ifndef MESSAGE_H
#define MESSAGE_H
#include <QObject>
#include <QDebug>
#define ACK "0123456789"
enum MODE{
    N=0,
    A,
    B
};

class Message:public QObject{
    Q_OBJECT
public:
    char* m_buffer;
    MODE m_mode;
    Message(){
        m_mode=N;
        m_buffer=new char[65546];
    }
    ~Message(){
        delete[] m_buffer;
    }
signals:
    void Reply(char* buffer,const int &size);
};
#endif // MESSAGE_H
