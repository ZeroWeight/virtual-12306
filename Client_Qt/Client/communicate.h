#ifndef COMMUNICATE_H
#define COMMUNICATE_H

#include "publicbaseclass.h"
class Communicate:public QObject {
    Q_OBJECT
public:
    Communicate(QObject *parent = 0);
public slots:
    void Send(Message &message);

signals:
    void LogIn_(UndefArgument);
    void MainQuery_(UndefArgument);
    void Confirm_(UndefArgument);
private:
    MODE_R mode;
    char* buffer;
    Message* message;
    QTcpSocket *socket;
    bool sending;
    void DeCoding();
private slots:
    void GetConnect();
    void LostConnect();
    void Listen();
};

#endif // COMMUNICATE_H
