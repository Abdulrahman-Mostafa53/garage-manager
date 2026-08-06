#include "Support.h"

Support::Support(
    int carNumber,
    int age,
    int speed,
    int capacity,
    int crewSize,
    std::string type,
    std::string fullName,
    std::string racingTeam,
    char reliabilityRating) : Car(carNumber, age, speed, capacity, type, fullName, racingTeam)
{
    /* this is constructor for the Support class and it calls the constructor
       of the base one to avoid repeating my self
       i only here define special properties!*/

    this->crewSize = crewSize;
    this->reliabilityRating = reliabilityRating;
    performanceScore = speed * 5 + capacity * 5;
}

// define getters for my special properties
int Support::getCrewSize()
{
    return crewSize;
}

char Support::getReliabilityRating()
{
    return reliabilityRating;
}

int Support::getPerformanceScore()
{
    /* i first recalculate the value in case of changing variables
       that performanceScore depends on like when editing a car for example */
    performanceScore = speed * 5 + capacity * 5;
    return performanceScore;
}

/* define setters for special properties and do necessary validations
   i return 0 if the setting was successful and if not i return 1 */
int Support::setCrewSize(int crewSize)
{
    // crew size cant be 0 or less
    if (crewSize > 0)
    {
        this->crewSize = crewSize;
        return 0;
    }
    return 1;
}
int Support::setReliabilityRating(char reliabilityRating)
{
    // we have three rating options A - b -c
    if (reliabilityRating == 'A' || reliabilityRating == 'B' || reliabilityRating == 'C')
    {
        this->reliabilityRating = reliabilityRating;
        return 0;
    }
    return 1;
}