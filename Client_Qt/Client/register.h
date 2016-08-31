#ifndef REGISTER_H
#define REGISTER_H
#include "publicbaseclass.h"
class Register : public QMainWindow
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
private slots:
    void DueToType(QString s);
    void OK(){
        qDebug()<<"A signal send";
    }

    void Cancle(){
    qDebug()<<"A signal send";
}
signals:
    void OK_Send();
    void Cancle_Send();
public:
    Register(QWidget *parent = 0);
    ~Register();
public slots:
    void show();
};

#endif // REGISTER_H
