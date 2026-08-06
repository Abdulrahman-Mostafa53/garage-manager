#include <string>
#include "Car.h"
#pragma once
// A class representing a support car
class Support : public Car
{
public:
    Support(
        int carNumber,
        int age,
        int speed,
        int capacity,
        int crewSize,
        std::string type,
        std::string fullName,
        std::string racingTeam,
        char reliabilityRating);
    int getCrewSize(), getPerformanceScore();
    char getReliabilityRating();
    int setCrewSize(int crewSize);
    int setReliabilityRating(char reliabilityRating);

protected:
    int crewSize;
    char reliabilityRating;
};
