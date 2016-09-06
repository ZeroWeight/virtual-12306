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
        qDebug()<<message->m_buffer;
        message->Reply(ACK,1024);

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
