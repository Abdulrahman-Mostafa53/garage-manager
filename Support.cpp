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
int Support::getPerformanceScore(){
    performanceScore = speed * 5 + capacity * 5;
    return performanceScore;
}
int Support::setCrewSize(int crewSize)
{
    if(crewSize>0){
        this->crewSize = crewSize;
        return 0;
    }
    return 1;
}
int Support::setReliabilityRating(char reliabilityRating)
{
    if(reliabilityRating=='A'||reliabilityRating=='B'||reliabilityRating=='C'){
        this->reliabilityRating=reliabilityRating;
        return 0;
    }
    return 1;
}