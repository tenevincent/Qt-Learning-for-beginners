#ifndef TEST_H
#define TEST_H

#include <QObject>
#include <QObject>
#include <QDebug>
#include <QMap>
#include <QDataStream>



class Test : public QObject
{
    Q_OBJECT
public:
    explicit Test(QObject *parent = nullptr);
    ~Test();


    void fill();
    QString name();
    void setName(QString value);
    QMap<QString, QString> map();

    friend QDataStream& operator <<(QDataStream &stream, const Test &other) {
        qInfo() << "Operload <<";
        stream << other.m_name;
        stream << other.m_map;
        return stream;
    }

    friend QDataStream& operator >>(QDataStream &stream, Test &other) {
        qInfo() << "Operload >>";
        stream >> other.m_name;
        stream >> other.m_map;
        return stream;
    }

    void setMap(const QMap<QString, QString> &map);

private:
    QString m_name;
    QMap<QString, QString> m_map;

signals:

};


#endif // TEST_H
