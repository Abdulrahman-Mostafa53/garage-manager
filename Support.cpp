#include "Support.h"

Support::Support(int carNumber, int age, int speed, int capacity, int crewSize, std::string type, std::string fullName, std::string racingTeam, char reliabilityRating) : Car(carNumber, age, speed, capacity, type, fullName, racingTeam)
{
    this->crewSize = crewSize;
    this->reliabilityRating = reliabilityRating;
    performanceScore = speed * 5 + capacity * 5;
}
int Support::getCrewSize()
{
    return crewSize;
}
char Support::getReliabilityRating()
{
    return reliabilityRating;
}