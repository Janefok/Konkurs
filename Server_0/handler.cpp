#include "handler.h"

Handler::Handler()
{
     bd = new Base("Base.db");
}

QString Handler::Setfunc(QString str){
    QVariantMap tabledata;
    QVariantList tabledataList;
    bd->open();
    if(str == "LOAD/ListUsers"){
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
    } else if(str == "LOAD/ListTeamUsers"){

        Table lTeamUsers( bd->setTable("Teams") );
        Table lUsers( bd->setTable("Users") );
        lTeamUsers.select();

        while (lTeamUsers.next()){
            tabledata.insert("TeamName", lTeamUsers.getValue("TeamName"));

            Table kindSport( bd->setTable("SportsInterests") );
            //установка выборки по значению TeamId для таблицы Teams
            kindSport.setValue("TeamId", lTeamUsers.getValue("Id"));
            kindSport.select();
            //вставляем в tabledata значение KindOfSport
            tabledata.insert("KindOfSport", kindSport.getValue("KindOfSport"));
            QString str;

            //идем по таблице Teams
            while ( kindSport.next()){
                //на каждой строчке

                //уствновить выборку таблицы Users по столбцу Id
                lUsers.setValue("Id", kindSport.getValue("UserId"));
                lUsers.select();

                if(!str.isEmpty()){
                    str.append(", ");
                }
                str.append( lUsers.getValue("Surname").toString());
            }
            tabledata.insert("Surname", str);
            tabledataList << tabledata;
        }

    } else if(str == "LOAD/ListFeed"){
        Table lFeed( bd->setTable("Feed") );
        lFeed.select();
        while (lFeed.next()) {
           tabledata.insert("Caption", lFeed.getValue("Caption").toString());
           tabledata.insert("DateOfCreation", lFeed.getValue("DateOfCreation").toString());
           tabledata.insert("KindOfSport", lFeed.getValue("KindOfSport").toString());
           tabledata.insert("Info", lFeed.getValue("Info").toString());
           tabledataList << tabledata;
         }
    } /*else if(str == "LOAD/Users"){
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
    }*/
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
