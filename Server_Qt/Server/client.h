#ifndef CLIENT_H
#define CLIENT_H
#include "message.hpp"
class Client:public QObject{
    Q_OBJECT
private:
    QTcpSocket* m_socket;
    Message* m_message;
private slots:
    void Communicate();
    void ThrowTrash(){
        Trash(this);
    }
    void Reply(char* buffer,int length){
        m_socket->write(buffer,length);
    }

signals:
    void Trash(Client*);
    void GetMessage(Message* message);
public:
    Client(QTcpSocket *&socket);
    ~Client(){
        delete m_socket;
        delete m_message;
    }
};
#endif // CLIENT_H
