#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtNetwork>
#include <QPushButton>
#include <cstring>
#include <QDebug>
enum MODE{
    N=0,
    A,
    B
};
class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QTcpSocket* socket;
    MODE m;
    char* buffer;
    QPushButton* button1;
    QPushButton* button2;
private slots:
    void f1(){
        m=A;
        strcpy(buffer,"Hello world");
        char* temp=new char[3];
        sprintf(temp,"%d",m);
        socket->write(temp);
        qDebug()<<"MOD send";
    }
    void f2(){
        m=B;
        strcpy(buffer,"Hello");
        char* temp=new char[3];
        sprintf(temp,"%d",m);
        socket->write(temp);
        qDebug()<<"MOD send";
    }
    void f(){
        char* temp=new char[128];
        socket->read(temp,128);
        if(m){
            if(strcmp(temp,"0123456789"))
                qDebug()<<"Mode Err";
            else{
                socket->write(buffer,127);
                qDebug()<<"Message send";
                m=N;
            }
        }
        else{
            qDebug()<<temp;
        }
    }

public:
    MainWindow(QWidget *parent = 0):QMainWindow(parent){
        buffer=new char[130];
        socket = new QTcpSocket(this);
        button1=new QPushButton(this);
        button2=new QPushButton(this);
        button1->setGeometry(0,0,50,50);
        button2->setGeometry(100,100,50,50);
        socket->connectToHost(QHostAddress("192.168.17.1"), 493);
        connect(socket,SIGNAL(readyRead()),this,SLOT(f()));
        connect(button1,SIGNAL(clicked(bool)),this,SLOT(f1()));
        connect(button2,SIGNAL(clicked(bool)),this,SLOT(f2()));
    }

    ~MainWindow(){

    }
};

#endif // MAINWINDOW_H
