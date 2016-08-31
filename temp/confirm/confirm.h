#ifndef CONFIRM_H
#define CONFIRM_H

#include <QMainWindow>
#include <QWidget>
#include <QCheckBox>
#include <QSpacerItem>
#include <QLabel>
#include <QVBoxLayout>
#include <QHBoxLayout>
class Confirm : public QMainWindow
{
    Q_OBJECT
private:
    QWidget* seat;
    QWidget* sleeper;
    QHBoxLayout* seat_layout;
    QHBoxLayout* sleeper_layout;
    QSpacerItem* seat_head;
    QSpacerItem* sleeper_head;
    QLabel* seat_label;
    QLabel* sleeper_label;
    QSpacerItem* seat_start;
    QSpacerItem* sleeper_start;
    QLabel** seat_No ;
    QLabel** sleeper_No;
    QCheckBox** seat_checker;
    QCheckBox** sleeper_checker;
    QVBoxLayout** seat_line;
    QVBoxLayout** sleeper_line;
    QSpacerItem** seat_space_1;
    QSpacerItem** seat_space_2;
    QSpacerItem** seat_space_3;
    QSpacerItem** seat_space_4;
    QSpacerItem** sleeper_space_1;
    QSpacerItem** sleeper_space_2;
    QSpacerItem** sleeper_space_3;
    QSpacerItem** sleeper_space_4;
public:
    Confirm(QWidget *parent = 0);
    ~Confirm();
};

#endif // CONFIRM_H
