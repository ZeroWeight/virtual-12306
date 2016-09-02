#ifndef REGISTER_H
#define REGISTER_H
#include "publicbaseclass.h"
class Register : public User
{
    Q_OBJECT
private:
    QScrollArea *centralWidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QLabel *label_6;
    QLineEdit *lineEdit_6;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit_5;
    QLabel *label_7;
    QComboBox *comboBox;
    QLabel *label_8;
    QLineEdit *lineEdit_7;
    QLabel *label_9;
    QLineEdit *lineEdit_8;
    QLabel *label_10;
    QComboBox *comboBox_2;
    QLabel *label_11;
    QComboBox *comboBox_3;
    QLineEdit *lineEdit_4;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel* gender;
    QRadioButton* m;
    QRadioButton* f;
    QWidget* G;
    QHBoxLayout* H;
    QSpacerItem* s;
    QLabel* grade;
    QLineEdit* grade_input;
private slots:
    void DueToType(QString s);
    void OK(){
        //basic check
        GENDER g=m->isChecked()?MALE:FEMALE;
        TYPE t;
        switch(comboBox->currentIndex()){
        case 0:
            t=ADULT;
            break;
        case 1:
            t=CHILD;
            break;
        case 2:
            t=STUDENT;
            break;
        }
        OK_Send(lineEdit->text(),lineEdit_2->text(),
                lineEdit_6->text(),lineEdit_4->text(),g,t,
               lineEdit_8->text(),grade_input->text().toInt(),lineEdit_7->text(),
                (Station)comboBox_2->currentIndex(),(Station)comboBox_3->currentIndex());
    }

    void Cancle(){
        Cancle_Send();
}
signals:
    void OK_Send(QString usr,QString password,
                 QString name,QString id,GENDER g,TYPE type,
                 QString univ,int grade,QString studentid,
                 Station intv1,Station intv2);
    void Cancle_Send();
public:
    Register(QWidget *parent = 0);
    ~Register();
public slots:
    void show();
};

#endif // REGISTER_H
