#ifndef MAINWINDOW_H
#define MAINWINDOW_H
//class need to be finished
#include "info.h"
#include "buy.h"
#include "communicate.h"
#include "confirm.h"
#include "login.h"
#include "mainquery.h"
#include "pay.h"
#include "pay.h"
#include "quickquery.h"
#include "register.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    Confirm* confirm;
    Communicate* communication;
    LogIn* login;
    MainQuery* main_query;
    Buy* buy;
    Pay* pay;
    QuickQuery* query;
    Register* _register;
    Info* info;
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

};

#endif // MAINWINDOW_H
