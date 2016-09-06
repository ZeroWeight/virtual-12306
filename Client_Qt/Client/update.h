#ifndef UPDATE_H
#define UPDATE_H
#include"publicbaseclass.h"
class Update : public User
{
    Q_OBJECT
private:
    QTabWidget *tabWidget;
    QWidget *tab;
    QDialogButtonBox *buttonBox;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLabel *label_5;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton;
    QLabel *label_7;
    QLineEdit *lineEdit;
    QLabel *label_6;
    QComboBox *comboBox;
    QWidget *widget;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QComboBox *comboBox_2;
    QComboBox *comboBox_3;
    QWidget *tab_2;
    QWidget *formLayoutWidget_3;
    QFormLayout *formLayout_3;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;
    QLineEdit *lineEdit_9;
    QDialogButtonBox *buttonBox_2;
    QWidget *tab_3;
    QDialogButtonBox *buttonBox_3;
    QWidget *tab_4;
    QDialogButtonBox *buttonBox_4;
private slots:
    void DueToType(int);
signals:
public:
    Update(QWidget *parent = 0);
    ~Update();
public slots:
    void show();
};

#endif // UPDATE_H
