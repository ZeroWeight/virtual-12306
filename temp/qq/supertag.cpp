#include "supertag.h"
void SuperTag::mouseMoveEvent(QMouseEvent *ev){
    //do sth
}

void SuperTag::mousePressEvent(QMouseEvent *ev){
    if(ev->button()==Qt::LeftButton)
        Click();
}
SuperTag::SuperTag(const QString s, QWidget *parent):QLabel(s,parent){

}
