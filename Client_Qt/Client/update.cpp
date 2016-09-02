#include "update.h"

Update::Update(QWidget *parent)
    : User(parent)
{
    this->resize(1200,750);
    this->setMaximumSize(this->size());
    this->setMinimumSize(this->size());
    tabWidget = new QTabWidget(this);
    tabWidget->setGeometry(QRect(-1, -1, 1201, 751));
    QFont font;
    font.setPointSize(16);
    tabWidget->setFont(font);
    basic=new QWidget();
    tabWidget->addTab(basic,"Basic Info");
    ticket=new QWidget();
    tabWidget->addTab(ticket,"Tickets Info");
    contract=new QWidget();
    tabWidget->addTab(contract,"Contract Info");//
    //
    //
    {
        centralWidget = new QScrollArea(basic);
        centralWidget->setGeometry(0,0,1200,700);
        widget = new QWidget(centralWidget);
        widget->setGeometry(QRect(0, -4, 1101, 1501));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(120);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setContentsMargins(0, 0, 0, 20);
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        formLayout->setLabelAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        formLayout->setHorizontalSpacing(24);
        formLayout->setVerticalSpacing(60);
        formLayout->setContentsMargins(20, 20, 20, -1);
        label = new QLabel(widget);
        formLayout->setWidget(0, QFormLayout::LabelRole, label);
        lineEdit = new QLineEdit(widget);
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
        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);
        lineEdit_2 = new QLineEdit(widget);
        sizePolicy.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
        lineEdit_2->setSizePolicy(sizePolicy);
        lineEdit_2->setMinimumSize(QSize(0, 60));
        lineEdit_2->setFont(font);
        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);
        label_3 = new QLabel(widget);
        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);
        lineEdit_3 = new QLineEdit(widget);
        sizePolicy.setHeightForWidth(lineEdit_3->sizePolicy().hasHeightForWidth());
        lineEdit_3->setSizePolicy(sizePolicy);
        lineEdit_3->setMinimumSize(QSize(0, 60));
        lineEdit_3->setFont(font);
        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_3);
        label_6 = new QLabel(widget);
        formLayout->setWidget(3, QFormLayout::LabelRole, label_6);
        lineEdit_6 = new QLineEdit(widget);
        sizePolicy.setHeightForWidth(lineEdit_6->sizePolicy().hasHeightForWidth());
        lineEdit_6->setSizePolicy(sizePolicy);
        lineEdit_6->setMinimumSize(QSize(0, 60));
        lineEdit_6->setFont(font);
        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_6);
        label_4 = new QLabel(widget);
        formLayout->setWidget(4, QFormLayout::LabelRole, label_4);
        label_5 = new QLabel(widget);
        formLayout->setWidget(5, QFormLayout::LabelRole, label_5);
        lineEdit_5 = new QLineEdit(widget);
        sizePolicy.setHeightForWidth(lineEdit_5->sizePolicy().hasHeightForWidth());
        lineEdit_5->setSizePolicy(sizePolicy);
        lineEdit_5->setMinimumSize(QSize(0, 60));
        lineEdit_5->setFont(font);
        formLayout->setWidget(5, QFormLayout::FieldRole, lineEdit_5);
        label_7 = new QLabel(widget);
        formLayout->setWidget(6, QFormLayout::LabelRole, label_7);
        comboBox = new QComboBox(widget);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy1);
        comboBox->setMinimumSize(QSize(0, 60));
        comboBox->setFont(font);
        formLayout->setWidget(6, QFormLayout::FieldRole, comboBox);
        label_8 = new QLabel(widget);
        formLayout->setWidget(7, QFormLayout::LabelRole, label_8);
        lineEdit_7 = new QLineEdit(widget);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        sizePolicy.setHeightForWidth(lineEdit_7->sizePolicy().hasHeightForWidth());
        lineEdit_7->setSizePolicy(sizePolicy);
        lineEdit_7->setMinimumSize(QSize(0, 50));
        lineEdit_7->setFont(font);
        formLayout->setWidget(7, QFormLayout::FieldRole, lineEdit_7);
        label_9 = new QLabel(widget);
        formLayout->setWidget(8, QFormLayout::LabelRole, label_9);
        lineEdit_8 = new QLineEdit(widget);
        sizePolicy.setHeightForWidth(lineEdit_8->sizePolicy().hasHeightForWidth());
        lineEdit_8->setSizePolicy(sizePolicy);
        lineEdit_8->setMinimumSize(QSize(0, 50));
        lineEdit_8->setFont(font);
        formLayout->setWidget(8, QFormLayout::FieldRole, lineEdit_8);
        label_10 = new QLabel(widget);
        formLayout->setWidget(9, QFormLayout::LabelRole, label_10);
        comboBox_2 = new QComboBox(widget);
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
        sizePolicy.setHeightForWidth(lineEdit_4->sizePolicy().hasHeightForWidth());
        lineEdit_4->setSizePolicy(sizePolicy);
        lineEdit_4->setMinimumSize(QSize(0, 60));
        lineEdit_4->setFont(font);
        formLayout->setWidget(4, QFormLayout::FieldRole, lineEdit_4);
        verticalLayout->addLayout(formLayout);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
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
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        horizontalLayout->addWidget(pushButton_2);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);
        horizontalLayout->addItem(horizontalSpacer_3);
        verticalLayout->addLayout(horizontalLayout);
        centralWidget->setWidget(widget);
        label->setFont(font);
        label_2->setFont(font);
        label_3->setFont(font);
        label_4->setFont(font);
        label_5->setFont(font);
        label_6->setFont(font);
        label_7->setFont(font);
        label_8->setFont(font);
        label_9->setFont(font);
        label_10->setFont(font);
        label_11->setFont(font);
        pushButton->setFont(font);
        pushButton_2->setFont(font);
        lineEdit_2->setEchoMode(QLineEdit::Password);
        lineEdit_3->setEchoMode(QLineEdit::Password);
        //
        //
        //
        //
        this->setWindowTitle(QApplication::translate("Register", "Register", 0));
        label->setText(QApplication::translate("Register", "UserName", 0));
        lineEdit->setPlaceholderText(QApplication::translate("Register", "User Name Here", 0));
        label_2->setText(QApplication::translate("Register", "PassWord", 0));
        lineEdit_2->setText(QString());
        lineEdit_2->setPlaceholderText(QApplication::translate("Register", "Password may contain a~z, A~Z, 0~9", 0));
        label_3->setText(QApplication::translate("Register", "Password Confirm", 0));
        lineEdit_3->setPlaceholderText(QApplication::translate("Register", "PassWord Again", 0));
        label_6->setText(QApplication::translate("Register", "Name", 0));
        lineEdit_6->setPlaceholderText(QApplication::translate("Register", "Your Real Name", 0));
        label_4->setText(QApplication::translate("Register", "User Id", 0));
        label_5->setText(QApplication::translate("Register", "Tel", 0));
        lineEdit_5->setPlaceholderText(QApplication::translate("Register", "Your Telephone ", 0));
        label_7->setText(QApplication::translate("Register", "Type", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
                              << QApplication::translate("Register", "Adult", 0)
                              << QApplication::translate("Register", "Child", 0)
                              << QApplication::translate("Register", "Student", 0)
                              );
        comboBox->setCurrentText(QApplication::translate("Register", "Adult", 0));
        label_8->setText(QApplication::translate("Register", "Student ID", 0));
        lineEdit_7->setPlaceholderText(QApplication::translate("Register", "Student ID", 0));
        label_9->setText(QApplication::translate("Register", "University", 0));
        lineEdit_8->setPlaceholderText(QApplication::translate("Register", "University", 0));
        label_10->setText(QApplication::translate("Register", "Interval1", 0));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
                                << QApplication::translate("Register", "BeiJing", 0)
                                << QApplication::translate("Register", "ZhengZhou", 0)
                                << QApplication::translate("Register", "ChangChun", 0)
                                << QApplication::translate("Register", "ChongQing", 0)
                                << QApplication::translate("Register", "ChangSha", 0)
                                << QApplication::translate("Register", "ChengDu", 0)
                                << QApplication::translate("Register", "FuZhou", 0)
                                << QApplication::translate("Register", "GuangZhou", 0)
                                << QApplication::translate("Register", "HeFei", 0)
                                << QApplication::translate("Register", "HangZhou", 0)
                                << QApplication::translate("Register", "HaErBin", 0)
                                << QApplication::translate("Register", "KunMing", 0)
                                << QApplication::translate("Register", "NanChang", 0)
                                << QApplication::translate("Register", "NanJing", 0)
                                << QApplication::translate("Register", "ShangHai", 0)
                                << QApplication::translate("Register", "ShenYang", 0)
                                << QApplication::translate("Register", "ShiJiaZhuang", 0)
                                << QApplication::translate("Register", "WuHan", 0)
                                );
        comboBox_2->setCurrentText(QApplication::translate("Register", "BeiJing", 0));
        label_11->setText(QApplication::translate("Register", "Interval2", 0));
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
                                << QApplication::translate("Register", "BeiJing", 0)
                                << QApplication::translate("Register", "ZhengZhou", 0)
                                << QApplication::translate("Register", "ChangChun", 0)
                                << QApplication::translate("Register", "ChongQing", 0)
                                << QApplication::translate("Register", "ChangSha", 0)
                                << QApplication::translate("Register", "ChengDu", 0)
                                << QApplication::translate("Register", "FuZhou", 0)
                                << QApplication::translate("Register", "GuangZhou", 0)
                                << QApplication::translate("Register", "HeFei", 0)
                                << QApplication::translate("Register", "HangZhou", 0)
                                << QApplication::translate("Register", "HaErBin", 0)
                                << QApplication::translate("Register", "KunMing", 0)
                                << QApplication::translate("Register", "NanChang", 0)
                                << QApplication::translate("Register", "NanJing", 0)
                                << QApplication::translate("Register", "ShangHai", 0)
                                << QApplication::translate("Register", "ShenYang", 0)
                                << QApplication::translate("Register", "ShiJiaZhuang", 0)
                                << QApplication::translate("Register", "WuHan", 0)
                                );
        comboBox_3->setCurrentText(QApplication::translate("Register", "BeiJing", 0));
        lineEdit_4->setPlaceholderText(QApplication::translate("Register", "User Id here", 0));
        pushButton->setText(QApplication::translate("Register", "OK", 0));
        pushButton_2->setText(QApplication::translate("Register", "Cancel", 0));
        //
        //
        //
        //
        connect(comboBox,SIGNAL(currentTextChanged(QString)),this,SLOT(DueToType(QString)));
        connect(pushButton,SIGNAL(clicked(bool)),this,SLOT(OK()));
        connect(pushButton_2,SIGNAL(clicked(bool)),this,SLOT(Cancle()));
    }
    //
    //
    //
    //
    {
        wid=new QScrollArea(ticket);
        wid->setGeometry(15,50,1172,500);
        table_in=new QWidget(wid);
        table_in->setGeometry(0,0,1172,5+(1+tickets)*100);
        wid->setWidget(table_in);
        QFont f;
        f.setPointSize(12);
        f.setBold(true);
        ticket_t=new QTableWidget(1+tickets,9,table_in);
        ticket_t->setGeometry(0,0,1172,2+(1+tickets)*100);
        ticket_t->setItem(0,0,new QTableWidgetItem("No."));
        ticket_t->setItem(0,1,new QTableWidgetItem("Person"));
        ticket_t->setItem(0,2,new QTableWidgetItem("Date"));
        ticket_t->setItem(0,3,new QTableWidgetItem("From"));
        ticket_t->setItem(0,4,new QTableWidgetItem("To"));
        ticket_t->setItem(0,5,new QTableWidgetItem("Time of\nDeparture"));
        ticket_t->setItem(0,6,new QTableWidgetItem("Time of\nArrival"));
        ticket_t->setItem(0,7,new QTableWidgetItem("Price"));
        ticket_t->setItem(0,8,new QTableWidgetItem("Cancel\norder"));
        ticket_t->horizontalHeader()->hide();
        ticket_t->verticalHeader()->hide();
        ticket_t->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ticket_t->setSelectionMode(QAbstractItemView::NoSelection);
        for(int i=0;i<1+tickets;i++)
            ticket_t->setRowHeight(i,100);
        for(int i=0;i<9;i++)
            ticket_t->setColumnWidth(i,130);
        for(int i=1;i<1+tickets;i++)
            ticket_t->setItem(i,8,new QTableWidgetItem("Cancel"));
        ticket_t->setFont(f);
        ticket_can=new QPushButton("Cancel",ticket);
        ticket_can->setFont(f);
        ticket_can->setGeometry(1000,620,150,50);
    }
    {
        //get the cols
        QFont f;
        f.setPointSize(12);
        f.setBold(true);
        contract_t=new QTableWidget(4,6,contract);
        contract_t->setGeometry(15,100,1082,402);
        contract_t->setItem(0,0,new QTableWidgetItem("No."));
        contract_t->setItem(0,1,new QTableWidgetItem("Person"));
        contract_t->setItem(0,2,new QTableWidgetItem("TEL"));
        contract_t->setItem(0,3,new QTableWidgetItem("Type"));
        contract_t->setItem(0,4,new QTableWidgetItem("To"));
        contract_t->setItem(0,5,new QTableWidgetItem("Delete"));
        contract_t->horizontalHeader()->hide();
        contract_t->verticalHeader()->hide();
        contract_t->setEditTriggers(QAbstractItemView::NoEditTriggers);
        contract_t->setSelectionMode(QAbstractItemView::NoSelection);
        for(int i=0;i<4;i++)
            contract_t->setRowHeight(i,100);
        for(int i=0;i<6;i++)
            contract_t->setColumnWidth(i,180);
        for(int i=1;i<4;i++)
            contract_t->setItem(i,5,new QTableWidgetItem("Delete"));
        contract_t->setFont(f);
        contract_can=new QPushButton("Cancel",contract);
        contract_can->setFont(f);
        contract_can->setGeometry(900,550,200,100);
        contract_add=new QPushButton("Add Contact",contract);
        contract_add->setFont(f);
        contract_add->setGeometry(600,550,200,100);
    }
    connect(contract_can,SIGNAL(clicked(bool)),this,SLOT(Cancle()));
    connect(ticket_can,SIGNAL(clicked(bool)),this,SLOT(Cancle()));
}
void Update::DueToType(QString s){
    if(s!="Student"){
        comboBox_2->hide();
        comboBox_3->hide();
        label_11->hide();
        label_10->hide();
        lineEdit_7->hide();
        lineEdit_8->hide();
        label_9->hide();
        label_8->hide();
        verticalLayout->setContentsMargins(0, 0, 0, 300);
    }
    else{
        comboBox_2->show();
        comboBox_3->show();
        label_11->show();
        label_10->show();
        lineEdit_7->show();
        lineEdit_8->show();
        label_9->show();
        label_8->show();
        verticalLayout->setContentsMargins(0, 0, 0, 20);
    }
}
void Update::show(){
    tabWidget->setCurrentIndex(0);
    verticalLayout->setContentsMargins(0, 0, 0, 300);
    QMainWindow::show();
    comboBox_2->hide();
    comboBox_3->hide();
    label_11->hide();
    label_10->hide();
    lineEdit_7->hide();
    lineEdit_8->hide();
    label_9->hide();
    label_8->hide();
}

Update::~Update()
{

}
