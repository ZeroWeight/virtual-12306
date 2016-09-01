#ifndef TABLE_H
#define TABLE_H
#include <QTableWidget>
#include <QPushButton>
#include <QWidget>
#include <QString>
class Table:public QWidget{
    Q_OBJECT
private:
    int rank;
    bool price_hidden;
    QPushButton* button;
    QTableWidget* table;
private slots:
    void Details(int col, int row);
    void Push();
signals:
    void Buy(QString);
    void Route(QString);
    void Reload(int,bool);
public:
    Table(int rank=0,QWidget *parent = 0);
    ~Table();
public slots:
    void show();
};

#endif // TABLE_H
