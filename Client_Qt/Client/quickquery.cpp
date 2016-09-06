#include "quickquery.h"

QuickQuery::QuickQuery(QWidget *parent)
    : User(parent)
{
    QFont font;
    font.setPointSize(16);
    this->setFont(font);
    box_from=new Box("Enter your Depart",this);
    box_to=new Box("Enter your destination",this);
    to=new QLabel("TO",this);
    from=new QLabel("FROM",this);
    date=new QLabel("DATE",this);
    calendar=new Date(this);
    log_in=new SuperTag("Log In",this);
    log_out=new SuperTag("Log Out",this);
    reg=new SuperTag("Register",this);
    name=new SuperTag("Name",this);
    OK=new SuperTag("OK",this);
//
    QMainWindow::resize(700,900);
    from->setGeometry(50,100,100,100);
    to->setGeometry(50,250,100,100);
    box_from->setGeometry(200,125,500,500);
    box_to->setGeometry(200,275,500,500);
    OK->setGeometry(600,800,100,100);
    reg->setGeometry(300,25,200,100);
    log_in->setGeometry(150,25,200,100);
    log_out->setGeometry(300,25,200,100);
    name->setGeometry(150,25,200,100);
    date->setGeometry(50,400,100,100);
    calendar->setGeometry(150,425,500,500);
//
    connect(OK,SIGNAL(Click()),this,SLOT(ok()));
    connect(reg,SIGNAL(Click()),this,SIGNAL(reg_click()));
    connect(log_in,SIGNAL(Click()),this,SIGNAL(login_click()));
    connect(name,SIGNAL(Click()),this,SIGNAL(name_click()));
    connect(log_out,SIGNAL(Click()),this,SLOT(logout_click()));
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
    if(!is_log_in){
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
void QuickQuery::ok(){
    int to,from;
    for(from=0;from<ALL;from++)
        if(NAME[from].toUpper()==QString(box_from->text()).toUpper())
            break;
    if(from==ALL){
        QMessageBox* a=new QMessageBox(this);
        a->setText("Departure invaild");
        a->show();
        box_from->clear();
        return ;
    }
    for(to=0;to<ALL;to++)
        if(NAME[to].toUpper()==QString(box_to->text()).toUpper())
            break;
    if(to==ALL){
        QMessageBox* a=new QMessageBox(this);
        a->setText("Destination invaild");
        a->show();
        box_to->clear();
        return ;
    }
    if(to==from){
        QMessageBox* a=new QMessageBox(this);
        a->setText("The Destination and the Departuature are the same station");
        a->show();
        box_to->clear();
        box_from->clear();
        return ;
    }
    ok_click(to,from,calendar->date());
}
