#include "server.h"
Server::Server(int argc, char *argv[]):QCoreApplication(argc,argv) {
    qDebug()<<"Server Started";
    m_pool=new QQueue<Client*>;
    m_pool->clear();
    m_lobby=new QTcpServer;
    m_analyzer=new Analyzer;
    connect(m_lobby,SIGNAL(newConnection()),this,SLOT(AcceptConnection()));
}
void Server::AcceptConnection(){
    QTcpSocket* skt = m_lobby->nextPendingConnection();
    Client* now = new Client(skt);
    connect(now,SIGNAL(GetMessage(Message*)),this->m_analyzer,SLOT(ReceiveMessage(Message*)));
    connect(now,SIGNAL(Trash(Client*)),this,SLOT(Throw(Client*)));
    (*m_pool)<<now;
}
int Server::exec(){
    qDebug()<<"The server is lauching";
    return QCoreApplication::exec();
}
void Server::Throw(Client * client){
    delete client;
    m_pool->removeOne(client);
}
