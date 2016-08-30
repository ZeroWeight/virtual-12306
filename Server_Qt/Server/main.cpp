#include "server.h"

int main(int argc, char *argv[])
{
    Server s(argc,argv);
    return s.exec();
}
