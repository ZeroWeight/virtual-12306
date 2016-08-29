#ifndef BOX_H
#define BOX_H
#include"basic.h"
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
    Box(QWidget *parent = 0);
public slots:
    void show();
};

#endif // BOX_H
