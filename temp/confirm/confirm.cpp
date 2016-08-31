#include "confirm.h"

Confirm::Confirm(QWidget *parent)
    : QMainWindow(parent)
{
    //seat
    seat=new QWidget(this);
    seat->setGeometry(QRect(1, 1, 301, 302));
    seat_layout = new QHBoxLayout(widget);
    seat_layout->setSpacing(6);
    seat_layout->setContentsMargins(11, 11, 11, 11);
    seat_layout->setContentsMargins(0, 0, 0, 0);
    seat_head = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);
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
    seat_start = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);
    seat_layout->addItem(seat_start);

}

Confirm::~Confirm()
{

}
