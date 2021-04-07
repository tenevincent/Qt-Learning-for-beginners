#include <QCoreApplication>
#include <QIODevice>
#include <QBuffer>
#include <QDebug>



void QBuffer_Demo01()
{
    QBuffer buffer;

    if(buffer.open(QIODevice::ReadWrite)) {
        qInfo() << "Buffer Opened!";
        QByteArray data("Hello World");

        for(int i = 0; i < 5; i++) {
            buffer.write(data);
            buffer.write("\r\n");
        }

        //File and device access you may need to flush the data to the device
        //buffer.flush()

        //Move to the first position
        buffer.seek(0);

        qInfo() << "read all: " << buffer.readAll();

        qInfo() << "closing the buffer";

        //ALWAYS close your device!
        buffer.close();
    }
    else {
        qInfo() << "Could not open buffer!!!";
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //QBuffer_Demo01();

    QBuffer buffer;
    char ch;

    buffer.open(QBuffer::ReadWrite);
    buffer.write("Qt rocks!");
    buffer.seek(0);
    buffer.getChar(&ch);  // ch == 'Q'
    qInfo() << ch;
    buffer.getChar(&ch);  // ch == 't'
    qInfo() << ch;
    buffer.getChar(&ch);  // ch == ' '
    qInfo() << ch;
    buffer.getChar(&ch);  // ch == 'r'
    buffer.seek(0);
    qInfo() << buffer.readAll();




    return a.exec();
}
