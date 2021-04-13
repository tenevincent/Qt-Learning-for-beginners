#include <QCoreApplication>
#include <QLinkedList>
#include <QDebug>
#include <list>


// QLinkedList<T> is one of Qt's generic container classes.
// It stores a list of values and provides iterator-based access as well as constant time insertions and removals.

// If you need a real linked list, with guarantees of constant time insertions in the middle
// of the list and iterators to items rather than indexes, use QLinkedList.





int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    // QLinkedList<int> list;
    std::list<int> list;
    for(int i = 0; i < 10; i++) {
        list.push_back(i);
    }

    list.front();
    list.back();
    list.remove(5);
    //

    bool found = (std::find(list.begin(), list.end(), 3) != list.end());
    if(found) qInfo() << "Contains 3";

    foreach(auto item , list){
        qInfo() << item << " ";
    }


    list.clear();
    qInfo() << "Done";




    return a.exec();
}
