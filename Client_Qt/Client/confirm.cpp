#include "confirm.h"
Confirm::Confirm(QWidget *parent)
    : User(parent)
{
    seat=new QTableWidget(10,21,this);
    seat->setGeometry(101,601,842,410);
    for(int i=0;i<9;i++){
        seat->setRowHeight(i,40);
    }
    for(int i=0;i<21;i++)
        seat->setColumnWidth(i,40);
    seat->verticalHeader()->hide();
    seat->verticalScrollBar()->hide();
    seat->horizontalHeader()->hide();
    seat->horizontalScrollBar()->hide();
    for(int i=1;i<21;i++){
        seat->setItem(0,i,new QTableWidgetItem(QString::number(i)));
        seat->setItem(9,i,new QTableWidgetItem(QString::number(i)));
    }
    seat->setItem(1,0,new QTableWidgetItem("A"));
    seat->setItem(2,0,new QTableWidgetItem("B"));
    seat->setItem(3,0,new QTableWidgetItem("C"));
    seat->setItem(6,0,new QTableWidgetItem("D"));
    seat->setItem(7,0,new QTableWidgetItem("E"));
    seat->setItem(8,0,new QTableWidgetItem("F"));
    for(int i=0;i<3;i++){
        seat->setItem(4,2+6*i,new QTableWidgetItem("A"));
        seat->setItem(4,3+6*i,new QTableWidgetItem("I"));
        seat->setItem(4,4+6*i,new QTableWidgetItem("S"));
        seat->setItem(4,5+6*i,new QTableWidgetItem("L"));
        seat->setItem(4,6+6*i,new QTableWidgetItem("E"));
        seat->setItem(5,2+6*i,new QTableWidgetItem("A"));
        seat->setItem(5,3+6*i,new QTableWidgetItem("I"));
        seat->setItem(5,4+6*i,new QTableWidgetItem("S"));
        seat->setItem(5,5+6*i,new QTableWidgetItem("L"));
        seat->setItem(5,6+6*i,new QTableWidgetItem("E"));
    }
    seat->setEditTriggers(QAbstractItemView::NoEditTriggers);
    //ok area
    //need to check the box
    for(int i=1;i<4;i++)
        for(int j=1;j<21;j++){
            QTableWidgetItem *item = new QTableWidgetItem();
            item->setBackground(QBrush(QColor(0, 255, 128)));
            QString temp;
            if(i==1) temp="A";
            else if(i==2) temp="B";
            else temp="C";
            item->setToolTip(QString::number(j)+temp);
            seat->setItem(i,j,item);
        }
    for(int i=6;i<9;i++)
        for(int j=1;j<21;j++){
            QTableWidgetItem *item = new QTableWidgetItem();
            item->setBackground(QBrush(QColor(0, 255, 128)));
            QString temp;
            if(i==6) temp="D";
            else if(i==7) temp="E";
            else temp="F";
            item->setToolTip(QString::number(j)+temp);
            seat->setItem(i,j,item);
        }
    seat->setSelectionMode(QAbstractItemView::NoSelection);
    connect(seat,SIGNAL(cellClicked(int,int)),this,SLOT(seat_set(int,int)));


    sleeper=new QTableWidget(4,21,this);
    sleeper->setGeometry(101,601,842,162);
    for(int i=0;i<4;i++){
        sleeper->setRowHeight(i,40);
    }
    for(int i=0;i<21;i++)
        sleeper->setColumnWidth(i,40);
    sleeper->verticalHeader()->hide();
    sleeper->verticalScrollBar()->hide();
    sleeper->horizontalHeader()->hide();
    sleeper->horizontalScrollBar()->hide();
    for(int i=1;i<21;i++){
        sleeper->setItem(0,i,new QTableWidgetItem(QString::number(i)));
        sleeper->setItem(9,i,new QTableWidgetItem(QString::number(i)));
    }
    sleeper->setItem(1,0,new QTableWidgetItem("U"));
    sleeper->setItem(2,0,new QTableWidgetItem("M"));
    sleeper->setItem(3,0,new QTableWidgetItem("D"));
    sleeper->setEditTriggers(QAbstractItemView::NoEditTriggers);
    //ok area
    //need to check the box
    for(int i=1;i<4;i++)
        for(int j=1;j<21;j++){
            QTableWidgetItem *item = new QTableWidgetItem();
            item->setBackground(QBrush(QColor(0, 255, 128)));
            QString temp;
            if(i==1) temp="U";
            else if(i==2) temp="M";
            else temp="D";
            item->setToolTip(QString::number(j)+temp);
            sleeper->setItem(i,j,item);
        }
    sleeper->setSelectionMode(QAbstractItemView::NoSelection);
    connect(sleeper,SIGNAL(cellClicked(int,int)),this,SLOT(sleeper_set(int,int)));

    count=3;//should be defined
    name=new QTableWidget(5,2,this);
    name->setGeometry(101,51,402,256);
    name->horizontalHeader()->hide();
    name->verticalHeader()->hide();
    name->horizontalScrollBar()->hide();
    name->verticalScrollBar()->hide();
    for(int i=0;i<5;i++)
        name->setRowHeight(i,50);
    for(int i=0;i<2;i++)
        name->setColumnWidth(i,200);
    name->setItem(0,0,new QTableWidgetItem("Name"));
    name->setItem(0,1,new QTableWidgetItem("Seat"));
    for(int i=1;i<5;i++)
        name->setItem(i,1,new QTableWidgetItem("Not Selected"));
    l1=new QLabel("Occupied",this);
    l1->setGeometry(101,450,200,100);
    l2=new QLabel("Empty",this);
    l2->setGeometry(401,450,200,100);
    l3=new QLabel("Your choice",this);
    l3->setGeometry(701,450,200,100);
    QFont f;
    f.setBold(true);
    f.setPointSize(12);
    l1->setFont(f);
    l2->setFont(f);
    l3->setFont(f);
    l1->setStyleSheet("background-color:red");
    l2->setStyleSheet("background-color: rgb(0, 255, 128)");
    l3->setStyleSheet("background-color:blue");
    l1->setAlignment(Qt::AlignCenter);
    l2->setAlignment(Qt::AlignCenter);
    l3->setAlignment(Qt::AlignCenter);

    d1=new QLCDNumber(1,this);
    d2=new QLCDNumber(1,this);
    d3=new QLCDNumber(1,this);
    d1->setGeometry(800,51,150,150);
    d2->setGeometry(600,251,150,150);
    d3->setGeometry(1000,251,150,150);

    ld1=new QLabel("Total seat",this);
    ld2=new QLabel("Choosen seat",this);
    ld3=new QLabel("Seats to choose",this);
    ld1->setGeometry(650,100,200,50);
    ld2->setGeometry(550,200,200,50);
    ld3->setGeometry(950,200,200,50);
    ld1->setFont(f);
    ld2->setFont(f);
    ld3->setFont(f);
    d1->display(3);
    d3->display(d1->intValue());
}
void Confirm::seat_set(int x, int y){
    if(x>=1&&x<=8&&x!=4&&x!=5&&y!=0){//check the box
        if(d3->intValue()&&seat->item(x,y)->backgroundColor()==QColor(0, 255, 128)){
            QTableWidgetItem *item = new QTableWidgetItem();
            item->setBackground(QBrush(QColor(0, 0, 255)));
            seat->setItem(x,y,item);
            seat->setCurrentCell(-1,-1);
            QString temp;
            int i;
            for(i=1;i<1+d1->intValue();i++){
                if(name->item(i,1)->text()=="Not Selected")
                    break;
            }
            if(i==1+d1->intValue()) return;
            switch(x){
            case 1:
                temp="A";
                break;
            case 2:
                temp="B";
                break;
            case 3:
                temp="C";
                break;
            case 6:
                temp="D";
                break;
            case 7:
                temp="E";
                break;
            case 8:
                temp="F";
                break;
            }
            name->item(i,1)->setText(QString::number(y)+temp);
            d2->display(d2->intValue()+1);
            d3->display(d3->intValue()-1);
        }
        else{
            QTableWidgetItem *item = new QTableWidgetItem();
            item->setBackground(QBrush(QColor(0, 255, 128)));
            seat->setItem(x,y,item);
            seat->setCurrentCell(-1,-1);
            QString temp;
            switch(x){
            case 1:
                temp="A";
                break;
            case 2:
                temp="B";
                break;
            case 3:
                temp="C";
                break;
            case 6:
                temp="D";
                break;
            case 7:
                temp="E";
                break;
            case 8:
                temp="F";
                break;
            }
            temp=QString::number(y)+temp;
            for(int i=1;i<1+d1->intValue();i++)
                if(name->item(i,1)->text()==temp)
                    name->item(i,1)->setText("Not Selected");
            d2->display(d2->intValue()+1);
            d3->display(d3->intValue()+1);
        }
    }
    else return;
}
void Confirm::sleeper_set(int x, int y){
    if(x>=1&&y!=0){//check the box
        if(d3->intValue()&&sleeper->item(x,y)->backgroundColor()==QColor(0, 255, 128)){
            QTableWidgetItem *item = new QTableWidgetItem();
            item->setBackground(QBrush(QColor(0, 0, 255)));
            sleeper->setItem(x,y,item);
            sleeper->setCurrentCell(-1,-1);
            QString temp;
            int i;
            for(i=1;i<1+d1->intValue();i++){
                if(name->item(i,1)->text()=="Not Selected")
                    break;
            }
            switch(x){
            case 1:
                temp="U";
                break;
            case 2:
                temp="M";
                break;
            case 3:
                temp="D";
                break;
            }
            name->item(i,1)->setText(QString::number(y)+temp);
            d2->display(d2->intValue()+1);
            d3->display(d3->intValue()-1);
        }
        else{
            QTableWidgetItem *item = new QTableWidgetItem();
            item->setBackground(QBrush(QColor(0, 255, 128)));
            sleeper->setItem(x,y,item);
            sleeper->setCurrentCell(-1,-1);
            QString temp;
            switch(x){
            case 1:
                temp="U";
                break;
            case 2:
                temp="M";
                break;
            case 3:
                temp="D";
                break;
            }
            temp=QString::number(y)+temp;
            int i;
            for(i=1;i<1+d1->intValue();i++)
                if(name->item(i,1)->text()==temp){
                    name->item(i,1)->setText("Not Selected");
                    d2->display(d2->intValue()-1);
                    d3->display(d3->intValue()+1);
                }
        }
    }
    else return;
}

void Confirm::show(){
    QMainWindow::show();
    if(0)
        sleeper->hide();
    else
        seat->hide();
}

Confirm::~Confirm()
{

}
