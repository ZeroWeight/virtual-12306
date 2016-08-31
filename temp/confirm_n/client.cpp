#include "client.h"
#include <QHeaderView>
#include <QScrollBar>
Client::Client(QWidget *parent)
    : QMainWindow(parent)
{
    seat=new QTableWidget(10,21,this);
    seat->setGeometry(1,1,842,410);
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
            seat->setItem(i,j,item);
        }
    for(int i=6;i<9;i++)
        for(int j=1;j<21;j++){
            QTableWidgetItem *item = new QTableWidgetItem();
            item->setBackground(QBrush(QColor(0, 255, 128)));
            seat->setItem(i,j,item);
        }
    setStyleSheet("QTableWidget::item:selected { background-color: rgba(0, 0, 255,0.3) }");
    connect(seat,SIGNAL(cellDoubleClicked(int,int)),this,SLOT(seat_set(int,int)));


    sleeper=new QTableWidget(4,21,this);
    sleeper->setGeometry(1,501,842,162);
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
            sleeper->setItem(i,j,item);
        }
    setStyleSheet("QTableWidget::item:selected { background-color: rgba(0, 0, 255,0.3) }");
    connect(sleeper,SIGNAL(cellDoubleClicked(int,int)),this,SLOT(sleeper_set(int,int)));

}
void Client::seat_set(int x, int y){
    if(1&&x>=1&&x<=8&&x!=4&&x!=5&&y!=0){//check the box
        if(seat->item(x,y)->backgroundColor()==QColor(0, 255, 128)){
            QTableWidgetItem *item = new QTableWidgetItem();
            item->setBackground(QBrush(QColor(0, 0, 255)));
            seat->setItem(x,y,item);
            seat->setCurrentCell(-1,-1);
        }
        else{
            QTableWidgetItem *item = new QTableWidgetItem();
            item->setBackground(QBrush(QColor(0, 255, 128)));
            seat->setItem(x,y,item);
            seat->setCurrentCell(-1,-1);
        }
    }
    else return;
}
void Client::sleeper_set(int x, int y){
    if(1&&x>=1&&y!=0){//check the box
        if(sleeper->item(x,y)->backgroundColor()==QColor(0, 255, 128)){
            QTableWidgetItem *item = new QTableWidgetItem();
            item->setBackground(QBrush(QColor(0, 0, 255)));
            sleeper->setItem(x,y,item);
            sleeper->setCurrentCell(-1,-1);
        }
        else{
            QTableWidgetItem *item = new QTableWidgetItem();
            item->setBackground(QBrush(QColor(0, 255, 128)));
            sleeper->setItem(x,y,item);
            sleeper->setCurrentCell(-1,-1);
        }
    }
    else return;
}

Client::~Client()
{

}
