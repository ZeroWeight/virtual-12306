#ifndef MAINQUERY_H
#define MAINQUERY_H
#include "publicbaseclass.h"
#include "box.h"
#include "date.h"
#include "supertag.h"
#include "table.h"
#define ZW_DEBUG
class MainQuery : public User
{
    Q_OBJECT
private:
    int count;
    QScrollArea* table_a;
    QWidget* table_w;
    QCheckBox* g;
    QCheckBox* d;
    QCheckBox* t;
    QCheckBox* z;
    QCheckBox* k;
    QCheckBox* n;
    Date* date;
    Box* src;
    Box* des;
    QLabel* train_l;
    QLabel* src_l;
    QLabel* des_l;
    QLabel* date_l;
    QTableWidget* header;
    Table** table;
    SuperTag* log_in;
    SuperTag* log_out;
    SuperTag* reg;
    SuperTag* name;
    QPushButton* ok;
private slots:
    void Reload(int rank,bool m);
    void Log_out(){
        is_log_in=false;
    }
    void Query();
    void ReadyBuy(QString s);
public:
    MainQuery(QWidget *parent = 0);
    ~MainQuery();
public slots:
    void show();
signals:
    void Log_in();
    void Name();
    void Register();
    void ok_click(int des,int src,QDate date);
    void Buy(QString,int des,int src,QDate date);
    void Route(QString);
};


#endif // MAINQUERY_H
