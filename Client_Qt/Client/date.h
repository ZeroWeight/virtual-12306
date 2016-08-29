#ifndef DATE_H
#define DATE_H
#include "basic.h"
class Date1:public QDateEdit{
    Q_OBJECT
signals:
    void send(QDate);
public:
    Date1(QWidget *parent = 0);
    void mouseDoubleClickEvent(QMouseEvent *event);
};
class Date:public QWidget{
    Q_OBJECT
private:
    Date1* date_editor;
    QCalendarWidget* calendar;
public:
    QDate date()const;
    Date(QWidget *parent = 0);
    ~Date();
public slots:
    void show();

};

#endif // DATE_H
