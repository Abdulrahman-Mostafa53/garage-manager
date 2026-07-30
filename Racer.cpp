#include "Racer.h"

Racer::Racer(int carNumber, int age, int speed, int capacity, int numOfRaces, int lapsComp, std::string type, std::string fullName, std::string racingTeam) : Car(carNumber, age, speed, capacity, type, fullName, racingTeam)
{
    this->numOfRaces = numOfRaces;
    this->lapsComp = lapsComp;
    performanceScore = speed * 10 + capacity;
}
int Racer::getNumOfRaces()
{
    return numOfRaces;
}
int Racer::getLapsComp()
{
    return lapsComp;
}
