#include "quickquery.h"

QuickQuery::QuickQuery(QWidget *parent)
    : PublicBaseClass(parent)
{
    box_from=new Box(this);
    box_to=new Box(this);
    to=new QLabel("TO",this);
    from=new QLabel("FROM",this);
    date=new QLabel("DATE",this);
    calendar=new Date(this);
    log_in=new SuperTag("Log In",this);
    log_out=new SuperTag("Log Out",this);
    reg=new SuperTag("Register",this);
    name=new SuperTag("",this);
    OK=new SuperTag("OK",this);
//
    QMainWindow::resize(600,800);
    from->setGeometry(50,100,50,50);
    to->setGeometry(50,200,50,50);
    box_from->setGeometry(100,100,500,500);
    box_to->setGeometry(100,200,500,500);
    OK->setGeometry(400,300,100,50);
    reg->setGeometry(300,50,100,50);
    log_in->setGeometry(150,50,100,50);
    log_out->setGeometry(300,50,100,50);
    name->setGeometry(150,50,100,50);
    date->setGeometry(50,300,50,50);
    calendar->setGeometry(50,300,500,500);
//
    connect(OK,SIGNAL(Click()),this,SIGNAL(ok_click()));
    connect(reg,SIGNAL(Click()),this,SIGNAL(reg_click()));
    connect(log_in,SIGNAL(Click()),this,SIGNAL(login_click()));
    connect(name,SIGNAL(Click()),this,SIGNAL(name_click()));
#ifdef ZW_DEBUG_
    connect(this,SIGNAL(ok_click()),this,SLOT(Debug()));
    connect(this,SIGNAL(login_click()),this,SLOT(Debug()));
    connect(this,SIGNAL(reg_click()),this,SLOT(Debug()));
    connect(this,SIGNAL(name_click()),this,SLOT(Debug()));
#endif
}

QuickQuery::~QuickQuery()
{
    delete box_from;
    delete box_to;
    delete to;
    delete from;
    delete date;
    delete calendar;
    delete log_in;
    delete log_out;
    delete reg;
    delete name;
    delete OK;
}

void QuickQuery::show(){
    QMainWindow::show();
    box_from->show();
    box_to->show();
    to->show();
    from->show();
    date->show();
    calendar->show();
    if(1){
        log_in->show();
        reg->show();
        name->hide();
        log_out->hide();
    }
    else{
        log_in->hide();
        reg->hide();
        name->show();
        log_out->show();
    }
    OK->show();
}
