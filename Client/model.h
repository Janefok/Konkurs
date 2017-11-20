
#include <QObject>

#include <QAbstractListModel>
#include <QStringList>

class Animal
{
public:
    Animal(const QString &type, const QString &size);


    QString type() const;
    QString size() const;

private:
    QString m_type;
    QString m_size;
};

class AnimalModel : public QAbstractListModel
{
    Q_OBJECT
    Q_PROPERTY(QString info READ info WRITE setInfo NOTIFY infoChanged )
    Q_PROPERTY(QString caption READ caption WRITE setCaption NOTIFY captionChanged)
public:
    enum AnimalRoles {
        TypeRole = Qt::UserRole + 1,
        SizeRole
    };

    AnimalModel(QObject *parent = 0);

    QString info() const;
    void setInfo(const QString &info);
    QString caption() const;
    void setCaption(const QString &caption);

    Q_INVOKABLE void addNews();

    void addAnimal(const Animal &animal);

    int rowCount(const QModelIndex & parent = QModelIndex()) const;

    QVariant data(const QModelIndex & index, int role = Qt::DisplayRole) const;

protected:
    QHash<int, QByteArray> roleNames() const;
private:
    QList<Animal> m_animals;
    QString m_info;
    QString m_caption;
signals:
    void infoChanged();
    void captionChanged();
};

