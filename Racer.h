#pragma once
#include <string>
#include "Car.h"
#pragma once
// A class representing a racer car
class Racer : public Car
{
public:
    Racer(
        int carNumber,
        int age,
        int speed,
        int capacity,
        int numOfRaces,
        int lapsComp,
        std::string type,
        std::string fullName,
        std::string racingTeam);
    int getNumOfRaces(), getLapsComp(), getPerformanceScore();
    int setNumOfRaces(int numOfRaces), setLapsComp(int lapsComp);

protected:
    int numOfRaces, lapsComp;
};