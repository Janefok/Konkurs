//#ifndef USERDATA_H
//#define USERDATA_H

//#include <QObject>
//#include <QtQuick/QQuickItem>

//#include <QAbstractListModel>
//#include <QStringList>

//class UserData : public QQuickItem
//{
//    Q_OBJECT
//    Q_PROPERTY(QString name READ name WRITE setName NOTIFY somePropertyChanged)

//public:
//    //UserData(const QString &type, const QString &size);
//    UserData(QQuickItem *parent = 0);

//    QString name() const;
//    void setName(const QString &name);
//    Q_INVOKABLE void qdeb();

//    QString type() const;
//    QString size() const;
//signals: void somePropertyChanged();
//private:
//    QString m_name;
//    QString m_type;
//    QString m_size;
//public slots:
//    void myChanged();
//};

////class UserDataModel : public QAbstractListModel
////{
////    Q_OBJECT
////    //Q_PROPERTY(QQmlListProperty<Element> data READ data NOTIFY dataChanged)
////public:
////    enum UserRoles {
////        TypeRole = Qt::UserRole + 1,
////        SizeRole
////    };

////    UserDataModel(QObject *parent = 0);

////     void addUsers(const UserData &userd);
//////     Q_INVOKABLE void qdb();
////     Q_INVOKABLE
////     void gdb();

////    int rowCount(const QModelIndex & parent = QModelIndex()) const;

////    QVariant data(const QModelIndex & index, int role = Qt::DisplayRole) const;

////protected:
////    QHash<int, QByteArray> roleNames() const;
////private:
////    QList<UserData> m_users;
////};

//#endif // USERDATA_H
