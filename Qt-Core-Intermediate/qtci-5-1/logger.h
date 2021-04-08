#ifndef LOGGER_H
#define LOGGER_H

#include <QObject>
#include <QDebug>
#include <QFile>
#include <QDateTime>
#include <QDir>
#include <iostream>
#include <QTextStream>



class Logger : public QObject
{
    Q_OBJECT
public:
    explicit Logger(QObject *parent = nullptr);

    static QString filename;
    static void attach();
    static void handler(QtMsgType type, const QMessageLogContext &context, const QString & msg);

    static bool getEnableLogging();
    static void setEnableLogging(bool value);

signals:

private:
    static bool enableLogging;
};

#endif // LOGGER_H
