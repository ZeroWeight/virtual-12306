#ifndef MESSAGE_HPP
#define MESSAGE_HPP
#include "basic.h"
class Message:public QObject{
    Q_OBJECT
public:
    char* m_buffer;
    MODE m_mode;
    Message(){
        m_mode=NONE;
        m_buffer=new char[BUFFERSIZE];
    }
    ~Message(){
        delete[] m_buffer;
    }

signals:
    void Reply(char* buffer,const int &size);
};
#endif // MESSAGE_HPP
