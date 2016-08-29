#ifndef QUICKQUERY_H
#define QUICKQUERY_H
#include "box.h"
#include "date.h"
#include "supertag.h"

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
    void ok_click();
    void login_click();
    void reg_click();
    void name_click();
#ifdef ZW_DEBUG_
private slots:
    void Debug(){
        qDebug()<<"A singal is emit";
    }
#endif
};
#endif // QUICKQUERY_H
