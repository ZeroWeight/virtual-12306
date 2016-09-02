#ifndef QUICKQUERY_H
#define QUICKQUERY_H
#include "box.h"
#include "date.h"
#include "supertag.h"
#include "publicbaseclass.h"
class QuickQuery : public PublicBaseClass
{
    Q_OBJECT
private:
    Box* box_from;
    Box* box_to;
    QLabel* to;
    QLabel* from;
    QLabel* date;
    Date* calendar;
    SuperTag* log_in;
    SuperTag* log_out;
    SuperTag* reg;
    SuperTag* name;
    SuperTag* OK;
public:
    QuickQuery(QWidget *parent = 0);
    ~QuickQuery();
public slots:
    void show();
signals:
    void ok_click(int des,int src,QDate date);
    void login_click();
    void reg_click();
    void name_click();
#ifdef ZW_DEBUG_
private slots:
    void ok(){
        int to,from;
        for(from=0;from<ALL;from++)
            if(NAME[from].toUpper()==QString(box_from->text()).toUpper())
                break;
        if(from==ALL){
            QMessageBox* a=new QMessageBox(this);
            a->setText("Departure invaild");
            a->show();
            box_from->clear();
            return ;
        }
        for(to=0;to<ALL;to++)
            if(NAME[to].toUpper()==QString(box_to->text()).toUpper())
                break;
        if(to==ALL){
            QMessageBox* a=new QMessageBox(this);
            a->setText("Destination invaild");
            a->show();
            box_to->clear();
            return ;
        }
        if(to==from){
            QMessageBox* a=new QMessageBox(this);
            a->setText("The Destination and the Departuature are the same station");
            a->show();
            box_to->clear();
            box_from->clear();
            return ;
        }
        ok_click(to,from,calendar->date());
    }

#endif
};
#endif // QUICKQUERY_H
