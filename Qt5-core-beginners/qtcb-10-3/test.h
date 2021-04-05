#ifndef TEST_H
#define TEST_H

#include <QObject>
#include <QString>



class Test : public QObject
{
    Q_OBJECT

    QString m_message;

public:
    explicit Test(QObject *parent = nullptr);


    Q_PROPERTY(QString message READ message WRITE setMessage NOTIFY messageChanged)
    QString message();
    void setMessage(QString value);

signals:
    void messageChanged(QString message);


public slots:

};

#endif // TEST_H
