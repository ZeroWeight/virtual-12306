#ifndef CLIENT_H
#define CLIENT_H
#include "message.h"
#include <QTcpSocket>
#include <QtNetwork>
class Client:public QObject{
    Q_OBJECT
private:
    QTcpSocket* m_socket;
    Message* m_message;
private slots:
    void Communicate(){
        m_socket->read(m_message->m_buffer,1024);
        GetMessage(m_message);
        m_message->m_mode=N;

    }
    void ThrowTrash(){
        Trash(this);
    }
    void Reply(char* buffer,int length){
        //m_socket->write(buffer,length);
        m_socket->write(buffer,1024);
        qDebug()<<"666777"<<buffer<<length;
    }

signals:
    void Trash(Client*);
    void GetMessage(Message* message);
public:
    Client(QTcpSocket *&socket){
        qDebug()<<"Client is connected"<<socket->peerAddress();
        m_socket=socket;
        m_message=new Message;
        connect(m_socket,SIGNAL(readyRead()),this,SLOT(Communicate()));
        connect(m_message,SIGNAL(Reply(char*,int)),this,SLOT(Reply(char*,int)));
        connect(m_socket,SIGNAL(disconnected()),this,SLOT(ThrowTrash()));
    }
    ~Client(){
        delete m_socket;
        delete m_message;
    }
};



#endif // CLIENT_H
