#include "login.h"

LogIn::LogIn(QWidget *parent)
    : QMainWindow(parent)
{
    this->resize(400, 361);
    widget = new QWidget(this);
    widget->setGeometry(QRect(0, 0, 401, 361));
    verticalLayout = new QVBoxLayout(widget);
    verticalLayout->setSpacing(6);
    verticalLayout->setContentsMargins(11, 11, 11, 11);
    verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
    verticalLayout->setContentsMargins(0, 0, 0, 0);
    verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);
    verticalLayout->addItem(verticalSpacer_3);
    horizontalLayout = new QHBoxLayout();
    horizontalLayout->setSpacing(6);
    horizontalSpacer = new QSpacerItem(60, 40, QSizePolicy::Fixed, QSizePolicy::Minimum);
    horizontalLayout->addItem(horizontalSpacer);
    label = new QLabel("User Name",widget);
    QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
    label->setSizePolicy(sizePolicy);
    horizontalLayout->addWidget(label);
    horizontalSpacer_2 = new QSpacerItem(60, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);
    horizontalLayout->addItem(horizontalSpacer_2);
    lineEdit = new QLineEdit(widget);
    lineEdit->setPlaceholderText("User Name Here");
    QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Minimum);
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
    lineEdit->setSizePolicy(sizePolicy1);
    horizontalLayout->addWidget(lineEdit);
    horizontalSpacer_3 = new QSpacerItem(60, 40, QSizePolicy::Fixed, QSizePolicy::Minimum);
    horizontalLayout->addItem(horizontalSpacer_3);
    verticalLayout->addLayout(horizontalLayout);
    verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);
    verticalLayout->addItem(verticalSpacer);
    horizontalLayout_2 = new QHBoxLayout();
    horizontalLayout_2->setSpacing(6);
    horizontalSpacer_4 = new QSpacerItem(60, 40, QSizePolicy::Fixed, QSizePolicy::Minimum);
    horizontalLayout_2->addItem(horizontalSpacer_4);
    label_2 = new QLabel("Password",widget);
    sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
    label_2->setSizePolicy(sizePolicy);
    horizontalLayout_2->addWidget(label_2);
    horizontalSpacer_5 = new QSpacerItem(60, 40, QSizePolicy::Fixed, QSizePolicy::Minimum);
    horizontalLayout_2->addItem(horizontalSpacer_5);
    lineEdit_2 = new QLineEdit(widget);
    lineEdit_2->setEchoMode(QLineEdit::Password);
    lineEdit_2->setPlaceholderText("Password here");
    sizePolicy1.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
    lineEdit_2->setSizePolicy(sizePolicy1);
    horizontalLayout_2->addWidget(lineEdit_2);
    horizontalSpacer_6 = new QSpacerItem(60, 40, QSizePolicy::Fixed, QSizePolicy::Minimum);
    horizontalLayout_2->addItem(horizontalSpacer_6);
    verticalLayout->addLayout(horizontalLayout_2);
    verticalSpacer_2 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Fixed);
    verticalLayout->addItem(verticalSpacer_2);
    horizontalLayout_3 = new QHBoxLayout();
    horizontalLayout_3->setSpacing(6);
    horizontalSpacer_7 = new QSpacerItem(60, 40, QSizePolicy::Fixed, QSizePolicy::Minimum);
    horizontalLayout_3->addItem(horizontalSpacer_7);
    pushButton = new QPushButton("OK",widget);
    QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
    sizePolicy2.setHorizontalStretch(0);
    sizePolicy2.setVerticalStretch(0);
    sizePolicy2.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
    pushButton->setSizePolicy(sizePolicy2);
    horizontalLayout_3->addWidget(pushButton);
    horizontalSpacer_9 = new QSpacerItem(60, 40, QSizePolicy::Fixed, QSizePolicy::Minimum);
    horizontalLayout_3->addItem(horizontalSpacer_9);
    pushButton_2 = new QPushButton("Cancel",widget);
    sizePolicy2.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
    pushButton_2->setSizePolicy(sizePolicy2);
    horizontalLayout_3->addWidget(pushButton_2);
    horizontalSpacer_8 = new QSpacerItem(60, 40, QSizePolicy::Fixed, QSizePolicy::Minimum);
    horizontalLayout_3->addItem(horizontalSpacer_8);
    verticalLayout->addLayout(horizontalLayout_3);
    verticalSpacer_4 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Fixed);
    verticalLayout->addItem(verticalSpacer_4);
    connect(pushButton,SIGNAL(clicked(bool)),this,SIGNAL(OK()));
    connect(pushButton_2,SIGNAL(clicked(bool)),this,SLOT(hide()));
    connect(pushButton_2,SIGNAL(clicked(bool)),lineEdit,SLOT(clear()));
    connect(pushButton_2,SIGNAL(clicked(bool)),lineEdit,SLOT(clear()));

}

LogIn::~LogIn()
{

}
