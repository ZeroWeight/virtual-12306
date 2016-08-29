#include "communicate.h"
#include "decoding.hpp"
void Communicate::Send(Message &message){
    buffer=new char[10];
    sprintf(buffer,"%d",message.mode);
    socket->write(buffer);
    delete [] buffer;
    buffer=nullptr;
    sending=true;
    this->message=&message;
}

Communicate::Communicate(QObject *parent):QObject(parent){
    socket = new QTcpSocket(this);
    socket->connectToHost(QHostAddress("192.168.8.100"), 493);
    connect(socket,SIGNAL(connected()),this,SLOT(GetConnect()));
    connect(socket,SIGNAL(disconnected()),this,SLOT(LostConnect()));
    connect(socket,SIGNAL(readyRead()),this,SLOT(Listen()));
}

void Communicate::GetConnect(){
    qDebug()<<"Got connected!";
}
void Communicate::LostConnect(){
    qDebug()<<"Lost connected";
}

void Communicate::Listen(){
    if(sending){
        buffer=new char[MAXBUFFERSIZE];
        socket->read(buffer,MAXBUFFERSIZE);
        assert(strcmp(buffer,ACK)==0);
        socket->write(message->Code(),message->message_length);
        delete []buffer;
        buffer=nullptr;
        delete message;
        message=nullptr;
        sending=false;
    }
    else if(mode!=MODE_R::NONE){
        buffer=new char[MAXBUFFERSIZE];
        socket->read(buffer,MAXBUFFERSIZE);
        DeCoding();
    }
    else{
        buffer=new char[SHORTBUFFERSIZE];
        socket->read(buffer,SHORTBUFFERSIZE);
        int temp;
        sscanf(buffer,"%d",&temp);
        delete [] buffer;
        buffer=nullptr;
        mode=(MODE_R)temp;
    }
}
