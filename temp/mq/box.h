#ifndef BOX_H
#define BOX_H
#include <QMainWindow>
#include <QLineEdit>
#include <QListWidget>
#include <QWidget>
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
public slots:
    void show();
};

#endif // BOX_H
