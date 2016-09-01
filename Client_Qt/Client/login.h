#ifndef LOGIN_H
#define LOGIN_H
#include "basic.h"

class LogIn : public QMainWindow
{
    Q_OBJECT
private:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *lineEdit_2;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer_4;
signals:
    void OK();
public:
    LogIn(QWidget *parent = 0);
    ~LogIn();
};

#endif // LOGIN_H
