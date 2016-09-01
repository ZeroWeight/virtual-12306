#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent){
    confirm=new Confirm(this);
    //communication=new Communicate(this);
    login=new LogIn(this);
    main_query=new MainQuery(this);
    buy=new Buy(this);
    pay=new Pay(this);
    query=new QuickQuery(this);
    _register =new Register(this);
    //update =new Update(this);
    connect(query,SIGNAL(login_click()),login,SLOT(show()));
    connect(query,SIGNAL(reg_click()),_register,SLOT(show()));
    connect(_register,SIGNAL(Cancle_Send()),_register,SLOT(hide()));
    connect(main_query,SIGNAL(Log_in()),login,SLOT(show()));
    connect(main_query,SIGNAL(Register()),_register,SLOT(show()));
}

MainWindow::~MainWindow()
{
}
void MainWindow::show(){
    main_query->show();
}
