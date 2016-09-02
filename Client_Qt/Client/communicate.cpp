#include "communicate.h"
Communicate::Communicate(){
    buffer=new char[BUFFER];
    temp=new char[BUFFER];
    m=NONE;
    ack=0;
    socket=new QTcpSocket(this);
    socket->connectToHost(QHostAddress("192.168.17.1"),493);
    connect(socket,SIGNAL(readyRead()),this,SLOT(listen()));
};
void Communicate::get_from_query(int x, int y, QDate d){
    m=Q_S;
    sprintf(buffer,"%d\0",Q_S);
    socket->write(buffer,BUFFER);
    sprintf(buffer,"%d %d %d %d %d\0",x,y,d.year(),d.month(),d.day());
    ack=0;
}
void Communicate::listen(){
    socket->read(temp,BUFFER);
    if(!ack){
        if(strcmp(temp,ACK))
            qDebug()<<"Communicate ERR";
        else{
            socket->write(buffer,BUFFER);
            ack=1;
        }
    }
        else{
            m=NONE;
            //decoding
        }
}
void Communicate::log_in(QString a, QString b){
    m=L_I;
    sprintf(buffer,"%d\0",L_I);
    socket->write(buffer,BUFFER);
    sprintf(buffer,"%s\n%s\0",a.toStdString().data(),b.toStdString().data());
    ack=0;
}
