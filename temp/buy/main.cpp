#include "buy.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Buy w;
    w.show();

    return a.exec();
}
