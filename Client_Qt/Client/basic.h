#ifndef BASIC_H
#define BASIC_H
#include <cassert>
#include <cstring>
#include <QApplication>
#include <QCalendarWidget>
#include <QCheckBox>
#include <QComboBox>
#include <QDate>
#include <QDateEdit>
#include <QDebug>
#include <QDialogButtonBox>
#include <QEvent>
#include <QFormLayout>
#include <QHBoxLayout>
#include <QHeaderView>
#include <QLabel>
#include <QLCDNumber>
#include <QLineEdit>
#include <QList>
#include <QListWidget>
#include <QMainWindow>
#include <QMouseEvent>
#include <QTableWidget>
#include <QtNetwork>
#include <QObject>
#include <QPushButton>
#include <QScrollArea>
#include <QScrollBar>
#include <QSpacerItem>
#include <QString>
#include <QVBoxLayout>
#include <QWidget>
#include <QWidgetItem>
#define UndefArgument void
#define UndefTypeValue
#define MAXBUFFERSIZE 256
#define BUFFERSIZE 64
#define SHORTBUFFERSIZE 16
#define ZW_DEBUG_
#define ACK "0123456879"
enum MODE{
    NONE=0,
};

class Message{
public:
    MODE mode;
    int message_length;
    virtual char* Code()const =0;
};

#endif // BASIC_H
