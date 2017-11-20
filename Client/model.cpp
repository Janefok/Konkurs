#include "model.h"


Animal::Animal(const QString &type, const QString &size)
    : m_type(type), m_size(size)
{
}

QString Animal::type() const
{
    return m_type;
}

QString Animal::size() const
{
    return m_size;
}

AnimalModel::AnimalModel(QObject *parent)
    : QAbstractListModel(parent)
{
//    AnimalModel *model;
//    model.addAnimal(Animal("Wolf", "Medium"));
//    model.addAnimal(Animal("Polar bear", "Large"));
//    model.addAnimal(Animal("Quoll", "Small"));
    addAnimal(Animal("Quoll", "Small"));
    addAnimal(Animal("Quoll", "Small"));
    addAnimal(Animal("Quoll", "Small"));

    addAnimal(Animal("Quoll", "Small"));

    addAnimal(Animal("Quoll", "Small"));
    addAnimal(Animal("Quoll", "Small"));
    addAnimal(Animal("Quoll", "Small"));

}

void AnimalModel::addAnimal(const Animal &animal)
{
    beginInsertRows(QModelIndex(), rowCount(), rowCount());
    m_animals << animal;
    endInsertRows();
}

int AnimalModel::rowCount(const QModelIndex & parent) const {
    Q_UNUSED(parent);
    return m_animals.count();
}

QVariant AnimalModel::data(const QModelIndex & index, int role) const {
    if (index.row() < 0 || index.row() >= m_animals.count())
        return QVariant();

    const Animal &animal = m_animals[index.row()];
    if (role == TypeRole)
        return animal.type();
    else if (role == SizeRole)
        return animal.size();
    return QVariant();
}

QString AnimalModel::info()const{
    return m_info;
}
QString AnimalModel::caption()const{
    return m_caption;
}
void AnimalModel::setInfo(const QString &info){
    if(info!=m_info){
        m_info = info;
        //update();
        emit infoChanged();
    }
}
void AnimalModel::setCaption(const QString &caption){
    if(caption!= m_caption){
        m_caption = caption;
        emit captionChanged();
    }
}

void AnimalModel::addNews(){
    addAnimal(Animal(info(), caption()));
}
QHash<int, QByteArray> AnimalModel::roleNames() const {
    QHash<int, QByteArray> roles;
    roles[TypeRole] = "info";
    roles[SizeRole] = "caption";
    return roles;
}
