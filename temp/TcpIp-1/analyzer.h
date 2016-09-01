#ifndef ANALYZER_H
#define ANALYZER_H
#include <QQueue>
#include "message.h"
class Analyzer:public QObject{
    Q_OBJECT
private:
    QQueue<Message*>* m_message_pool;
    bool running;
    void Run(){
        running =true;
        while(!m_message_pool->empty())
            Analyze(m_message_pool->dequeue());
        running =false;
    }
    void Analyze(Message *message){
        char* buffer=message->m_buffer;
        int length;
        switch(message->m_mode){
        case A:
            qDebug()<<"A"<<buffer<<"A";
            for(int i=0;i<1000;i++)
                qDebug()<<i;
            message->Reply(buffer,128);
            break;
        case B:
            qDebug()<<"B"<<buffer<<"B";
            for(int i=0;i<1000;i++)
                qDebug()<<i;
            message->Reply(buffer,128);
            break;
        }
        delete[] buffer;
        buffer=nullptr;
    }
public slots:
    inline void ReceiveMessage(Message* message){
        m_message_pool->enqueue(message);
        if(!running)
            Run();
    }
public:
    Analyzer(){
        m_message_pool=new QQueue<Message*>;
        m_message_pool->clear();
        qDebug()<<"Grammar Analyzer For Server Started";
        running=false;
    }
    ~Analyzer(){
        delete m_message_pool;
    }
};




#endif // ANALYZER_H
