#include "base.h"

Base::Base(QString DBName)
{
    dbase = QSqlDatabase::addDatabase("QSQLITE");
    dbase.setDatabaseName(DBName);
    gDataBaseName = DBName;
}

Base::close(){
    dbase.close();
}

Base::open(){
    if (!dbase.open()) {
        qDebug() << "DataBase is not connected";
    } else { qDebug() << "DataBase is connected";}
}

QSqlTableModel& Base::setTable(QString lTableName){

    QSqlTableModel *model = new QSqlTableModel(Q_NULLPTR, dbase);

    model->setTable(lTableName);

    return *model;
}

Table::Table(QSqlTableModel & query) : qTable( &query){}

QVariant Table::getValue(QString lRowName){
    gCurrentRow == -1 ? gCurrentRow = 0 : gCurrentRow ;
    return qTable->record(gCurrentRow).value(lRowName);
}

bool Table::next(){
    gCurrentRow++;
    return !qTable->record(gCurrentRow).isNull(0);
}

void Table::select(){
    qTable->select();
}

void Table::setValue(QString lRowName, QVariant lValue){
    qTable->record().setValue(lRowName, lValue);
}


void Table::updateLine(){
    //qTable->record().append(qTable->record().field());
}

void Table::deleteLine(){
    gCurrentRow == -1 ? gCurrentRow = 0 : gCurrentRow ;
    //qTable->deleteRowFromTable(gCurrentRow);
}

void Table::insertLine(){
    gCurrentRow=-1;
    qTable->insertRecord(-1,qTable->record());
    qDebug() << qTable->lastError().text();
    qTable->record().clear();
}
