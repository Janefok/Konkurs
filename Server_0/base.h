#ifndef BASE_H
#define BASE_H

#include <QtSql>
#include "QSqlQuery"
#include <QTableView>

class Base
{
    QSqlDatabase dbase;
protected:
    QString gDataBaseName;
public:
    Base(QString);
    void close();
    void open();
    QSqlTableModel & setTable(QString);
};

class Table{
    QSqlTableModel * qTable;
    int gCurrentRow = -1;
    QSqlRecord rec;
public:
    Table(QSqlTableModel &);
    bool next();
    void select();
    QVariant getValue(QString);
    void updateLine();
    void deleteLine();
    void insertLine();
    void setValue(QString, QVariant);
};

#endif // BASE_H
