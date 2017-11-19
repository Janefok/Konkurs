#include "base.h"

Base::Base(QString DBName)
{
    dbase = QSqlDatabase::addDatabase("QSQLITE");
    dbase.setDatabaseName(DBName);
    gDataBaseName = DBName;
}

void Base::close(){
    dbase.close();
}

void Base::open(){
    if (!dbase.open()) {
        qDebug() << "DataBase is not connected";
    } else { qDebug() << "DataBase is connected";}
}

QSqlTableModel& Base::setTable(QString lTableName){

    QSqlTableModel *model = new QSqlTableModel(0, dbase);

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
    rec = qTable->record();
    //qTable->setEditStrategy(QSqlTableModel::OnManualSubmit);
    qTable->record().clear();
    qTable->select();
}

void Table::setValue(QString lRowName, QVariant lValue){
    rec.setValue( qTable->record().indexOf(lRowName), lValue);
    qTable->setFilter(lRowName + "='"+lValue.toString()+"'");
}


void Table::updateLine(){
    //qTable->record().append(qTable->record().field());
    qTable->record().clear();
}

void Table::deleteLine(){
    gCurrentRow == -1 ? gCurrentRow = 0 : gCurrentRow ;
    //qTable->deleteRowFromTable(gCurrentRow);
    qTable->record().clear();
}

void Table::insertLine(){
    gCurrentRow=-1;
    qTable->insertRecord(gCurrentRow,rec);
    if(qTable->submitAll()){
        qTable->database().commit();
    }else{
        qTable->database().rollback();
        qDebug() << qTable->lastError().text();
    }
    qTable->record().clear();
}
