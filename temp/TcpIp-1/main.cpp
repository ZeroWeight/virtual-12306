#include <QCoreApplication>
#include "server.h"
int main(int argc, char *argv[])
{
    Server a(argc,argv);
    return a.exec();
}
