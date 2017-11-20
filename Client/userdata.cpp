#include "userdata.h"
#include <QAbstractListModel>
#include <QStringList>
#include <QHash>
#include <iostream>

UserData::UserData(QQuickItem *parent)
    : QQuickItem (parent)
{
    qDebug() << "name()MMMM";

}

QString UserData::type() const
{
    return m_type;
}
QString UserData::name() const
{
    return m_name;
}

void UserData::setName(const QString &name)
{
    m_name = name;
    emit somePropertyChanged();
}
void UserData::myChanged(){
    qDebug() << "namr chang";
    setName("KorshKorshKorsh");

}

void UserData::qdeb(){
//    std::cout << name() << std::endl;

    qDebug() << "MMMMMMMMMMM";
    //std::cout << "MMMMMMMMMMM" >> std::endl;
}
QString UserData::size() const
{
    return m_size;
}

//UserDataModel::UserDataModel(QObject *parent)
//    : QAbstractListModel(parent)
//{
//    addUsers(UserData("Alex", "K"));
//    addUsers(UserData("Alex", "K"));
//    addUsers(UserData("Alex", "K"));
//}

//void UserDataModel::addUsers(const UserData &userd)
//{
//    beginInsertRows(QModelIndex(), rowCount(), rowCount());
//    m_users << userd;
//    endInsertRows();
//}
// void UserDataModel::gdb(){
//    //m_users << addUsers(UserData("fd,m flmslkm ", "K"));
//    qDebug() << "dfdfdfdfdf";
//    std::cout << "jashjdj" << std::endl;
//}


//int UserDataModel::rowCount(const QModelIndex & parent) const {
//    Q_UNUSED(parent);
//    return m_users.count();
//}

//QVariant UserDataModel::data(const QModelIndex & index, int role) const {
//    if (index.row() < 0 || index.row() >= m_users.count())
//        return QVariant();

//    const UserData &userd = m_users[index.row()];
//    if (role == TypeRole)
//        return userd.type();
//    else if (role == SizeRole)
//        return userd.size();
//    return QVariant();
//}

//QHash<int, QByteArray> UserDataModel::roleNames() const {
//    QHash<int, QByteArray> roles;
//    roles[TypeRole] = "type";
//    roles[SizeRole] = "size";
//    return roles;
//}
