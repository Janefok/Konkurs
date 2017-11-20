#include "parsejson.h"

QList<QMap<QString, QVariant>> decomposeMyJson(QString jsonStr1, const char* list){
    QJsonDocument jsonDoc = QJsonDocument::fromJson(jsonStr1.toUtf8());
    QJsonObject jsonObj = jsonDoc.object();
    //list.toStdString()
    QJsonArray jsonArr = jsonObj[list].toArray();
//    qDebug() << jsonArr;
    QList< QMap<QString, QVariant> > jsonListMap;
    QMap<QString, QVariant> jsonMap;
    foreach (const QJsonValue & value, jsonArr)    {
        jsonMap = value.toObject().toVariantMap();
        jsonListMap.push_back(jsonMap);
    }

    return jsonListMap;
}


QList<QString> getPostFromFeed(int index){
    QList<QString> l;
    if (feedList.isEmpty()){
        return l;
    }
    QMap<QString, QVariant> post = feedList[index];
    QString caption = (post["Caption"]).toString();
    QString info = (post["Info"]).toString();
    l.push_back(caption);
    l.push_back(info);
    return l;
}
