#include "quickquery.h"
#include <QApplication>
#include "date.h"
#include "box.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QuickQuery w;
    w.show();

    return a.exec();
}
