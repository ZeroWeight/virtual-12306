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
    static bool is_log_in;
    static int tickets;
    static QString user_name;
    static QString password;
    static AUTH type;
    static int num_contact;
    static People contact[4];
    User(QWidget *parent = 0):QMainWindow(parent){}
};
#endif // PUBLICBASECLASS_H
