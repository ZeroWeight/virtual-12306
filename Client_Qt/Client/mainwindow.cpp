#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent){
    confirm=new Confirm(this);
    communication=new Communicate();
    login=new LogIn(this);
    main_query=new MainQuery(this);
    buy=new Buy(this);
    pay=new Pay(this);
    query=new QuickQuery(this);
    _register =new Register(this);
    update =new Update(this);
    connect(query,SIGNAL(login_click()),login,SLOT(show()));
    connect(query,SIGNAL(reg_click()),_register,SLOT(show()));
    connect(_register,SIGNAL(Cancle_Send()),_register,SLOT(hide()));
    connect(main_query,SIGNAL(Log_in()),login,SLOT(show()));
    connect(main_query,SIGNAL(Register()),_register,SLOT(show()));
    connect(main_query,SIGNAL(Name()),update,SLOT(show()));
    connect(query,SIGNAL(name_click()),update,SLOT(show()));
    connect(update,SIGNAL(Cancle_Send()),update,SLOT(hide()));
    connect(query,SIGNAL(ok_click(int,int,QDate)),communication,SLOT(get_from_query(int,int,QDate)));
    connect(login,SIGNAL(OK(QString,QString)),communication,SLOT(log_in(QString,QString)));
    connect(_register,SIGNAL(OK_Send(QString,QString,QString,QString,GENDER,TYPE,QString,int,QString,Station,Station)),
            communication,SLOT(reg(QString,QString,QString,QString,GENDER,TYPE,QString,int,QString,Station,Station)));
    connect(main_query,SIGNAL(ok_click(int,int,QDate)),communication,SLOT(get_from_main(int,int,QDate)));
    connect(main_query,SIGNAL(Buy(QString,int,int,QDate)),communication,SLOT(buy_from_main(QString,int,int,QDate)));
    connect(main_query,SIGNAL(Route(QString)),communication,SLOT(route_from_main(QString)));
    connect(buy,SIGNAL(c()),main_query,SLOT(show()));
    connect(main_query,SIGNAL(Buy(QString,int,int,QDate)),main_query,SLOT(hide()));
}

MainWindow::~MainWindow()
{
}
void MainWindow::show(){
    update->show();
}
