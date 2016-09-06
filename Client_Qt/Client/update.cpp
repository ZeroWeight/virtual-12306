#include "update.h"

Update::Update(QWidget *parent)
    : User(parent)
{
    this->resize(1000, 700);
    tabWidget = new QTabWidget(this);
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
    this->setWindowTitle(QApplication::translate("Update Info", "Update Info", 0));
    label->setText(QApplication::translate("Update Info", "User Name", 0));
    label_2->setText(QApplication::translate("Update Info", "TextLabel", 0));
    label_3->setText(QApplication::translate("Update Info", "Real Name", 0));
    lineEdit_2->setPlaceholderText(QApplication::translate("Update Info", "Your Real Name Here", 0));
    label_5->setText(QApplication::translate("Update Info", "ID", 0));
    lineEdit_3->setPlaceholderText(QApplication::translate("Update Info", "Your ID Here", 0));
    label_4->setText(QApplication::translate("Update Info", "TextLabel", 0));
    radioButton_2->setText(QApplication::translate("Update Info", "Male", 0));
    radioButton->setText(QApplication::translate("Update Info", "Female", 0));
    label_7->setText(QApplication::translate("Update Info", "TEL", 0));
    lineEdit->setPlaceholderText(QApplication::translate("Update Info", "Your Tel Here", 0));
    label_6->setText(QApplication::translate("Update Info", "Type", 0));
    comboBox->clear();
    comboBox->insertItems(0, QStringList()
                          << QApplication::translate("Update Info", "Adult", 0)
                          << QApplication::translate("Update Info", "Child", 0)
                          << QApplication::translate("Update Info", "Student", 0)
                          );
    label_8->setText(QApplication::translate("Update Info", "University", 0));
    label_9->setText(QApplication::translate("Update Info", "Student ID", 0));
    label_10->setText(QApplication::translate("Update Info", "Grade", 0));
    label_11->setText(QApplication::translate("Update Info", "Interval 1", 0));
    label_12->setText(QApplication::translate("Update Info", "Interval 2", 0));
    lineEdit_4->setPlaceholderText(QApplication::translate("Update Info", "Your University Here", 0));
    lineEdit_5->setPlaceholderText(QApplication::translate("Update Info", "Your Student ID Here", 0));
    lineEdit_6->setPlaceholderText(QApplication::translate("Update Info", "Your Grade Here", 0));
    comboBox_2->clear();
    comboBox_2->insertItems(0, QStringList()
                            << QApplication::translate("Update Info", "BeiJing", 0)
                            << QApplication::translate("Update Info", "ZhengZhou", 0)
                            << QApplication::translate("Update Info", "ChangChun", 0)
                            << QApplication::translate("Update Info", "ChongQing", 0)
                            << QApplication::translate("Update Info", "ChangSha", 0)
                            << QApplication::translate("Update Info", "ChengDu", 0)
                            << QApplication::translate("Update Info", "FuZhou", 0)
                            << QApplication::translate("Update Info", "GuangZhou", 0)
                            << QApplication::translate("Update Info", "HeFei", 0)
                            << QApplication::translate("Update Info", "HangZhou", 0)
                            << QApplication::translate("Update Info", "HaErBin", 0)
                            << QApplication::translate("Update Info", "KunMing", 0)
                            << QApplication::translate("Update Info", "NanChang", 0)
                            << QApplication::translate("Update Info", "NanJing", 0)
                            << QApplication::translate("Update Info", "ShangHai", 0)
                            << QApplication::translate("Update Info", "ShenYang", 0)
                            << QApplication::translate("Update Info", "ShiJiaZhuang", 0)
                            << QApplication::translate("Update Info", "WuHan", 0)
                            );
    comboBox_3->clear();
    comboBox_3->insertItems(0, QStringList()
                            << QApplication::translate("Update Info", "BeiJing", 0)
                            << QApplication::translate("Update Info", "ZhengZhou", 0)
                            << QApplication::translate("Update Info", "ChangChun", 0)
                            << QApplication::translate("Update Info", "ChongQing", 0)
                            << QApplication::translate("Update Info", "ChangSha", 0)
                            << QApplication::translate("Update Info", "ChengDu", 0)
                            << QApplication::translate("Update Info", "FuZhou", 0)
                            << QApplication::translate("Update Info", "GuangZhou", 0)
                            << QApplication::translate("Update Info", "HeFei", 0)
                            << QApplication::translate("Update Info", "HangZhou", 0)
                            << QApplication::translate("Update Info", "HaErBin", 0)
                            << QApplication::translate("Update Info", "KunMing", 0)
                            << QApplication::translate("Update Info", "NanChang", 0)
                            << QApplication::translate("Update Info", "NanJing", 0)
                            << QApplication::translate("Update Info", "ShangHai", 0)
                            << QApplication::translate("Update Info", "ShenYang", 0)
                            << QApplication::translate("Update Info", "ShiJiaZhuang", 0)
                            << QApplication::translate("Update Info", "WuHan", 0)
                            );
    tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Update Info", "Basic Info", 0));
    label_13->setText(QApplication::translate("Update Info", "Origin Password", 0));
    label_14->setText(QApplication::translate("Update Info", "New Password", 0));
    label_15->setText(QApplication::translate("Update Info", "New Password confirm", 0));
    lineEdit_7->setPlaceholderText(QApplication::translate("Update Info", "Origin Password", 0));
    lineEdit_8->setPlaceholderText(QApplication::translate("Update Info", "New Password", 0));
    lineEdit_9->setPlaceholderText(QApplication::translate("Update Info", "New Password Again", 0));
    tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Update Info", "Change Password", 0));
    tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Update Info", "Contact", 0));
    tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("Update Info", "Ticket", 0));
    connect(comboBox,SIGNAL(currentIndexChanged(int)),this,SLOT(DueToType(int)));
}
void Update::show(){
    tabWidget->setCurrentIndex(0);
    QMainWindow::show();
    widget->hide();
    scrollAreaWidgetContents->resize(scrollAreaWidgetContents->width(),300);
}
void Update::DueToType(int x){
    qDebug()<<x;
    if(x==2){
        scrollAreaWidgetContents->setMinimumHeight(1000);
        scrollAreaWidgetContents->resize(scrollAreaWidgetContents->width(),1000);
        widget->show();
    }
    else{
        widget->hide();
        scrollAreaWidgetContents->setMinimumHeight(300);
        scrollAreaWidgetContents->resize(scrollAreaWidgetContents->width(),300);
    }
}

Update::~Update()
{

}
