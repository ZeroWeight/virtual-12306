#ifndef MAINQUERY_H
#define MAINQUERY_H

#include <QMainWindow>
#include "box.h"
#include "date.h"
#include "supertag.h"
#include "table.h"
#include <QLabel>
#include <QCheckBox>
class MainQuery : public QMainWindow
{
    Q_OBJECT
private:
    int count;
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
public:
    MainQuery(QWidget *parent = 0);
    ~MainQuery();
public slots:
    void show();
};

#endif // MAINQUERY_H
