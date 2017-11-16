#include "handler.h"

Handler::Handler()
{
     bd = new Base("Base.db");
}

QString Handler::Setfunc(QString str){
    QString Result;
    bd->open();
    if(str == "LOAD/Users"){
        //Table users( bd->setTable("Users") );
//        users.select();
//        while (users.next()) {
//             qDebug() << users.getValue("Surname").toString();
//             qDebug() << users.getValue("DateOfChange").toString();
//             qDebug() << users.getValue("Gender").toString();
//         }
//          users.setValue("Surname", "Admin");
//          users.select();
//          while (users.next()) {
//               qDebug() << users.getValue("Surname").toString();
//               qDebug() << users.getValue("DateOfChange").toString();
//               qDebug() << users.getValue("Gender").toString();
//           }
//          users.setValue("Surname", "NewName");
//          users.setValue("DateOfChange", "12.12.12");
//          users.setValue("Gender", "M");
//          users.insertLine();
    }
    bd->close();
 return Result;
}

Handler::~Handler()
{}
