#ifndef COMMUNICATE_H
#define COMMUNICATE_H

#include "publicbaseclass.h"
class Communicate:public QObject {
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
};

#endif // COMMUNICATE_H
