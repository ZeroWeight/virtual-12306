#ifndef CLIENT_H
#define CLIENT_H

#include <QMainWindow>
#include <QTableWidget>
class Client : public QMainWindow
{
    Q_OBJECT
private:
    QTableWidget* seat;
    QTableWidget* sleeper;
private slots:
    void seat_set(int x,int y);
    void sleeper_set(int x,int y);
public:
    Client(QWidget *parent = 0);
    ~Client();
};

#endif // CLIENT_H
