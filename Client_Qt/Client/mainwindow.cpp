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
