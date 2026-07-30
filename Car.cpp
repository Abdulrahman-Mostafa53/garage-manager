#include "Car.h"

Car::Car(int carNumber, int age, int speed, int capacity, std::string type, std::string fullName, std::string racingTeam)
{
    this->carNumber = carNumber;
    this->age = age;
    this->speed = speed;
    this->capacity = capacity;
    this->performanceScore = performanceScore;
    this->type = type;
    this->fullName = fullName;
    this->racingTeam = racingTeam;
}
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
    return fullName;
}
