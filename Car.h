#pragma once
#include <string>

// a class representing a general car
class Car
{
public:
    Car(
        int carNumber,
        int age,
        int speed,
        int capacity,
        std::string type,
        std::string fullName,
        std::string racingTeam);
    // all common getters to any derived car
    int getCarNumber(), getAge(), getSpeed(), getCapacity(), getPerformanceScore();
    std::string getType(), getFullName(), getRacingTeam();
    // all common setters to any derived car
    int setAge(int age),
        setSpeed(int speed),
        setCapacity(int capacity),
        setType(std::string type),
        setFullName(std::string fullName),
        setRacingTeam(std::string racingTeam);
    /* this method will have different implementations in derived classes
       as they will recalculate score when they set it and they have different formulas */
    virtual int setPerformanceScore();
    
protected:
    int carNumber, age, speed, capacity, performanceScore;
    std::string type, fullName, racingTeam;
};
