#include "confirm.h"

Confirm::Confirm(QWidget *parent)
    : QMainWindow(parent)
{
    seat_No=new QLabel* [20];
    sleeper_No=new QLabel*[20];
    seat_checker=new QCheckBox*[120];
    sleeper_checker=new QCheckBox*[60];
    seat_line=new QVBoxLayout*[20];
    sleeper_line=new QVBoxLayout*[20];
    seat_space_1=new QSpacerItem*[20];
    seat_space_2=new QSpacerItem*[20];
    seat_space_3=new QSpacerItem*[20];
    seat_space_4=new QSpacerItem*[20];
    sleeper_space_1=new QSpacerItem*[20];
    sleeper_space_2=new QSpacerItem*[20];
    sleeper_space_3=new QSpacerItem*[20];
    sleeper_space_4=new QSpacerItem*[20];
    this->resize(QSize(1900,900));
    this->setMaximumSize(this->size());
    this->setMinimumSize(this->size());
    {
        seat=new QWidget(this);
        seat->setGeometry(QRect(1, 1, 1600, 400));
        //seat
        seat_layout = new QHBoxLayout(seat);
        seat_layout->setSpacing(6);
        seat_layout->setContentsMargins(11, 11, 11, 11);
        seat_layout->setContentsMargins(0, 0, 0, 0);
        seat_head = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);
        seat_layout->addItem(seat_head);
        seat_label = new QLabel("Choose\nYour\nSeat\nHere",seat);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(seat_label->sizePolicy().hasHeightForWidth());
        seat_label->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(12);
        seat_label->setFont(font);
        seat_label->setWordWrap(true);
        seat_layout->addWidget(seat_label);
        seat_start = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);
        seat_layout->addItem(seat_start);
        for(int i=0;i<20;i++){
            seat_line[i]=new QVBoxLayout();
            seat_line[i]->setSpacing(6);
            seat_No[i]=new QLabel(QString::number(i+1),seat);
            QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
            sizePolicy1.setHorizontalStretch(0);
            sizePolicy1.setVerticalStretch(0);
            sizePolicy1.setHeightForWidth(seat_No[i]->sizePolicy().hasHeightForWidth());
            seat_No[i]->setSizePolicy(sizePolicy1);
            seat_line[i]->addWidget(seat_No[i]);
            seat_space_1[i] = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);
            seat_line[i]->addItem(seat_space_1[i]);
            for(int j=0;j<3;j++){
                QString temp;
                if(j==0) temp="A";
                else if(j==1)temp="B";
                else temp="C";
                seat_checker[6*i+j] = new QCheckBox(temp+QString::number(i),seat);
                QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
                sizePolicy2.setHorizontalStretch(0);
                sizePolicy2.setVerticalStretch(0);
                sizePolicy2.setHeightForWidth(seat_checker[6*i+j]->sizePolicy().hasHeightForWidth());
                seat_checker[6*i+j]->setSizePolicy(sizePolicy2);
                seat_line[i]->addWidget(seat_checker[6*i+j]);
            }
            seat_space_2[i] = new QSpacerItem(10, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);
            seat_line[i]->addItem(seat_space_2[i]);
            for(int j=3;j<6;j++){
                QString temp;
                if(j==0) temp="D";
                else if(j==1)temp="E";
                else temp="F";
                seat_checker[6*i+j] = new QCheckBox(temp+QString::number(i+1),seat);
                QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
                sizePolicy2.setHorizontalStretch(0);
                sizePolicy2.setVerticalStretch(0);
                sizePolicy2.setHeightForWidth(seat_checker[6*i+j]->sizePolicy().hasHeightForWidth());
                seat_checker[6*i+j]->setSizePolicy(sizePolicy2);
                seat_line[i]->addWidget(seat_checker[6*i+j]);
            }
            seat_space_3[i] = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);
            seat_line[i]->addItem(seat_space_2[i]);
            seat_layout->addLayout(seat_line[i]);
            seat_space_4[i] = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);
            seat_layout->addItem(seat_space_4[i]);
        }
    }

    {
        //sleeper
        sleeper=new QWidget(this);
        sleeper->setGeometry(QRect(1, 500, 1600, 400));
        //sleeper
        sleeper_layout = new QHBoxLayout(sleeper);
        sleeper_layout->setSpacing(6);
        sleeper_layout->setContentsMargins(11, 11, 11, 11);
        sleeper_layout->setContentsMargins(0, 0, 0, 0);
        sleeper_head = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);
        sleeper_layout->addItem(sleeper_head);
        sleeper_label = new QLabel("Choose\nYour\nsleeper\nHere",sleeper);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(sleeper_label->sizePolicy().hasHeightForWidth());
        sleeper_label->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(12);
        sleeper_label->setFont(font);
        sleeper_label->setWordWrap(true);
        sleeper_layout->addWidget(sleeper_label);
        sleeper_start = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);
        sleeper_layout->addItem(sleeper_start);
        for(int i=0;i<20;i++){
            sleeper_line[i]=new QVBoxLayout();
            sleeper_line[i]->setSpacing(6);
            sleeper_No[i]=new QLabel(QString::number(i+1),sleeper);
            QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
            sizePolicy1.setHorizontalStretch(0);
            sizePolicy1.setVerticalStretch(0);
            sizePolicy1.setHeightForWidth(sleeper_No[i]->sizePolicy().hasHeightForWidth());
            sleeper_No[i]->setSizePolicy(sizePolicy1);
            sleeper_line[i]->addWidget(sleeper_No[i]);
            sleeper_space_1[i] = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);
            sleeper_line[i]->addItem(sleeper_space_1[i]);
            for(int j=0;j<3;j++){
                QString temp;
                if(j==0) temp="U";
                else if(j==1)temp="M";
                else temp="L";
                sleeper_checker[3*i+j] = new QCheckBox(temp+QString::number(i+1),sleeper);
                QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
                sizePolicy2.setHorizontalStretch(0);
                sizePolicy2.setVerticalStretch(0);
                sizePolicy2.setHeightForWidth(sleeper_checker[3*i+j]->sizePolicy().hasHeightForWidth());
                sleeper_checker[3*i+j]->setSizePolicy(sizePolicy2);
                sleeper_line[i]->addWidget(sleeper_checker[3*i+j]);
            }
            sleeper_space_2[i] = new QSpacerItem(10, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);
            sleeper_line[i]->addItem(sleeper_space_2[i]);
            sleeper_space_3[i] = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);
            sleeper_line[i]->addItem(sleeper_space_2[i]);
            sleeper_layout->addLayout(sleeper_line[i]);
            sleeper_space_4[i] = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);
            sleeper_layout->addItem(sleeper_space_4[i]);
        }
    }
}

Confirm::~Confirm()
{
    delete seat_No;
    delete sleeper_No;
    delete seat_checker;
    delete sleeper_checker;
    delete seat_line;
    delete sleeper_line;
    delete seat_space_1;
    delete seat_space_2;
    delete seat_space_3;
    delete seat_space_4;
    delete sleeper_space_1;
    delete sleeper_space_2;
    delete sleeper_space_3;
    delete sleeper_space_4;
}
