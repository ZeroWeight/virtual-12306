/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
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

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1000, 700);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 1001, 1200));
        QFont font;
        font.setPointSize(16);
        tabWidget->setFont(font);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        buttonBox = new QDialogButtonBox(tab);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(640, 570, 301, 51));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        scrollArea = new QScrollArea(tab);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(20, 20, 931, 511));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, -434, 919, 1000));
        scrollAreaWidgetContents->setMinimumSize(QSize(0, 1000));
        formLayoutWidget = new QWidget(scrollAreaWidgetContents);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(-1, -1, 931, 511));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setHorizontalSpacing(60);
        formLayout->setVerticalSpacing(40);
        formLayout->setContentsMargins(60, 40, 40, 20);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(0, QFormLayout::FieldRole, label_2);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        lineEdit_2 = new QLineEdit(formLayoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_5);

        lineEdit_3 = new QLineEdit(formLayoutWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_3);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        radioButton_2 = new QRadioButton(formLayoutWidget);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        horizontalLayout->addWidget(radioButton_2);

        radioButton = new QRadioButton(formLayoutWidget);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setChecked(true);

        horizontalLayout->addWidget(radioButton);


        formLayout->setLayout(3, QFormLayout::FieldRole, horizontalLayout);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_7);

        lineEdit = new QLineEdit(formLayoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEdit);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        comboBox = new QComboBox(formLayoutWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        formLayout->setWidget(5, QFormLayout::FieldRole, comboBox);

        widget = new QWidget(scrollAreaWidgetContents);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setEnabled(true);
        widget->setGeometry(QRect(0, 509, 931, 431));
        formLayoutWidget_2 = new QWidget(widget);
        formLayoutWidget_2->setObjectName(QStringLiteral("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(-1, -1, 931, 431));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setHorizontalSpacing(60);
        formLayout_2->setVerticalSpacing(40);
        formLayout_2->setContentsMargins(60, 20, 40, 40);
        label_8 = new QLabel(formLayoutWidget_2);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_8);

        label_9 = new QLabel(formLayoutWidget_2);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_9);

        label_10 = new QLabel(formLayoutWidget_2);
        label_10->setObjectName(QStringLiteral("label_10"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_10);

        label_11 = new QLabel(formLayoutWidget_2);
        label_11->setObjectName(QStringLiteral("label_11"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_11);

        label_12 = new QLabel(formLayoutWidget_2);
        label_12->setObjectName(QStringLiteral("label_12"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_12);

        lineEdit_4 = new QLineEdit(formLayoutWidget_2);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, lineEdit_4);

        lineEdit_5 = new QLineEdit(formLayoutWidget_2);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, lineEdit_5);

        lineEdit_6 = new QLineEdit(formLayoutWidget_2);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, lineEdit_6);

        comboBox_2 = new QComboBox(formLayoutWidget_2);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, comboBox_2);

        comboBox_3 = new QComboBox(formLayoutWidget_2);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, comboBox_3);

        scrollArea->setWidget(scrollAreaWidgetContents);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        formLayoutWidget_3 = new QWidget(tab_2);
        formLayoutWidget_3->setObjectName(QStringLiteral("formLayoutWidget_3"));
        formLayoutWidget_3->setGeometry(QRect(30, 20, 941, 361));
        formLayout_3 = new QFormLayout(formLayoutWidget_3);
        formLayout_3->setSpacing(6);
        formLayout_3->setContentsMargins(11, 11, 11, 11);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        formLayout_3->setHorizontalSpacing(60);
        formLayout_3->setVerticalSpacing(60);
        formLayout_3->setContentsMargins(60, 60, 60, 60);
        label_13 = new QLabel(formLayoutWidget_3);
        label_13->setObjectName(QStringLiteral("label_13"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_13);

        label_14 = new QLabel(formLayoutWidget_3);
        label_14->setObjectName(QStringLiteral("label_14"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_14);

        label_15 = new QLabel(formLayoutWidget_3);
        label_15->setObjectName(QStringLiteral("label_15"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_15);

        lineEdit_7 = new QLineEdit(formLayoutWidget_3);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, lineEdit_7);

        lineEdit_8 = new QLineEdit(formLayoutWidget_3);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, lineEdit_8);

        lineEdit_9 = new QLineEdit(formLayoutWidget_3);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));

        formLayout_3->setWidget(2, QFormLayout::FieldRole, lineEdit_9);

        buttonBox_2 = new QDialogButtonBox(tab_2);
        buttonBox_2->setObjectName(QStringLiteral("buttonBox_2"));
        buttonBox_2->setGeometry(QRect(640, 570, 301, 51));
        buttonBox_2->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        buttonBox_3 = new QDialogButtonBox(tab_3);
        buttonBox_3->setObjectName(QStringLiteral("buttonBox_3"));
        buttonBox_3->setGeometry(QRect(640, 570, 301, 51));
        buttonBox_3->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        buttonBox_4 = new QDialogButtonBox(tab_4);
        buttonBox_4->setObjectName(QStringLiteral("buttonBox_4"));
        buttonBox_4->setGeometry(QRect(640, 570, 301, 51));
        buttonBox_4->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        tabWidget->addTab(tab_4, QString());
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label->setText(QApplication::translate("MainWindow", "User Name", 0));
        label_2->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_3->setText(QApplication::translate("MainWindow", "Real Name", 0));
        lineEdit_2->setPlaceholderText(QApplication::translate("MainWindow", "Your Real Name Here", 0));
        label_5->setText(QApplication::translate("MainWindow", "ID", 0));
        lineEdit_3->setPlaceholderText(QApplication::translate("MainWindow", "Your ID Here", 0));
        label_4->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        radioButton_2->setText(QApplication::translate("MainWindow", "Male", 0));
        radioButton->setText(QApplication::translate("MainWindow", "Female", 0));
        label_7->setText(QApplication::translate("MainWindow", "TEL", 0));
        lineEdit->setPlaceholderText(QApplication::translate("MainWindow", "Your Tel Here", 0));
        label_6->setText(QApplication::translate("MainWindow", "Type", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Adult", 0)
         << QApplication::translate("MainWindow", "Child", 0)
         << QApplication::translate("MainWindow", "Student", 0)
        );
        label_8->setText(QApplication::translate("MainWindow", "University", 0));
        label_9->setText(QApplication::translate("MainWindow", "Student ID", 0));
        label_10->setText(QApplication::translate("MainWindow", "Grade", 0));
        label_11->setText(QApplication::translate("MainWindow", "Interval 1", 0));
        label_12->setText(QApplication::translate("MainWindow", "Interval 2", 0));
        lineEdit_4->setPlaceholderText(QApplication::translate("MainWindow", "Your University Here", 0));
        lineEdit_5->setPlaceholderText(QApplication::translate("MainWindow", "Your Student ID Here", 0));
        lineEdit_6->setPlaceholderText(QApplication::translate("MainWindow", "Your Grade Here", 0));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "BeiJing", 0)
         << QApplication::translate("MainWindow", "ZhengZhou", 0)
         << QApplication::translate("MainWindow", "ChangChun", 0)
         << QApplication::translate("MainWindow", "ChongQing", 0)
         << QApplication::translate("MainWindow", "ChangSha", 0)
         << QApplication::translate("MainWindow", "ChengDu", 0)
         << QApplication::translate("MainWindow", "FuZhou", 0)
         << QApplication::translate("MainWindow", "GuangZhou", 0)
         << QApplication::translate("MainWindow", "HeFei", 0)
         << QApplication::translate("MainWindow", "HangZhou", 0)
         << QApplication::translate("MainWindow", "HaErBin", 0)
         << QApplication::translate("MainWindow", "KunMing", 0)
         << QApplication::translate("MainWindow", "NanChang", 0)
         << QApplication::translate("MainWindow", "NanJing", 0)
         << QApplication::translate("MainWindow", "ShangHai", 0)
         << QApplication::translate("MainWindow", "ShenYang", 0)
         << QApplication::translate("MainWindow", "ShiJiaZhuang", 0)
         << QApplication::translate("MainWindow", "WuHan", 0)
        );
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "BeiJing", 0)
         << QApplication::translate("MainWindow", "ZhengZhou", 0)
         << QApplication::translate("MainWindow", "ChangChun", 0)
         << QApplication::translate("MainWindow", "ChongQing", 0)
         << QApplication::translate("MainWindow", "ChangSha", 0)
         << QApplication::translate("MainWindow", "ChengDu", 0)
         << QApplication::translate("MainWindow", "FuZhou", 0)
         << QApplication::translate("MainWindow", "GuangZhou", 0)
         << QApplication::translate("MainWindow", "HeFei", 0)
         << QApplication::translate("MainWindow", "HangZhou", 0)
         << QApplication::translate("MainWindow", "HaErBin", 0)
         << QApplication::translate("MainWindow", "KunMing", 0)
         << QApplication::translate("MainWindow", "NanChang", 0)
         << QApplication::translate("MainWindow", "NanJing", 0)
         << QApplication::translate("MainWindow", "ShangHai", 0)
         << QApplication::translate("MainWindow", "ShenYang", 0)
         << QApplication::translate("MainWindow", "ShiJiaZhuang", 0)
         << QApplication::translate("MainWindow", "WuHan", 0)
        );
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Basic Info", 0));
        label_13->setText(QApplication::translate("MainWindow", "Origin Password", 0));
        label_14->setText(QApplication::translate("MainWindow", "New Password", 0));
        label_15->setText(QApplication::translate("MainWindow", "New Password confirm", 0));
        lineEdit_7->setPlaceholderText(QApplication::translate("MainWindow", "Origin Password", 0));
        lineEdit_8->setPlaceholderText(QApplication::translate("MainWindow", "New Password", 0));
        lineEdit_9->setPlaceholderText(QApplication::translate("MainWindow", "New Password Again", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Change Password", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Contact", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "Ticket", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
