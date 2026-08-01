#pragma once
#include <string>

class Car
{
public:
    Car(int carNumber, int age, int speed, int capacity, std::string type, std::string fullName, std::string racingTeam);
    int getCarNumber(), getAge(), getSpeed(), getCapacity(), getPerformanceScore();
    std::string getType(), getFullName(), getRacingTeam();
    int setAge(int age),setSpeed(int speed),setCapacity(int capacity),setType(std::string type),setFullName(std::string fullName),setRacingTeam(std::string racingTeam);
    virtual ~Car() = default;

protected:
    int carNumber, age, speed, capacity, performanceScore;
    std::string type, fullName, racingTeam;
};
