#include "analyzer.h"
Analyzer::Analyzer(){
    m_db=new DataBase;
    m_message_pool=new QQueue<Message*>;
    m_message_pool->clear();
    qDebug()<<"Grammar Analyzer For Server Started";
    running=false;
}
void Analyzer::Run(){
    running =true;
    while(!m_message_pool->empty())
        Analyze(m_message_pool->dequeue());
    running =false;
}
void Analyzer::Analyze(Message *message){
    char* buffer=new char[BUFFERSIZE];//may modified
    int length;
    switch(message->m_mode){
    //write to buffer;
    }
    message->Reply(buffer,length);
    delete[] buffer;
    buffer=nullptr;
}
