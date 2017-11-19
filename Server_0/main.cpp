#include "myserver.h"
#include <QApplication>
#include "handler.h"
#include <locale>

int main(int argc, char *argv[])
{
    setlocale( LC_ALL,"Russian" );
    QApplication a(argc, argv);

    Handler response;

    MyServer     server(2323, response);
    server.show(); 

//    Base bd("Base.db");
//    bd.open();
//    Table users( bd.setTable("Users") );
//    users.select();

//    users.setValue("Surname", "NewName");
//    users.setValue("DateOfChange", "12.12.12");
//    users.setValue("Gender", "M");
//    users.insertLine();

//    users.setValue("Surname", "NewName");
//    users.select();
//    while (users.next()) {
//         qDebug() << users.getValue("Surname").toString();
//         qDebug() << users.getValue("DateOfChange").toString();
//         qDebug() << users.getValue("Gender").toString();
//     }

//    bd.close();

    return a.exec();
}
