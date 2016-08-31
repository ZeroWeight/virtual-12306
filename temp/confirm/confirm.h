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
    QLabel* seat_No [20];
    QLabel* sleeper_No[20];
    QCheckBox* seat_checker[120];
    QCheckBox* sleeper_checker[60];
    QVBoxLayout* seat_line[20];
    QVBoxLayout* sleeper_line[20];
    QSpacerItem* seat_space_1[20];
    QSpacerItem* seat_space_2[20];
    QSpacerItem* seat_space_3[20];
    QSpacerItem* seat_space_4[20];
    QSpacerItem* sleeper_space_1[20];
    QSpacerItem* sleeper_space_2[20];
    QSpacerItem* sleeper_space_3[20];
    QSpacerItem* sleeper_space_4[20];
    QSpacerItem* sleeper_space_5[20];
public:
    Confirm(QWidget *parent = 0);
    ~Confirm();
};

#endif // CONFIRM_H
