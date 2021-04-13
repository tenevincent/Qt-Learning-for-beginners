#ifndef EQUATION_H
#define EQUATION_H

#include <QObject>

#include <QString>
#include <QDebug>

class Equation : public QObject
{
    Q_OBJECT
public:
    explicit Equation(QObject *parent = nullptr);

    enum Action {NONE,RESET,ADD,SUBTRACT,MULTIPLY,DIVIDE};



    void calculate();
    QString toString();

    QString getValue2() const;
    void setValue2(const QString &value2);

    QString getValue1() const;
    void setValue1(const QString &value1);

    QString getSum() const;
    void setSum(const QString &sum);

    Equation::Action getAction() const;
    void setAction(const Equation::Action &action);

signals:

private:
    QString m_sum;
    QString m_value1;
    QString m_value2;

    Equation::Action m_action;

    double getValue(QString data);

};

#endif // EQUATION_H
