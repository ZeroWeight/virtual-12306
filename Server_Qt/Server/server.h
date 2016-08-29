#ifndef SERVER_H
#define SERVER_H
#include "client.h"
#include "analyzer.h"
class Server:public QCoreApplication{
    Q_OBJECT
private:
    QTcpServer* m_lobby;
    QList<Client*>* m_pool;
    Analyzer* m_analyzer;
private slots:
    void AcceptConnection();
    void Throw(Client*client);
public:
    Server(int argc,char *argv[]);
    ~Server(){
        delete m_lobby;
        delete m_analyzer;
        foreach(Client* p,*m_pool){
            delete p;
            p=nullptr;
        }
        delete m_pool;
    }
    int exec();
};
#endif // SERVER_H
