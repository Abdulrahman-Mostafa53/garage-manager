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
    return racingTeam;
}
int Car::setAge(int age)
{
    if(age>0){
        this->age = age;
        return 0;
    }
    return 1;
}
int Car::setSpeed(int speed)
{
    if(speed>0){
        this->speed = speed;
        return 0;
    }
    return 1;
}
int Car::setCapacity(int capacity)
{
    if(capacity>0){
        this->capacity = capacity;
        return 0;
    }
    return 1;
}
int Car::setType(std::string type)
{
    if(type=="Racer" || type=="Support"){
        this->type = type;
        return 0;
    }
    return 1;
}
int Car::setFullName(std::string fullName){
    this->fullName=fullName;
    return 0;
}
int Car::setRacingTeam(std::string racingTeam)
{
    this->racingTeam=racingTeam;
    return 0;
}

