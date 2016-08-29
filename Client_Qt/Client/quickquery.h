#ifndef QUICKQUERY_H
#define QUICKQUERY_H
#include "publicbaseclass.h"
class QuickQuery:public PublicBaseClass{
public slots:
signals:
    void LogIn_(UndefArgument);
    void Register_(UndefArgument);
    void Communicate_(UndefArgument);
    void Update(UndefArgument);
private:
    QLabel *label;
    QLabel *label_2;
    QDateEdit *dateEdit;
    QCalendarWidget *calendarWidget;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QLabel *label_3;
public:
    QuickQuery(){
        label=new QLabel("DES",this);
        label_2=new QLabel("SRC",this);
        label_3=new QLabel("DATE",this);
        dateEdit=new QDateEdit(QDate::currentDate(),this);
        calendarWidget=new QCalendarWidget(this);
    }
    void show(){
        label->show();
        label_2->show();
        label_3->show();
        dateEdit->show();
        comboBox->show();
        comboBox_2->show();
        calendarWidget->hide();
    }
};
#endif // QUICKQUERY_H
