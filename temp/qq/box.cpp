#include "box.h"
#include "station.hpp"
#include <QDebug>
Box::Box(QWidget *parent):QWidget(parent){
    line=new QLineEdit(this);
    list=new QListWidget(this);
    line->setGeometry(0,0,200,50);
    connect(line,SIGNAL(textChanged(QString)),this,SLOT(FillList(QString)));
    connect(list,SIGNAL(itemClicked(QListWidgetItem*)),this,SLOT(FillLine(QListWidgetItem*)));
}
void Box::show(){
    QWidget::show();
    list->hide();
    line->show();
}
void Box::FillList(QString s){
    list->clear();
    if(s.length()==0) {
        list->hide();
        return;
    }
    int count=0;
    for(int i=0;i<ALL;i++)
        if(NAME[i].mid(0,s.length()).toUpper()==s.toUpper()){
            count++;
            list->addItem(NAME[i]);
        }
    if(!count++)
        list->addItem("No Match Stations");
    list->setGeometry(200,0,200,count*30);
    list->show();
}
void Box::FillLine(QListWidgetItem* s){
    if(s->text()=="No Match Stations"){
        line->setText("");
        list->hide();
    }
    line->setText(s->text());
    list->hide();
}
Box::~Box(){
    delete line;
    delete list;
}
