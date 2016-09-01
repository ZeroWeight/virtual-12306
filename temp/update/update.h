#ifndef UPDATE_H
#define UPDATE_H

#include <QMainWindow>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>
#include <QTableWidget>

#include <QMainWindow>
#include <QScrollArea>
#include <QPushButton>
#include <QDebug>
class Update : public QMainWindow
{
    Q_OBJECT
private:
    QTabWidget *tabWidget;
    QWidget *basic;
    QWidget *ticket;
    QWidget *contract;

    //
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
    QWidget* table_in;
    QTableWidget* ticket_t;
    QTableWidget* contract_t;
    QPushButton* ticket_can;
    QPushButton* contract_can;
    QPushButton* contract_add;
    QScrollArea *wid;
private slots:
    void DueToType(QString s);
    void OK(){
        qDebug()<<"A signal send";
        OK_Send();
    }

    void Cancle(){
        Cancle_Send();
    qDebug()<<"A signal send";
}
signals:
    void OK_Send();
    void Cancle_Send();
public:
    Update(QWidget *parent = 0);
    ~Update();
public slots:
    void show();
};

#endif // UPDATE_H
