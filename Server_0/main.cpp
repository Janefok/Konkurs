#include "myserver.h"
#include "base.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MyServer     server(2323);
    server.show();

    Base bd("Base.db");
    bd.open();

    Table users( bd.setTable("Users") );

    users.select();

    while (users.next()) {
        qDebug() << users.getValue("Surname").toString();
    }

    users.setValue("Surname", "some");
    users.setValue("DateOfChange", "11.11.11");
    users.setValue("Gender", "m");
    users.insertLine();

    while (users.next()) {
        qDebug() << users.getValue("Surname").toString();
    }

    bd.close();

    return a.exec();
}
