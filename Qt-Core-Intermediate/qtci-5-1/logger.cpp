#include "logger.h"



QString Logger::filename = QDir::currentPath() + QDir::separator() + "log_to_file.txt";

bool Logger::enableLogging = false;

static const QtMessageHandler QT_DEFAULT_MESSAGE_HANDLER = qInstallMessageHandler(nullptr);




Logger::Logger(QObject *parent) : QObject(parent)
{

}

bool Logger::getEnableLogging()
{
    return enableLogging;
}

void Logger::setEnableLogging(bool value)
{
    enableLogging = value;
}

void Logger::attach()
{
    Logger::enableLogging = true;
    qInstallMessageHandler(Logger::handler);
}

void Logger::handler(QtMsgType type, const QMessageLogContext &context, const QString &message)
{
    if(Logger::enableLogging) {
        QString error;
        switch (type) {
        case QtInfoMsg:
            error = QString("Info: %1 in %2").arg(message);
            break;
        case QtDebugMsg:
            error = QString("Debug: %1").arg(message);
            break;
        case QtWarningMsg:
            error = QString("Warning: %1").arg(message);
            break;
        case QtCriticalMsg:
            error = QString("Critical: %1").arg(message);
            break;
        case QtFatalMsg:
            error = QString("Fatal: %1").arg(message);
            break;
        }
        QFile file(Logger::filename);
        if(file.open(QIODevice::WriteOnly | QIODevice::Append)) {
            QTextStream textStream(&file);
            textStream << QDateTime::currentDateTime().toString() << "#" << error <<"#" << context.file << "#" << context.line << "\r\n";
            textStream.flush();
            file.close();
        }
    }

    (*QT_DEFAULT_MESSAGE_HANDLER)(type, context, message);
}
