#include "Racer.h"

Racer::Racer(
    int carNumber,
    int age,
    int speed,
    int capacity,
    int numOfRaces,
    int lapsComp,
    std::string type,
    std::string fullName,
    std::string racingTeam) : Car(carNumber, age, speed, capacity, type, fullName, racingTeam)
{
    /* this is constructor for the Racer class and it calls the constructor
       of the base one to avoid repeating my self
       i only here define special properties! */

    this->numOfRaces = numOfRaces;
    this->lapsComp = lapsComp;
    performanceScore = speed * 10 + capacity;
}

// define getters for my special properties
int Racer::getNumOfRaces()
{
    return numOfRaces;
}

int Racer::getPerformanceScore()
{
    /* i first recalculate the value in case of changing variables
       that performanceScore depends on like when editing a car for example */
    performanceScore = speed * 10 + capacity;
    return performanceScore;
}

int Racer::getLapsComp()
{
    return lapsComp;
}

/* define setters for special properties and do necessary validations.
   i return 0 if the setting was successful and if not i return 1 */
int Racer::setNumOfRaces(int numOfRaces)
{
    //a car can have 0 or more races only
    if (numOfRaces >= 0)
    {
        this->numOfRaces = numOfRaces;
        return 0;
    }
    return 1;
}
int Racer::setLapsComp(int lapsComp)
{
    // a car can have 0 or more laps completed
    if (lapsComp >= 0)
    {
        this->lapsComp = lapsComp;
        return 0;
    }
    return 1;
}