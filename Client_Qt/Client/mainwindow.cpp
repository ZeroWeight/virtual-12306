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
    info=new Info(UndefTypeValue);
    //connect
    connect(confirm,SIGNAL(Communicate_()),communication,SLOT(_Confirm()));
    connect(confirm,SIGNAL(Pay_()),pay,SLOT(_Comfirm()));
    connect(buy,SIGNAL(MainQuery_()),main_query,SLOT(_Buy()));
    connect(buy,SIGNAL(Communicate_()),communication,SLOT(_Buy()));
    connect(communication,SIGNAL(Confirm_()),confirm,SLOT(_Communicate()));
    connect(communication,SIGNAL(Info_()),info,SLOT(_Communicate()));
    connect(communication,SIGNAL(LogIn_()),login,SLOT(_Communicate()));
    connect(communication,SIGNAL(MainQuery_()),main_query,SLOT(_Communicate()));
    connect(login,SIGNAL(Communicate_()),communication,SLOT(_Login()));
    connect(main_query,SIGNAL(Communicate_()),communication,SLOT(_Query()));
    connect(main_query,SIGNAL(LogIn_()),login,SLOT(_MainQuery()));
    connect(main_query,SIGNAL(Register_()),_register,SLOT(_MainQuery()));
    connect(main_query,SIGNAL(Buy_()),buy,SLOT(_MainQuery()));
    connect(pay,SIGNAL(Communicate_()),communication,SLOT(_Pay()));
    connect(pay,SIGNAL(MainQuery_()),main_query,SLOT(_Pay()));
    connect(query,SIGNAL(Communicate_()),communication,SLOT(_Query()));
    connect(query,SIGNAL(LogIn_()),login,SLOT(_QuickQuery()));
    connect(query,SIGNAL(Register_()),_register,SLOT(_QuickQuery()));
    connect(_register,SIGNAL(Communicate_()),communication,SLOT(_Register()));

    connect(info,SIGNAL(Ans(bool)),confirm,SLOT(_GetStatus(bool)));
    connect(info,SIGNAL(Ans(bool)),login,SLOT(_GetStatus(bool)));
    connect(info,SIGNAL(Ans(bool)),main_query,SLOT(_GetStatus(bool)));
    connect(info,SIGNAL(Ans(bool)),buy,SLOT(_GetStatus(bool)));
    connect(info,SIGNAL(Ans(bool)),pay,SLOT(_GetStatus(bool)));
    connect(info,SIGNAL(Ans(bool)),_register,SLOT(_GetStatus(bool)));
    connect(info,SIGNAL(Ans(bool)),confirm,SLOT(_GetStatus(bool)));

    connect(confirm,SIGNAL(isLogIn_()),info,SLOT(is_LogIn()));
    connect(login,SIGNAL(isLogIn_()),info,SLOT(is_LogIn()));
    connect(main_query,SIGNAL(isLogIn_()),info,SLOT(is_LogIn()));
    connect(buy,SIGNAL(isLogIn_()),info,SLOT(is_LogIn()));
    connect(pay,SIGNAL(isLogIn_()),info,SLOT(is_LogIn()));
    connect(query,SIGNAL(isLogIn_()),info,SLOT(is_LogIn()));
    connect(_register,SIGNAL(isLogIn_()),info,SLOT(is_LogIn()));
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
    info->deleteLater();
}
