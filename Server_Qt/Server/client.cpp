#include "client.h"
Client::Client(QTcpSocket *&socket){
    qDebug()<<"Client is connected"<<socket->peerAddress();
    m_socket=socket;
    m_message=new Message;
    connect(m_socket,SIGNAL(readyRead()),this,SLOT(Communicate()));
    connect(m_message,SIGNAL(Reply(char*,int)),this,SLOT(Reply(char*,int)));
    connect(m_socket,SIGNAL(disconnected()),this,SLOT(ThrowTrash()));
}
void Client::Communicate(){
    m_socket->read(m_message->m_buffer,MAXBUFFERSIZE);
    if(m_message->m_mode){
        GetMessage(m_message);
        m_message->m_mode=NONE;
    }
    else{
        int temp;
        sscanf(m_message->m_buffer,"%d",&temp);
        m_message->m_mode=(MODE)temp;
        m_socket->write(ACK);
    }
}
