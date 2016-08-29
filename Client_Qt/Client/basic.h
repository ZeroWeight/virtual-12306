#ifndef BASIC_H
#define BASIC_H
#include <QDebug>
#include <QtNetwork>
#include <QObject>
#include <QString>
#include <QList>
#include <QApplication>
#include <QMainWindow>
#include <QPushButton>
#include <cstring>
#include <cassert>
#define UndefArgument void
#define UndefTypeValue
#define MAXBUFFERSIZE 256
#define BUFFERSIZE 64
#define SHORTBUFFERSIZE 16
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
