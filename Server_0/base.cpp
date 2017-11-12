#include "base.h"

Base::Base(QString DBName)
{
    QSqlDatabase dbase = QSqlDatabase::addDatabase("QSQLITE");
        dbase.setDatabaseName(DBName);
        if (!dbase.open()) {
            qDebug() << "DataBase is not connected";
        } else { qDebug() << "DataBase is connected";}
}
