#include <QCoreApplication>
#include <QHash>
#include <QDebug>

// QHash - QHash<Key, T> is one of Qt's generic container classes.
// It stores (key, value) pairs and provides very fast lookup of the value associated with a key.

// Works great with static info that wont change much

class Person{
public:
    int age;
    Person() : age(0){
    }

    Person(int age){
        this->age = age;
    }




};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);



    QHash<QString, Person> ages;
    ages.insert("Bryan", Person(11));
    ages.insert("Tammy", Person(49));
    ages.insert("Heather", Person(25));
    ages.insert("Chris", Person(27));
    ages.insert("Rango", Person(15));

    qInfo() << "Bryan is " << ages["Bryan"].age << "years old";
    qInfo() << "Keys: " << ages.keys();
    qInfo() << "Size: " << ages.size();

    foreach(auto key, ages.keys()) {
        qInfo() << key << " = " << ages[key].age;
    }


    return a.exec();
}
