#include "Garage.h"
#include "Car.h"
#include "Racer.h"
#include "Support.h"
#include <string>
#include <vector>
#include <iostream>
#include <memory>
#include <QDebug>
Garage::Garage()
{
}
int Garage::findCar(std::string carName)
{
    for (int i = 0; i < cars.size(); i++)
    {
        if (cars[i]->getFullName() == carName)
        {
            return i;
        }
    }
    return -1;
}
int Garage::findCar(int carNumber)
{
    for (int i = 0; i < cars.size(); i++)
    {
        if (cars[i]->getCarNumber() == carNumber)
        {
            return i;
        }
    }
    return -1;
}

int Garage::checkParams(int carNumber, int age, int speed, int capacity)
{
    if (age <= 0 || speed <= 0 || capacity <= 0)
    {
        qDebug()<<"error with 0";
        return 1;
    }
    for (int i = 0; i < cars.size(); i++)
    {
        if (carNumber == cars[i]->getCarNumber())
        {

            qDebug()<<"error with number "<<carNumber;
            return 1;
        }
    }
    return 0;
}
int Garage::checkInCar(int carNumber, int age, int speed, int capacity, int numOfRaces, int lapsComp, std::string type, std::string fullName, std::string racingTeam)
{
    if (checkParams(carNumber, age, speed, capacity) == 1)
    {
        return 1;
    }
    cars.push_back(std::make_unique<Racer>(carNumber, age, speed, capacity, numOfRaces, lapsComp, type, fullName, racingTeam));
    qDebug() << "Car checked in "<<carNumber;
    return 0;
}

int Garage::checkInCar(int carNumber, int age, int speed, int capacity, int crewSize, std::string type, std::string fullName, std::string racingTeam, char reliabilityRating)
{
    if (checkParams(carNumber, age, speed, capacity) == 1)
    {
        return 1;
    }
    cars.push_back(std::make_unique<Support>(carNumber, age, speed, capacity, crewSize, type, fullName, racingTeam, reliabilityRating));
    std::cout << "Car checked in";
    return 0;
}
int Garage::editByNumber(int carNumber, int age, int speed, int capacity, int numOfRaces, int lapsComp, std::string type, std::string fullName, std::string racingTeam)
{
    auto &car = cars[findCar(carNumber)];
    std::string realType = car->getType();

    if(realType=="Racer"){
        auto racer = dynamic_cast<Racer*>(car.get());
        int a = racer->setAge(age);
        int b = racer->setSpeed(speed);
        int c = racer->setCapacity(capacity);
        int d = racer->setNumOfRaces(numOfRaces);
        int e = racer->setLapsComp(lapsComp);
        int f = racer->setType(type);
        int g = racer->setFullName(fullName);
        int h = racer->setRacingTeam(racingTeam);
        if(a==1||b==1||c==1||d==1||e==1||f==1||g==1||h==1){
            return 1;
        }
        return 0;
    }
    else{
        qDebug()<<"this is "<<realType;
        cars[findCar(carNumber)]=std::make_unique<Racer>(carNumber, age, speed, capacity, numOfRaces, lapsComp, type, fullName, racingTeam);
        return 0;
    }
}
int Garage::editByNumber(int carNumber, int age, int speed, int capacity, int crewSize, std::string type, std::string fullName, std::string racingTeam, char reliabilityRating)
{
    auto &car = cars[findCar(carNumber)];
    std::string realType = car->getType();

    if(realType=="Support"){
        auto support = dynamic_cast<Support*>(car.get());
        int a = support->setAge(age);
        int b = support->setSpeed(speed);
        int c = support->setCapacity(capacity);
        int d = support->setCrewSize(crewSize);
        int e = support->setType(type);
        int f = support->setFullName(fullName);
        int g = support->setRacingTeam(racingTeam);
        int h = support->setReliabilityRating(reliabilityRating);

        if(a==1||b==1||c==1||d==1||e==1||f==1||g==1||h==1){
            return 1;
        }
        return 0;
    }
    else{
        qDebug()<<"this is "<<realType;
        cars[findCar(carNumber)]=std::make_unique<Support>(carNumber, age, speed, capacity, crewSize, type, fullName, racingTeam, reliabilityRating);
        return 0;
    }
}
std::vector<std::unique_ptr<Car>>& Garage::getCar(){
    return cars;
}