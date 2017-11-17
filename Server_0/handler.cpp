#include "handler.h"

Handler::Handler()
{
     bd = new Base("Base.db");
}

QString Handler::Setfunc(QString str){
    QVariantMap tabledata;
    QVariantList tabledataList;
    QJsonArray res;
    bd->open();
    if(str == "LOAD/Users"){
        Table users( bd->setTable("Users") );
        users.select();
        while (users.next()) {
           tabledata.insert("Surname", users.getValue("Surname").toString());
           tabledata.insert("DateOfChange", users.getValue("DateOfChange").toString());
           tabledata.insert("Gender", users.getValue("Gender").toString());
            tabledataList << tabledata;
         }
    }
    res.fromVariantList(tabledataList);
    qDebug()<< res.size();
    QJsonDocument json (res);
    QString Result(json.toJson(QJsonDocument::Compact));

    qDebug()<< json;
    bd->close();
 return Result;
}

Handler::~Handler()
{}
