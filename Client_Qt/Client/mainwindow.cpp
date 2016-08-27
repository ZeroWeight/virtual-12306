#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent){
    confirm=new Confirm(UndefTypeValue);
    communication=new Communicate(UndefTypeValue);
    login=new LogIn(UndefTypeValue);
    main_query=new MainQuery(UndefTypeValue);
    buy=new Buy(UndefTypeValue);
    pay=new Pay(UndefTypeValue);
    query=new QuickQuery(UndefTypeValue);
    _register =new Register(UndefTypeValue);
    update =new Update(UndefTypeValue);
    //connect
    connect(confirm,SIGNAL(Communicate_()),communication,SLOT(_Confirm()));
    connect(confirm,SIGNAL(Pay_()),pay,SLOT(_Comfirm()));
    connect(buy,SIGNAL(MainQuery_()),main_query,SLOT(_Buy()));
    connect(buy,SIGNAL(Communicate_()),communication,SLOT(_Buy()));
    connect(communication,SIGNAL(Confirm_()),confirm,SLOT(_Communicate()));
    connect(communication,SIGNAL(LogIn_()),login,SLOT(_Communicate()));
    connect(communication,SIGNAL(MainQuery_()),main_query,SLOT(_Communicate()));
    connect(login,SIGNAL(Communicate_()),communication,SLOT(_Login()));
    connect(main_query,SIGNAL(Communicate_()),communication,SLOT(_Query()));
    connect(main_query,SIGNAL(LogIn_()),login,SLOT(_MainQuery()));
    connect(main_query,SIGNAL(Register_()),_register,SLOT(_MainQuery()));
    connect(main_query,SIGNAL(Buy_()),buy,SLOT(_MainQuery()));
    connect(pay,SIGNAL(Communicate_()),communication,SLOT(_Pay()));
    connect(query,SIGNAL(Communicate_()),communication,SLOT(_Query()));
    connect(query,SIGNAL(LogIn_()),login,SLOT(_QuickQuery()));
    connect(query,SIGNAL(Register_()),_register,SLOT(_QuickQuery()));
    connect(_register,SIGNAL(Communicate_()),communication,SLOT(_Register()));
    connect(query,SIGNAL(Update_()),update,SLOT(_QuickQuery()));
    connect(main_query,SIGNAL(Update_()),update,SLOT(_MainQuery()));
    connect(update,SIGNAL(Communicate_()),communication,SLOT(_Update()));
}

MainWindow::~MainWindow()
{
    confirm->deleteLater();
    communication->deleteLater();
    login->deleteLater();
    main_query->deleteLater();
    buy->deleteLater();
    pay->deleteLater();
    query->deleteLater();
    _register->deleteLater();
    update->deleteLater();
}
/*
pay.h
pay.c
PushButton
size
color
..
pay.c
#include "pay.hpp"
size
QSize QGeo..
QPushButton button;
button.size=SizeOkButton
SizeOkButton  <-- pay.hpp
