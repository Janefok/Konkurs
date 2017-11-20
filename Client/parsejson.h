#ifndef PARSEJSON_H
#define PARSEJSON_H

#endif // PARSEJSON_H

//#pragma once
#include <QJsonArray>
#include <QJsonObject>
#include <QJsonDocument>
#include <QJsonValue>
#include <QVariantList>

extern QList<QMap<QString, QVariant>> feedList;

//этой функции можно скормить QString с json`ом, она вернет List(Map()) - распаршенную в объект строку
//первая строка - jspn response, вторая строка - тип списка. говнокод

QList<QMap<QString, QVariant>> decomposeMyJson(QString jsonStr1, const char* list);

QList<QString> getPostFromFeed(int index);

QList<QString> getUserFromList(int index);
