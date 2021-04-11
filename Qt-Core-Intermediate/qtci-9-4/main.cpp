#include <QCoreApplication>
#include <QVector>
#include <QDebug>
#include <QRandomGenerator>
#include <QDebug>

//Custom macro
#define add(a,b) a+b



void randoms(QVector<int> *list, int max) {

    list->reserve(max);
    for(int i = 0; i < max; i++){
        int value = QRandomGenerator::global()->bounded(100);
        list->append(value);
    }
}




int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);



    //Easy...but dangerous
    qInfo() << add(1,2);

    //Lets break it!
    //    qInfo() << add("Test",22);
    //    qInfo() << add(true,true);
    //    qInfo() << add(false, true);
    //    qInfo() << add(false, false);
    //    qInfo() << add("Test",'\n');
    //    qInfo() << add("Test",'/n');



    QVector<int> firstList;
    randoms(&firstList,10);

    QVector<int> secondList;
    randoms(&secondList,10);

    qInfo() << firstList;
    qInfo() << secondList;

    //qInfo() << "Equal: " << qEqual(list1.begin(), list1.end(), list2.begin());
    //qCopy(list1.begin(),list1.end(), list2.begin());
    //qInfo() << "Equal: " << qEqual(list1.begin(), list1.end(), list2.begin());

    qInfo() << "Equal: " << std::equal(firstList.begin(), firstList.end(), secondList.begin());
    std::copy(firstList.begin(),firstList.end(), secondList.begin());
    qInfo() << "Equal: " << std::equal(firstList.begin(), firstList.end(), secondList.begin());


    return a.exec();
}
