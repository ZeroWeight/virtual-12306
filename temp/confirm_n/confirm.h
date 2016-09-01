#ifndef CLIENT_H
#define CLIENT_H
#include <QLabel>
#include <QMainWindow>
#include <QTableWidget>
#include <QLCDNumber>
class Confirm : public QMainWindow
{
    Q_OBJECT
private:
    int count;
    QTableWidget* seat;
    QTableWidget* sleeper;
    QTableWidget* name;
    QLabel* l1;
    QLabel* l2;
    QLabel* l3;
    QLCDNumber* d1;
    QLCDNumber* d2;
    QLCDNumber* d3;
    QLabel* ld1;
    QLabel* ld2;
    QLabel* ld3;
private slots:
    void seat_set(int x,int y);
    void sleeper_set(int x,int y);
public:
    Confirm(QWidget *parent = 0);
    ~Confirm();
public slots:
    void show();
};

#endif // CLIENT_H
