#include "confirm.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Confirm w;
    w.show();

    return a.exec();
}
