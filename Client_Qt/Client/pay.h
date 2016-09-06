#ifndef PAY_H
#define PAY_H
#include "publicbaseclass.h"
class Pay : public User
{
    Q_OBJECT
private:
    QWidget *widget;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit;
    QDialogButtonBox *buttonBox_2;
    QWidget *widget_2;
    QDialogButtonBox *buttonBox;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_3;
public:
    Pay(QWidget *parent = 0);
    ~Pay();
public slots:
    void show();
};
#endif // PAY_H
