#include "qt_tcpfileserver.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Qt_tcpfileserver w;
    w.show();
    return a.exec();
}
