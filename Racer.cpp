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
int Racer::getPerformanceScore(){
    performanceScore = speed * 10 + capacity;
    return performanceScore;
}
int Racer::getLapsComp()
{
    return lapsComp;
}
int Racer::setNumOfRaces(int numOfRaces)
{
    if(numOfRaces>=0){
        this->numOfRaces = numOfRaces;
        return 0;
    }
    return 1;
}
int Racer::setLapsComp(int lapsComp)
{
    if(lapsComp>=0){
        this->lapsComp = lapsComp;
        return 0;
    }
    return 1;
}