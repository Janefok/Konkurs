#include "handler.h"

Handler::Handler()
{
     bd = new Base("Base.db");
}

QString Handler::Setfunc(QString str){
    QVariantMap tabledata;
    QVariantList tabledataList;
    bd->open();
    if(str == "LOAD/Users"){
        Table users( bd->setTable("Users") );
        Table kindsport( bd->setTable("SportsInterests") );
        Table kindFaculty( bd->setTable("DataPositionUniversity") );
        users.select();
        while (users.next()) {
           tabledata.insert("Surname", users.getValue("Surname").toString());
           tabledata.insert("DateOfChange", users.getValue("DateOfChange").toString());
           tabledata.insert("Gender", users.getValue("Gender").toString());
           //делаем выборку для таблицы SportsInterests для текущего Id студента
           kindsport.setValue("UserId", users.getValue("Id") );
           kindsport.select();
           tabledata.insert("KindOfSport", kindsport.getValue("KindOfSport").toString());
           //делаем выборку для таблицы DataPositionUniversity для текущего Id студента
           kindFaculty.setValue("UserId", users.getValue("Id"));
           kindFaculty.select();
           tabledata.insert("Faculty", kindFaculty.getValue("Faculty").toString());
           tabledataList << tabledata;
         }
    }
    //получаем json
    QJsonDocument json = QJsonDocument::fromVariant(tabledataList);
    //делаем из json строку
    QString Result(json.toJson(QJsonDocument::Compact));
    bd->close();
    //отправляем результат на клиент
    return Result;
}

Handler::~Handler()
{}
