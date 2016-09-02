#ifndef BASIC_H
#define BASIC_H
#include <cassert>
#include <cstring>
#include <QAction>
#include <QApplication>
#include <QButtonGroup>
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
#include <QMessageBox>
#include <QMouseEvent>
#include <QtNetwork>
#include <QRadioButton>
#include <QTableWidget>
#include <QtNetwork>
#include <QObject>
#include <QPushButton>
#include <QScrollArea>
#include <QScrollBar>
#include <QSpacerItem>
#include <QString>
#include <QVariant>
#include <QVBoxLayout>
#include <QWidget>
#include <QWidgetItem>
#define BUFFER 1024
#define ZW_DEBUG_
#define ACK "0123456789\0"
enum MODE{
    NONE=0,
    Q_S,
};

class Message{
public:
    MODE mode;
    int message_length;
    virtual char* Code()const =0;
};

#endif // BASIC_H
