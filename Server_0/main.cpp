#include "myserver.h"
#include "base.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MyServer     server(2323);
    server.show();

    Base bd("Base.db");

    return a.exec();
}
