#include <QCoreApplication>
#include <QDebug>
#include <array>
using namespace std;

void struct_demo();


void qt_datatpyes_demo();

void array_demo();


enum Colors {black, red, green, blue};

struct product
{
    int weight;
    double value;
    Colors color;
};



/**
 * @brief main the statement point
 * @param argc The argument count
 * @param argv the arguments
 * @return int the exit value of the application
 */
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qInfo() << "Hello world!" ;

    qInfo("Hello again!");






    //enum Color {red, green, blue}; //zero based
    enum Color {red = 0, green = 2, blue}; //zero based
    Color mycolor = Color::blue;
    qInfo() << "Color: " << mycolor;



    // qt_datatpyes_demo();
    // struct_demo();
    array_demo();


    return a.exec();
}



void array_demo(){
    //Array
    int ages[4] = {23,7,75,1000}; //zero based array

    qInfo() << ages;
    ages[99] = 99; //BAD!!!!
    qInfo() << "ages[0] " << ages[0];
    qInfo() << "ages[1] " << ages[1];
    qInfo() << "ages[2] " << ages[2];
    qInfo() << "ages[3] " << ages[3];
    qInfo() << "ages[99] " << ages[99]; //No promises if this works!!!

    //Size  vs Size of
    array<int,4> cars;
    cars[0] = 88;
    cars[1] = 4;
    cars[2] = 990;
    cars[3] = 76; //end of the array
    cars[99] = 99;

    qInfo() << "cars[0] "  << cars[0];
    qInfo() << "cars[1] "  << cars[1];
    qInfo() << "cars[2] "  << cars[2];
    qInfo() << "cars[3] "  << cars[3]; //end of the array
    qInfo() << "cars[99] "  << cars[99]; //VERY BAD - don't do this

    //Size vs Sizeof
    qInfo() << "Size: " << cars.size();
    qInfo() << "SizeOf: " << sizeof (cars);
    qInfo() << "Last: " << cars[cars.size() -1];
}


void struct_demo()
{
    product laptop; // no assignment!!!
    qInfo() << "Size of product: " << sizeof (laptop);

    laptop.color = Colors::green;
    laptop.value = 550.37;
    laptop.weight = 3;

    qInfo() << "Weight: " << laptop.weight;
    qInfo() << "Value: " << laptop.value;
    qInfo() << "Color: " << laptop.color;
}




void qt_datatpyes_demo()
{
    int age = 44;
    double height = 6.02;

    qInfo() << "Age: " << age;
    qInfo() << "Height: " << height;

    //Create a warning
    age = 44.90;
    qInfo() << "Age: " << age;

    signed int dogs = -1;
    qInfo() << "Dogs: " << dogs;
    dogs = 15;
    qInfo() << "Dogs: " << dogs;

    unsigned int cats = -1; // will cause an issue!!!
    qInfo() << "Cats: " << cats;
    cats = 15;
    qInfo() << "Cats: " << cats;

    qInfo() << sizeof (dogs);
    qInfo() << sizeof (cats);
    qInfo() << sizeof (height);
}
