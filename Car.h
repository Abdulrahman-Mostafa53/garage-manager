#pragma once
#include <string>

class Car
{
public:
    Car(int carNumber, int age, int speed, int capacity, std::string type, std::string fullName, std::string racingTeam);
    int getCarNumber(), getAge(), getSpeed(), getCapacity(), getPerformanceScore();
    std::string getType(), getFullName(), getRacingTeam();

protected:
    int carNumber, age, speed, capacity, performanceScore;
    std::string type, fullName, racingTeam;
};
