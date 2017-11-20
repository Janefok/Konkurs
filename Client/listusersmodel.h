#include <QObject>
#include <QAbstractListModel>
#include <QStringList>

class Users
{
public:
    Users(const QString &nameN, const QString &sportS, const QString &facultetyF);

    QString nameN()const;
    QString sportS()const;
    QString facultetyF()const;

private:
    QString m_nameN;
    QString m_sportS;
    QString m_facultetyF;
};

class ListUsersM:public QAbstractListModel
{
    Q_OBJECT
    Q_PROPERTY(QString lastname READ lastname WRITE setLastname NOTIFY lastnameChanged )
    Q_PROPERTY(QString sport READ sport WRITE setSport NOTIFY sportChanged)
    Q_PROPERTY(QString facultety READ facultety WRITE setFacultety NOTIFY facultetyChanged)

public:
    enum UsersRoles {
        NameRole = Qt::UserRole + 2,
        SportRole,
        FacultetyRole
    };

    ListUsersM(QObject *parent = 0);

    QString lastname() const;
    void setLastname(const QString &lastname);
    QString sport() const;
    void setSport(const QString &sport);
    QString facultety() const;
    void setFacultety(const QString &facultety);

    Q_INVOKABLE QString getName();

    void addUser(const Users &user);

    int rowCount(const QModelIndex & parent = QModelIndex()) const;

    QVariant data(const QModelIndex & index, int role = Qt::DisplayRole) const;

protected:
    QHash<int, QByteArray> roleNames() const;
private:
    QList<Users> m_user;
    QString m_lastname;
    QString m_sport;
    QString m_facultety;

signals:
    void sportChanged();
    void lastnameChanged();
    void facultetyChanged();
}
