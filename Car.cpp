#include "Car.h"

Car::Car(
    int carNumber,
    int age,
    int speed,
    int capacity,
    std::string type,
    std::string fullName,
    std::string racingTeam)
{
    // this will be called in all derived classes
    this->carNumber = carNumber;
    this->age = age;
    this->speed = speed;
    this->capacity = capacity;
    this->performanceScore = performanceScore;
    this->type = type;
    this->fullName = fullName;
    this->racingTeam = racingTeam;
}
// common getters in all derived classes
int Car::getCarNumber()
{
    return carNumber;
}

int Car::getAge()
{
    return age;
}

int Car::getSpeed()
{
    return speed;
}

int Car::getCapacity()
{
    return capacity;
}

int Car::getPerformanceScore()
{
    return performanceScore;
}

std::string Car::getType()
{
    return type;
}

std::string Car::getFullName()
{
    return fullName;
}

std::string Car::getRacingTeam()
{
    return racingTeam;
}

/*  common setters with rules for validation
    return 0 if setting was successful and 1 if not */
int Car::setAge(int age)
{
    // only positive non zero age
    if (age > 0)
    {
        this->age = age;
        return 0;
    }
    return 1;
}

int Car::setSpeed(int speed)
{
    // only positive non zero speed
    if (speed > 0)
    {
        this->speed = speed;
        return 0;
    }
    return 1;
}

int Car::setCapacity(int capacity)
{
    // only positive non zero capacity
    if (capacity > 0)
    {
        this->capacity = capacity;
        return 0;
    }
    return 1;
}

int Car::setType(std::string type)
{
    // allow only 2 types (as far as this application is concerned now as i didnt do the advanced bonus :( )
    if (type == "Racer" || type == "Support")
    {
        this->type = type;
        return 0;
    }
    return 1;
}

int Car::setFullName(std::string fullName)
{
    this->fullName = fullName;
    return 0;
}

int Car::setRacingTeam(std::string racingTeam)
{
    this->racingTeam = racingTeam;
    return 0;
}

int Car::setPerformanceScore()
{
    return 0;
}
