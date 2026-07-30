#pragma once
#include <string>
#include "Car.h"

class Racer : public Car
{
public:
    Racer(int carNumber, int age, int speed, int capacity, int numOfRaces, int lapsComp, std::string type, std::string fullName, std::string racingTeam);
    int getNumOfRaces();
    int getLapsComp();

protected:
    int numOfRaces, lapsComp;
};