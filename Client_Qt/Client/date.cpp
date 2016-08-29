#include "date.h"
void Date1::mouseDoubleClickEvent(QMouseEvent *event){
    if(event->button()==Qt::LeftButton)
       send(QDateEdit::date());
    event->accept();
}
Date1::Date1(QWidget *parent):QDateEdit(parent){
    QDateEdit::setDate(QDate::currentDate());
    QDateEdit::setDateRange(QDate::currentDate(),QDate::currentDate().addDays(5));
}

QDate Date::date()const{
    return date_editor->date();
}
Date::Date(QWidget *parent):QWidget(parent){
    date_editor=new Date1(this);
    calendar=new QCalendarWidget(this);
    connect(date_editor,SIGNAL(send(QDate)),calendar,SLOT(setSelectedDate(QDate)));
    connect(date_editor,SIGNAL(send(QDate)),calendar,SLOT(show()));
    connect(calendar,SIGNAL(clicked(QDate)),date_editor,SLOT(setDate(QDate)));
    connect(calendar,SIGNAL(clicked(QDate)),calendar,SLOT(hide()));
    connect(date_editor,SIGNAL(dateChanged(QDate)),calendar,SLOT(setSelectedDate(QDate)));
    calendar->setDateRange(QDate::currentDate(),QDate::currentDate().addDays(5));
    date_editor->setGeometry(50,0,200,50);
    calendar->setGeometry(0,50,400,400);
}
void Date::show(){
    QWidget::show();
    date_editor->show();
    calendar->hide();
}
Date::~Date(){
    delete calendar;
    delete date_editor;
}
