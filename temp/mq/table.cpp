#include "table.h"
#include <QHeaderView>
#include <QWidgetItem>
Table::Table(QWidget *parent):QWidget(parent){
    price_hidden=true;
    table=new QTableWidget(2,6,this);
    button=new QPushButton("Buy",this);
    table->horizontalHeader()->setVisible(false);
    table->verticalHeader()->setVisible(false);
    for(int i=0;i<6;i++)
        table->setColumnWidth(i,200);
    for(int i=0;i<2;i++)
        table->setRowHeight(i,100);
    table->setGeometry(0,0,table->columnCount()*table->columnWidth(0)+2,
                       (table->rowCount()-1)*table->rowHeight(0)+1);
    table->setRowHidden(1,true);
    button->setGeometry((table->columnCount()-1)*table->columnWidth(0)+25,
                        12,150,75);
    table->setEditTriggers(QAbstractItemView::NoEditTriggers);
    connect(table,SIGNAL(cellClicked(int,int)),this,SLOT(Details(int,int)));
    connect(button,SIGNAL(clicked(bool)),this,SLOT(Push()));
    //
    table->setItem(0,0,new QTableWidgetItem("D51"));
}
void Table::show(){
    QWidget::show();
}
void Table::Push(){
    Buy(table->item(0,0)->text());
}
void Table::Details(int row, int col){
    if(col==0&&row==0)
        Route(table->item(0,0)->text());
    else if(col==3||col==4)
        if(price_hidden){
            table->setGeometry(0,0,table->columnCount()*table->columnWidth(0)+2,
                               table->rowCount()*table->rowHeight(0)+2);
            table->setRowHidden(1,false);
            price_hidden=false;
            Reload(true);
        }
        else{
            table->setGeometry(0,0,table->columnCount()*table->columnWidth(0)+2,
                               (table->rowCount()-1)*table->rowHeight(0)+1);
            table->setRowHidden(1,true);
            price_hidden=true;
            Reload(false);
        }
}
