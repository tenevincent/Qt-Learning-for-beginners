#include <QCoreApplication>
#include <QDebug>
#include <QFile>
#include <QDir>
#include <QBuffer>
#include <QTextStream>

bool makeFile(QString path) {

    QFile file(path);
    if(file.open(QIODevice::WriteOnly)) {

        QByteArray data;
        for(int i = 0; i < 1000; i++) {
            data.append( (QString::number(i) + "\r\n").toStdString());
        }

        file.write(data);
        file.close();
        return true;
    }
    return false;
}


QByteArray getHeader() {
    QByteArray header;
    header.append("@!~!@");
    return header;
}


bool compressFile(QString originalFile, QString newFile) {
    QFile file_original(originalFile);
    QFile file_new(newFile);
    QByteArray header = getHeader();

    if(!file_original.open(QIODevice::ReadOnly)) return false;
    if(!file_new.open(QIODevice::WriteOnly)) return  false;
    int size = 1024;

    while (!file_original.atEnd()) {
        QByteArray buffer = file_original.read(size);
        QByteArray compressed = qCompress(buffer);
        qInfo() << "Header at:" << file_new.pos();
        file_new.write(header);
        qInfo() << "Size: " << file_new.write(compressed); // unknown size

    }
    file_original.close();
    file_new.close();
    return true;
}


bool decompressFile(QString originalFile, QString newFile) {
    QFile file_original(originalFile);
    QFile file_new(newFile);
    QByteArray header = getHeader();
    int size = 1024;

    if(!file_original.open(QIODevice::ReadOnly)) return false;
    if(!file_new.open(QIODevice::WriteOnly)) return false;

    //Double check that WE compressed the file
    QByteArray buffer = file_original.peek(size);
    if(!buffer.startsWith(header)) {
        qCritical() << "We did not create this file!";
        file_original.close();
        file_new.close();
        return false;
    }

    //Find the header positions
    file_original.seek(header.length());
    qInfo() << "Starting at: " << file_original.pos();

    while (!file_original.atEnd()) {
        buffer = file_original.peek(size);
        qint64 index = buffer.indexOf(header);
        qInfo() << "Header found at:" << index;

        if(index > -1) {
            //Have the header!
            qint64 maxbytes = index;
            qInfo() << "Reading: " << maxbytes;
            buffer = file_original.read(maxbytes);
            file_original.read(header.length());
        } else {
            //Do not have the header!
            qInfo() << "Read all, no header";
            buffer = file_original.readAll();
        }

        QByteArray decompressed = qUncompress(buffer);
        qInfo() << "Decompressed: " << file_new.write(decompressed);
        file_new.flush();
    }

    file_original.close();
    file_new.close();

    return true;

}





int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    QString orginalFile = QDir::currentPath() + QDir::separator() + "orginal.txt";
    QString compressedFile = QDir::currentPath() + QDir::separator() + "compressed.txt";
    QString decompressedFile = QDir::currentPath() + QDir::separator() + "decompressed.txt";

    if(makeFile(orginalFile)) {
        qInfo() << "Original created";

        if(compressFile(orginalFile, compressedFile)) {
            qInfo() << "File compressed";
            if(decompressFile(compressedFile,decompressedFile)) {
                qInfo() << "File decompressed!";
            } else {
                qInfo() << "Could not decompress file!";
            }
        } else {
            qInfo() << "File not compressed";
        }


    }




    return a.exec();
}
