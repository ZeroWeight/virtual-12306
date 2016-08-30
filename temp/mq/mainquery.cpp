#include "mainquery.h"
#include <QHeaderView>
MainQuery::MainQuery(QWidget *parent)
    : QMainWindow(parent)
{
    count=1;//temp
    train_l=new QLabel("Train Level",this);
    g=new QCheckBox("G",this);
    d=new QCheckBox("D",this);
    t=new QCheckBox("T",this);
    z=new QCheckBox("Z",this);
    k=new QCheckBox("K",this);
    n=new QCheckBox("Normal",this);
    src_l=new QLabel("FROM",this);
    des_l=new QLabel("TO",this);
    date_l=new QLabel("DATE",this);
    header=new QTableWidget(1,6,this);
    log_in=new SuperTag("Log In",this);
    log_out=new SuperTag("Log Out",this);
    date=new Date(this);
    reg=new SuperTag("Register",this);
    name=new SuperTag("",this);
    table=new Table*[count];
    for(int i=0;i<count;i++)
        table[i]=new Table(i,this);
    //
    src=new Box("Enter your Depart",this);
    des=new Box("Enter your destination",this);
    header->setItem(0,0,new QTableWidgetItem("Train ID"));
    header->setItem(0,1,new QTableWidgetItem("Destination\nArrival"));
    header->setItem(0,2,new QTableWidgetItem("Des Time\nArr Time"));
    header->setItem(0,3,new QTableWidgetItem("Couchette"));
    header->setItem(0,4,new QTableWidgetItem("Ordinary"));
    header->setItem(0,5,new QTableWidgetItem("Notes"));
    log_in->setGeometry(1300,25,100,50);
    name->setGeometry(log_in->geometry());
    log_out->setGeometry(1500,25,100,50);
    reg->setGeometry(log_out->geometry());
    src_l->setGeometry(50,100,100,50);
    des_l->setGeometry(500,100,100,50);
    src->setGeometry(100,100,400,200);
    des->setGeometry(550,100,400,200);
    date_l->setGeometry(1300,100,100,50);
    date->setGeometry(1300,100,500,500);
    train_l->setGeometry(1050,25,100,50);
    g->setGeometry(950,75,50,50);
    d->setGeometry(1050,75,50,50);
    z->setGeometry(1150,75,50,50);
    t->setGeometry(950,125,50,50);
    k->setGeometry(1050,125,50,50);
    n->setGeometry(1150,125,100,50);
    for(int i=0;i<6;i++)
        header->setColumnWidth(i,200);
    header->setRowHeight(0,100);
    header->horizontalHeader()->setVisible(false);
    header->verticalHeader()->setVisible(false);
    header->setEditTriggers(QAbstractItemView::NoEditTriggers);
    header->setSelectionMode(QAbstractItemView::NoSelection);
    header->setGeometry(50,200,header->columnCount()*header->columnWidth(0)+2,
                       header->rowCount()*header->rowHeight(0)+1);
    for(int i=0;i<count;i++)
        table[i]->setGeometry(50,200+(i+1)*header->rowHeight(0),
                             header->columnCount()*header->columnWidth(0)+2,
                              2*header->rowCount()*header->rowHeight(0)+2);
    //


}

MainQuery::~MainQuery()
{

}
void MainQuery::show(){
    QMainWindow::showMaximized();
    src_l->show();
    src->show();
    des->show();
    des_l->show();
    date_l->show();
    date->show();
    header->show();
    for(int i=0;i<count;i++)
        table[i]->show();
    if(1){
        log_in->show();
        reg->show();
        log_out->hide();
        name->hide();
    }
    else{
        log_in->hide();
        reg->hide();
        log_out->show();
        name->show();
    }
}
