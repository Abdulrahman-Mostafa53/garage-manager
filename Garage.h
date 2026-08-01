#include<string>
#include<vector>
#include <memory>
#include "Car.h"
#pragma once

class Garage
{
public:
    Garage();
    int checkParams(int carNumber,int age,int speed,int capacity);
    int findCar(std::string carName);
    int findCar(int carNumber);
    int checkInCar(int carNumber, int age, int speed, int capacity, int numOfRaces, int lapsComp, std::string type, std::string fullName, std::string racingTeam);
    int checkInCar(int carNumber, int age, int speed, int capacity, int crewSize, std::string type, std::string fullName, std::string racingTeam, char reliabilityRating);
    int editByNumber(int carNumber, int age, int speed, int capacity, int numOfRaces, int lapsComp, std::string type, std::string fullName, std::string racingTeam);
    int editByNumber(int carNumber, int age, int speed, int capacity, int crewSize, std::string type, std::string fullName, std::string racingTeam, char reliabilityRating);
    std::vector<std::unique_ptr<Car>>& getCar();
protected:
    std::vector<std::unique_ptr<Car>> cars;
};
