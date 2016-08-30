#ifndef ANALYZER_H
#define ANALYZER_H
#include "message.hpp"
#include "database.h"
class Analyzer:public QObject{
    Q_OBJECT
private:
    DataBase* m_db;
    QQueue<Message*>* m_message_pool;
    bool running;
    void Run();
    void Analyze(Message *message);
public slots:
    inline void ReceiveMessage(Message* message){
        m_message_pool->enqueue(message);
        if(!running)
            Run();
    }
public:
    Analyzer();
    ~Analyzer(){
        delete m_db;
        delete m_message_pool;
    }
};
#endif // ANALYZER_H
