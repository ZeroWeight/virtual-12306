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
void Communicate::reg(QString usr,QString password,
                      QString name,QString id,GENDER g,TYPE type,
                      QString univ,int grade,QString studentid,
                      Station intv1,Station intv2){
    m=REG;
    sprintf(buffer,"%d\0",REG);
    socket->write(buffer,BUFFER);
    sprintf(buffer,"%s\n%s\n%s\n%s\n%d %d\n%s\n%d\n%s\n%d %d\0",
            usr.toStdString().data(),password.toStdString().data(),
            name.toStdString().data(),id.toStdString().data(),
            g,type,univ.toStdString().data(),grade,
            studentid.toStdString().data(),intv1,intv2);
    ack=0;
}
void Communicate::get_from_main(int x, int y, QDate d){
    m=M_S;
    sprintf(buffer,"%d\0",M_S);
    socket->write(buffer,BUFFER);
    sprintf(buffer,"%d %d %d %d %d\0",x,y,d.year(),d.month(),d.day());
    ack=0;
}
void Communicate::buy_from_main(QString s, int x, int y, QDate d){
    m=M_B;
    sprintf(buffer,"%d\0",M_B);
    socket->write(buffer,BUFFER);
    sprintf(buffer,"%s\n%d %d %d %d %d\0",s.toStdString().data(),x,y,d.year(),d.month(),d.day());
    ack=0;
}
void Communicate::route_from_main(QString s){
    m=M_R;
    sprintf(buffer,"%d\0",M_R);
    socket->write(buffer,BUFFER);
    sprintf(buffer,"%s\0",s.toStdString().data());
    ack=0;
}
