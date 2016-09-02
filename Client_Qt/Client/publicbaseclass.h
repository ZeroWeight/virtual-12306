#ifndef PUBLICBASECLASS_H
#define PUBLICBASECLASS_H
#include "basic.h"
#include "station.hpp"
class Ticket{
public:
    Station to;
    Station from;
    QDateTime dep;
    QDateTime arr;
    int price;
    int seat;
    QString train_id;
};
class People{
public:
    QString tel;
    QString id;
    QString name;
    TYPE type;
    GENDER gender;
    QString Univ;
    QString studentid;
    int grade;
    Station INTV_1;
    Station INTV_2;
    QList<Ticket*> tickets;
};
class User:public QMainWindow{
public:
    bool is_log_in;
    int tickets;
    static QString user_name;
    static QString password;
    static AUTH type;
    static People contact[4];
    User(QWidget *parent = 0):QMainWindow(parent),is_log_in(0),tickets(0){}
};
#endif // PUBLICBASECLASS_H
