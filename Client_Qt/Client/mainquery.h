#ifndef MAINQUERY_H
#define MAINQUERY_H
#include "box.h"
#include "date.h"
#include "supertag.h"
#include "table.h"
#define ZW_DEBUG
class MainQuery : public QMainWindow
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
private slots:
    void Reload(int rank,bool m);
public:
    MainQuery(QWidget *parent = 0);
    ~MainQuery();
public slots:
    void show();
signals:
    void Log_in();
    void Name();
    void Log_out();
    void Register();
    void Buy();
    void Route();
#ifdef ZW_DEBUG
private slots:
    void Debug(){
        qDebug()<<"A signal emit";
    }
#endif
};


#endif // MAINQUERY_H
