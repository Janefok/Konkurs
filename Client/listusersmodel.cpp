#include "listusersmodel.h"

Users::Users(const QString &nameN, const QString &sportS, const QString &facultetyF)
    : m_nameN(nameN), m_sportS(sportS), m_facultetyF(facultetyF)
{
}

QString Users::nameN() const
{
    return m_nameN;
}

QString Users::sportS() const
{
    return m_sportS;
}

QString Users::facultetyF() const
{
    return m_facultetyF;
}


ListUsersM::ListUsersM(QObject *parent)
    : QAbstractListModel(parent)
{
      addUser(Users("fdfdf","dssdsds","aaaaaaaaa"));
//    AnimalModel *model;
//    model.addAnimal(Animal("Wolf", "Medium"));
//    model.addAnimal(Animal("Polar bear", "Large"));
//    model.addAnimal(Animal("Quoll", "Small"));
//    addAnimal(Animal("Quoll", "Small"));
//    addAnimal(Animal("Quoll", "Small"));
//    addAnimal(Animal("Quoll", "Small"));

//    addAnimal(Animal("Quoll", "Small"));

//    addAnimal(Animal("Quoll", "Small"));
//    addAnimal(Animal("Quoll", "Small"));
//    addAnimal(Animal("Quoll", "Small"));

}

void ListUsersM::addUser(const Users &user)
{
    beginInsertRows(QModelIndex(), rowCount(), rowCount());
    m_user << user;
    endInsertRows();
}

int ListUsersM::rowCount(const QModelIndex & parent) const {
    Q_UNUSED(parent);
    return m_user.count();
}

QVariant ListUsersM::data(const QModelIndex & index, int role) const {
    if (index.row() < 0 || index.row() >= m_user.count())
        return QVariant();

    const Users &user = m_user[index.row()];
    if (role == NameRole)
        return user.nameN();
    else if (role == SportRole)
        return user.sportS();
        else if(role == FacultetyRole)
            return user.facultetyF();
    return QVariant();
}

QString ListUsersM::lastname()const{
    return m_lastname;
}
QString ListUsersM::sport()const{
    return m_sport;
}
QString ListUsersM::facultety()const{
    return m_facultety;
}
void ListUsersM::setLastname(const QString &lastname){
    if(lastname!=m_lastname){
        m_lastname = lastname;
        //update();
        emit lastnameChanged();
    }
}
void ListUsersM::setSport(const QString &sport){
    if(sport!= m_sport){
        m_sport = sport;
        emit sportChanged();
    }
}

void ListUsersM::addUser(){
    addUser(Users(lastname(), sport(), facultety()));
}
QHash<int, QByteArray> ListUsersM::roleNames() const {
    QHash<int, QByteArray> roles;
    roles[NameRole] = "name";
    roles[SportRole] = "sport";
    roles[FacultetyRole] = "facultet";
    return roles;
}
