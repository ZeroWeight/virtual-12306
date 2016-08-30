#ifndef BASIC_H
#define BASIC_H
#include <cassert>
#include <cstring>
#include <QApplication>
#include <QCalendarWidget>
#include <QDate>
#include <QDateEdit>
#include <QDebug>
#include <QEvent>
#include <QLabel>
#include <QLineEdit>
#include <QList>
#include <QListWidget>
#include <QMainWindow>
#include <QMouseEvent>
#include <QtNetwork>
#include <QObject>
#include <QPushButton>
#include <QString>
#include <QWidget>
#define UndefArgument void
#define UndefTypeValue
#define MAXBUFFERSIZE 256
#define BUFFERSIZE 64
#define SHORTBUFFERSIZE 16
#define ZW_DEBUG_
#define ACK "0123456879"
enum MODE_S{
    NONE=0,
};
enum MODE_R{
    NONE=0,
};

class Message{
public:
    MODE_S mode;
    int message_length;
    virtual char* Code()const =0;
};

#endif // BASIC_H
