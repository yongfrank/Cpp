#include "EasyCalculator.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    EasyCalculator w;
    w.show();
    return a.exec();
}
