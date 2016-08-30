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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
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

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1100, 1500);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, -4, 1101, 1501));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(150);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 30);
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        formLayout->setLabelAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        formLayout->setHorizontalSpacing(24);
        formLayout->setVerticalSpacing(60);
        formLayout->setContentsMargins(20, 20, 20, -1);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        lineEdit->setMinimumSize(QSize(0, 60));
        QFont font;
        font.setPointSize(20);
        lineEdit->setFont(font);

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        sizePolicy.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
        lineEdit_2->setSizePolicy(sizePolicy);
        lineEdit_2->setMinimumSize(QSize(0, 60));
        lineEdit_2->setFont(font);

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        lineEdit_3 = new QLineEdit(widget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        sizePolicy.setHeightForWidth(lineEdit_3->sizePolicy().hasHeightForWidth());
        lineEdit_3->setSizePolicy(sizePolicy);
        lineEdit_3->setMinimumSize(QSize(0, 60));
        lineEdit_3->setFont(font);

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_3);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_6);

        lineEdit_6 = new QLineEdit(widget);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        sizePolicy.setHeightForWidth(lineEdit_6->sizePolicy().hasHeightForWidth());
        lineEdit_6->setSizePolicy(sizePolicy);
        lineEdit_6->setMinimumSize(QSize(0, 60));
        lineEdit_6->setFont(font);

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_6);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_5);

        lineEdit_5 = new QLineEdit(widget);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        sizePolicy.setHeightForWidth(lineEdit_5->sizePolicy().hasHeightForWidth());
        lineEdit_5->setSizePolicy(sizePolicy);
        lineEdit_5->setMinimumSize(QSize(0, 60));
        lineEdit_5->setFont(font);

        formLayout->setWidget(5, QFormLayout::FieldRole, lineEdit_5);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_7);

        comboBox = new QComboBox(widget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy1);
        comboBox->setMinimumSize(QSize(0, 60));
        comboBox->setFont(font);

        formLayout->setWidget(6, QFormLayout::FieldRole, comboBox);

        label_8 = new QLabel(widget);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_8);

        lineEdit_7 = new QLineEdit(widget);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        sizePolicy.setHeightForWidth(lineEdit_7->sizePolicy().hasHeightForWidth());
        lineEdit_7->setSizePolicy(sizePolicy);
        lineEdit_7->setMinimumSize(QSize(0, 50));
        lineEdit_7->setFont(font);

        formLayout->setWidget(7, QFormLayout::FieldRole, lineEdit_7);

        label_9 = new QLabel(widget);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout->setWidget(8, QFormLayout::LabelRole, label_9);

        lineEdit_8 = new QLineEdit(widget);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        sizePolicy.setHeightForWidth(lineEdit_8->sizePolicy().hasHeightForWidth());
        lineEdit_8->setSizePolicy(sizePolicy);
        lineEdit_8->setMinimumSize(QSize(0, 50));
        lineEdit_8->setFont(font);

        formLayout->setWidget(8, QFormLayout::FieldRole, lineEdit_8);

        label_10 = new QLabel(widget);
        label_10->setObjectName(QStringLiteral("label_10"));

        formLayout->setWidget(9, QFormLayout::LabelRole, label_10);

        comboBox_2 = new QComboBox(widget);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setMinimumSize(QSize(0, 60));
        comboBox_2->setFont(font);

        formLayout->setWidget(9, QFormLayout::FieldRole, comboBox_2);

        label_11 = new QLabel(widget);
        label_11->setObjectName(QStringLiteral("label_11"));

        formLayout->setWidget(10, QFormLayout::LabelRole, label_11);

        comboBox_3 = new QComboBox(widget);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setMinimumSize(QSize(0, 60));
        comboBox_3->setFont(font);

        formLayout->setWidget(10, QFormLayout::FieldRole, comboBox_3);

        lineEdit_4 = new QLineEdit(widget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        sizePolicy.setHeightForWidth(lineEdit_4->sizePolicy().hasHeightForWidth());
        lineEdit_4->setSizePolicy(sizePolicy);
        lineEdit_4->setMinimumSize(QSize(0, 60));
        lineEdit_4->setFont(font);

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEdit_4);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 60, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(pushButton_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label->setText(QApplication::translate("MainWindow", "UserName", 0));
        lineEdit->setPlaceholderText(QApplication::translate("MainWindow", "User Name Here", 0));
        label_2->setText(QApplication::translate("MainWindow", "PassWord", 0));
        lineEdit_2->setText(QString());
        lineEdit_2->setPlaceholderText(QApplication::translate("MainWindow", "Password may contain a~z, A~Z, 0~9", 0));
        label_3->setText(QApplication::translate("MainWindow", "Password Confirm", 0));
        lineEdit_3->setPlaceholderText(QApplication::translate("MainWindow", "PassWord Again", 0));
        label_6->setText(QApplication::translate("MainWindow", "Name", 0));
        lineEdit_6->setPlaceholderText(QApplication::translate("MainWindow", "Your Real Name", 0));
        label_4->setText(QApplication::translate("MainWindow", "User Id", 0));
        label_5->setText(QApplication::translate("MainWindow", "Tel", 0));
        lineEdit_5->setPlaceholderText(QApplication::translate("MainWindow", "Your Telephone ", 0));
        label_7->setText(QApplication::translate("MainWindow", "Type", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Adult", 0)
         << QApplication::translate("MainWindow", "Child", 0)
         << QApplication::translate("MainWindow", "Student", 0)
        );
        comboBox->setCurrentText(QApplication::translate("MainWindow", "Adult", 0));
        label_8->setText(QApplication::translate("MainWindow", "Student ID", 0));
        lineEdit_7->setPlaceholderText(QApplication::translate("MainWindow", "Student ID", 0));
        label_9->setText(QApplication::translate("MainWindow", "University", 0));
        lineEdit_8->setPlaceholderText(QApplication::translate("MainWindow", "University", 0));
        label_10->setText(QApplication::translate("MainWindow", "Interval1", 0));
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
        comboBox_2->setCurrentText(QApplication::translate("MainWindow", "BeiJing", 0));
        label_11->setText(QApplication::translate("MainWindow", "Interval2", 0));
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
        comboBox_3->setCurrentText(QApplication::translate("MainWindow", "BeiJing", 0));
        lineEdit_4->setPlaceholderText(QApplication::translate("MainWindow", "User Id here", 0));
        pushButton->setText(QApplication::translate("MainWindow", "OK", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
