#ifndef BOX_H
#define BOX_H
#include "basic.h"
#include "station.hpp"
class Box:public QWidget{
    Q_OBJECT
private:
    QLineEdit* line;
    QListWidget * list;
private slots:
    void FillList(QString);
    void FillLine(QListWidgetItem*);
public:
    ~Box();
    Box(QString s,QWidget *parent = 0);
    QString text()const{
        return line->text();
    }
    void clear(){
        line->clear();
    }

public slots:
    void show();
};

#endif // BOX_H
