#include <QCoreApplication>
#include <QDebug>
#include <QDataStream>
#include <QFile>

static const QDataStream::Version myQtVersion = QDataStream::Qt_5_8;




int saveFile(QString fileName,  QDataStream::Version version){

    QFile file(fileName);
    if (!file.open(QIODevice::WriteOnly)) {
        return false;
    }

    QString title = "The answer is 42";
    qint64 num = 42;

    // This will be a serialized binary data file, not an ASCII file
    QDataStream out(&file);
    out.setVersion(version);

    out << title << num;
    file.flush();
    file.close();

    return true;
}

bool readFile(QString path, QDataStream::Version version)
{
    QFile file(path);
    if (!file.open(QIODevice::ReadOnly)) {
        return false;
    }

    // This will be a serialized binary data file, not an ASCII file
    QDataStream dataStream(&file);
    dataStream.setVersion(version);

    QString title;
    qint64 num;

    // read
    dataStream >> title >> num;

    qInfo() << "Title: " << title;
    qInfo() << "Number: " << num;
    file.close();

    return true;


}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString file = "test.txt";
    if(saveFile(file, myQtVersion)) {
        qInfo() << "Saved!\r\n";
        if (readFile(file, myQtVersion)) {
            qInfo() << "Read!\r\n";
        } else {
            qInfo() << "Could not read file";
        }
    } else {
        qInfo() << "Could not save the file";
    }



    return a.exec();
}
