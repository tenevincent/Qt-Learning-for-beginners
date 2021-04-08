#include <QCoreApplication>
#include <QDebug>
#include <QFile>
#include <QDateTime>
#include <QTextStream>
#include "test.h"
#include "logger.h"
#include <QLoggingCategory>



const QtMessageHandler QT_DEFAULT_MESSAGE_HANDLER = qInstallMessageHandler(nullptr);

void logHandler(QtMsgType messageType, const QMessageLogContext &context, const QString &message){


    QString logMessage;
    switch (messageType) {
    case QtInfoMsg:
        logMessage = QString("Info: %1 in %2").arg(message);
        break;
    case QtDebugMsg:
        logMessage = QString("Debug: %1").arg(message);
        break;
    case QtWarningMsg:
        logMessage = QString("Warning: %1").arg(message);
        break;
    case QtCriticalMsg:
        logMessage = QString("Critical: %1").arg(message);
        break;
    case QtFatalMsg:
        logMessage = QString("Fatal: %1").arg(message);
        break;
    }

    QFile file("log.txt");
    if(file.open(QIODevice::WriteOnly | QIODevice::Append)) {
        QTextStream textStream(&file);
        textStream << QDateTime::currentDateTime().toString() << "#" << logMessage << "#" << context.file << "#" << context.line << "\r\n";
        textStream.flush();
        file.close();
    }

    (*QT_DEFAULT_MESSAGE_HANDLER)(messageType, context, message);
}


void logger_to_console()
{
    qInstallMessageHandler(logHandler);
    qInfo() << "This is a info message";
    qDebug() << "This is a debug message";
    qWarning() << "This is a warning message";
    qCritical() << "This is a critical message";
    qFatal("THIS IS SPARTA!!!");
}

void logger_to_file()
{
    qInfo() << "File: " << Logger::filename;
    qInfo() << "Finished!";
    Logger::attach();
    qInfo() << "test!";
    Logger::setEnableLogging(false);
    qInfo() << "Don't log this!";
    Logger::setEnableLogging(true);


    Test t;
    t.testing();
}

//Declare a logging category
Q_DECLARE_LOGGING_CATEGORY(network);
Q_LOGGING_CATEGORY(network,"network");


void logger_category()
{

    qInfo() << "test";
    qInfo(network) << "test";
    //turn it off
    QLoggingCategory::setFilterRules("network.debug=false");
    //Will not log
    qDebug(network) << "kitty";

    if(!network().isDebugEnabled()) {
        QLoggingCategory::setFilterRules("network.debug=true");
        qDebug(network) << "We turned it back on";
    }

    qDebug(network) << "yes!";
}

void badFunction(){
    throw std::out_of_range("");
}



void handle_eptr(std::exception_ptr eptr) // passing by value is ok
{
    try {
        if (eptr) {
            std::rethrow_exception(eptr);
        }
    } catch(const std::exception& e) {
        qWarning() << "Caught exception \"" << e.what() << "\"\n";
    }
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    // logger_to_console();

    // logger_to_file();

    // logger_category();

    try {
        badFunction();
    }
//    catch (std::out_of_range &ex) {
//         Logger::attach();
//         qWarning() << ex.what();
//    }
//    catch(const std::exception& ex)
//    {
//        // speciffic handling for all exceptions extending std::exception, except
//        // std::runtime_error which is handled explicitly
//        qWarning() << "Error occurred: " << ex.what() << "\r\n";
//    }
    catch(const std::runtime_error& re)
    {
        // speciffic handling for runtime_error
        qWarning() << "Runtime error: " << re.what() << "\r\n";
    }
    catch (...) {

        auto eptr = std::current_exception(); // capture
        Logger::attach();
        handle_eptr(eptr);
    }


    return a.exec();
}
