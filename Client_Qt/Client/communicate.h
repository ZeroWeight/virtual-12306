#ifndef COMMUNICATE_H
#define COMMUNICATE_H

#include "publicbaseclass.h"
class Communicate:public User {
    Q_OBJECT
private:
   QTcpSocket* socket;
   MODE m;
   char* buffer;
   char* temp;
   bool ack;
private slots:
   void listen();
public:
   Communicate();
public slots:
   void get_from_query(int,int,QDate);
   void log_in(QString,QString);
};

#endif // COMMUNICATE_H
