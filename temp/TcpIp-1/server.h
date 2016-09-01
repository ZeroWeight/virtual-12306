#ifndef SERVER_H
#define SERVER_H
#include <QTcpServer>
#include <QCoreApplication>
#include "client.h"
#include "analyzer.h"
class Server:public QCoreApplication{
    Q_OBJECT
private:
    QTcpServer* m_lobby;
    QList<Client*>* m_pool;
    Analyzer* m_analyzer;
private slots:
    void AcceptConnection(){
        QTcpSocket* skt = m_lobby->nextPendingConnection();
        Client* now = new Client(skt);
        connect(now,SIGNAL(GetMessage(Message*)),this->m_analyzer,SLOT(ReceiveMessage(Message*)));
        connect(now,SIGNAL(Trash(Client*)),this,SLOT(Throw(Client*)));
        (*m_pool)<<now;
    }
    void Throw(Client * client){
        delete client;
        m_pool->removeOne(client);
    }
public:
    Server(int argc, char *argv[]):QCoreApplication(argc,argv) {
        qDebug()<<"Server Started";
        m_pool=new QQueue<Client*>;
        m_pool->clear();
        m_lobby=new QTcpServer;
        m_analyzer=new Analyzer;
        m_lobby->listen(QHostAddress::Any,493);
        connect(m_lobby,SIGNAL(newConnection()),this,SLOT(AcceptConnection()));
    }
    ~Server(){
        delete m_lobby;
        delete m_analyzer;
        foreach(Client* p,*m_pool){
            delete p;
            p=nullptr;
        }
        delete m_pool;
    }
    int exec(){
        qDebug()<<"The server is lauching";
        return QCoreApplication::exec();
    }
};





#endif // SERVER_H
