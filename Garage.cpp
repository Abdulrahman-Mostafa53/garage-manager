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
    // search for a car by its name (return -1 if you don't find it)
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
    // search for a car by number (return -1 if you don't find it)
    for (int i = 0; i < cars.size(); i++)
    {
        if (cars[i]->getCarNumber() == carNumber)
        {
            return i;
        }
    }
    return -1;
}

int Garage::checkParams(int age, int speed, int capacity)
{
    // helper fucntion for validating arguments passed when creating a new car
    if (age <= 0 || speed <= 0 || capacity <= 0)
    {
        return 1;
    }
    return 0;
}
int Garage::checkExists(int carNumber)
{
    // helper fucntion for checking whether a car number is used before or not
    for (int i = 0; i < cars.size(); i++)
    {
        if (carNumber == cars[i]->getCarNumber())
        {
            return 1;
        }
    }
    return 0;
}
std::unique_ptr<Racer> Garage::createCarObject(
    int carNumber,
    int age,
    int speed,
    int capacity,
    int numOfRaces,
    int lapsComp,
    std::string type,
    std::string fullName,
    std::string racingTeam)
{
    // create a new Racer car and return a pointer to it if data is valid and if not return nullptr
    if (checkParams(age, speed, capacity) == 1)
    {
        return nullptr;
    }
    return std::make_unique<Racer>(
        carNumber,
        age,
        speed,
        capacity,
        numOfRaces,
        lapsComp,
        type,
        fullName,
        racingTeam);
}

std::unique_ptr<Support> Garage::createCarObject(
    int carNumber,
    int age,
    int speed,
    int capacity,
    int crewSize,
    std::string type,
    std::string fullName,
    std::string racingTeam,
    char reliabilityRating)
{
    // create a new Support car and return a pointer to it if data is valid and if not return nullptr
    if (checkParams(age, speed, capacity) == 1)
    {
        return nullptr;
    }
    return std::make_unique<Support>(
        carNumber,
        age,
        speed,
        capacity,
        crewSize,
        type,
        fullName,
        racingTeam,
        reliabilityRating);
}
int Garage::checkInCar(
    int carNumber,
    int age,
    int speed,
    int capacity,
    int numOfRaces,
    int lapsComp,
    std::string type,
    std::string fullName,
    std::string racingTeam)
{
    // check in a racer in the garage if the data is valid if not return 1
    auto racer = createCarObject(
        carNumber,
        age,
        speed,
        capacity,
        numOfRaces,
        lapsComp,
        type,
        fullName,
        racingTeam);
    if (racer == nullptr || checkExists(carNumber) == 1 )
    {
        return 1;
    }
    cars.push_back(std::move(racer));
    return 0;
}

int Garage::checkInCar(
    int carNumber,
    int age,
    int speed,
    int capacity,
    int crewSize,
    std::string type,
    std::string fullName,
    std::string racingTeam,
    char reliabilityRating)
{
    // check in a support in the garage if the data is valid if not return 1
    auto support = createCarObject(
        carNumber,
        age,
        speed,
        capacity,
        crewSize,
        type,
        fullName,
        racingTeam,
        reliabilityRating);
    if (support == nullptr || checkExists(carNumber) == 1)
    {
        return 1;
    }
    cars.push_back(std::move(support));
    return 0;
}
int Garage::editByNumber(
    int carNumber,
    int age,
    int speed,
    int capacity,
    int numOfRaces,
    int lapsComp,
    std::string type,
    std::string fullName,
    std::string racingTeam)
{
    /* edit a car if it is a racer already by using the
       setters of the racer object and if it is not a racer
       we create a racer with the new data provided */

    // first we find the car using findCar function
    auto &car = cars[findCar(carNumber)];
    std::string realType = car->getType();

    if (realType == "Racer")
    {
        auto racer = dynamic_cast<Racer *>(car.get());
        int a = racer->setAge(age);
        int b = racer->setSpeed(speed);
        int c = racer->setCapacity(capacity);
        int d = racer->setNumOfRaces(numOfRaces);
        int e = racer->setLapsComp(lapsComp);
        int f = racer->setType(type);
        int g = racer->setFullName(fullName);
        int h = racer->setRacingTeam(racingTeam);
        if (a == 1 || b == 1 || c == 1 || d == 1 || e == 1 || f == 1 || g == 1 || h == 1)
        {
            return 1;
        }
        return 0;
    }
    else
    {
        auto racer = createCarObject(carNumber, age, speed, capacity, numOfRaces, lapsComp, type, fullName, racingTeam);
        if(racer==nullptr){
            return 1;
        }
        cars[findCar(carNumber)] = std::move(racer);
        return 0;
    }
}
int Garage::editByNumber(int carNumber, int age, int speed, int capacity, int crewSize, std::string type, std::string fullName, std::string racingTeam, char reliabilityRating)
{
    /* edit a car if it is a support already by using the
       setters of the support object and if it is not a support
       we create a support with the new data provided */

    // first we find the car using findCar function
    auto &car = cars[findCar(carNumber)];
    std::string realType = car->getType();

    if (realType == "Support")
    {
        auto support = dynamic_cast<Support *>(car.get());
        int a = support->setAge(age);
        int b = support->setSpeed(speed);
        int c = support->setCapacity(capacity);
        int d = support->setCrewSize(crewSize);
        int e = support->setType(type);
        int f = support->setFullName(fullName);
        int g = support->setRacingTeam(racingTeam);
        int h = support->setReliabilityRating(reliabilityRating);

        if (a == 1 || b == 1 || c == 1 || d == 1 || e == 1 || f == 1 || g == 1 || h == 1)
        {
            return 1;
        }
        return 0;
    }
    else
    {
        auto support = createCarObject(carNumber, age, speed, capacity, crewSize, type, fullName, racingTeam, reliabilityRating);
        if(support==nullptr){
            return 1;
        }
        cars[findCar(carNumber)] = std::move(support);
        return 0;
    }
}
std::vector<std::unique_ptr<Car>> &Garage::getCar()
{
    // returns a reference to the cars vector
    return cars;
}