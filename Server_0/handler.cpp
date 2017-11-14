#include "handler.h"

Handler::Handler()
{
     bd = new Base("Base.db");
     bd->open();
}

QString Handler::Setfunc(QString str){
    QString Result;
    if(str == "LOAD/Users"){
        Table users( bd->setTable("Users") );
        users.select();
        while (users.next()) {
             qDebug() << users.getValue("Surname").toString();
             qDebug() << users.getValue("DateOfChange").toString();
             qDebug() << users.getValue("Gender").toString();
         }
    }
 return Result;
}

Handler::~Handler()
{
    bd->close();
}
