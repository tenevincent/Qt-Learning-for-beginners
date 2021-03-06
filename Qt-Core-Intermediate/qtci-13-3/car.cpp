#include "car.h"
#include "slow.h"
#include "sports.h"
#include "race.h"

Car::Car(QObject *parent) : QObject(parent)
{

}

Car *Car::make(Car::Model model)
{
    QMetaEnum metaEnum = QMetaEnum::fromType<Car::Model>();
    qInfo() << "Creating: " << metaEnum.valueToKey(model);

    switch (model) {
    case Car::Model::SLOWCAR:
        return new Slow(nullptr);
    case Car::Model::SPORTSCAR:
        return new Sports(nullptr);
    case Car::Model::RACECAR:
        return new Race(nullptr);
    }

    return new Slow(nullptr);
}
