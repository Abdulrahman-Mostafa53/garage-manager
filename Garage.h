#include <string>
#include <vector>
#include <memory>
#include "Car.h"
#include "Racer.h"
#include "Support.h"
#pragma once

 /* this is a class representing a garage
    it is really like the core class of the application */

class Garage
{
public:
    Garage();
    int checkParams(int age, int speed, int capacity);
    int checkExists(int carNumber);
    int findCar(std::string carName);
    int findCar(int carNumber);

    std::unique_ptr<Racer> createCarObject(
        int carNumber,
        int age,
        int speed,
        int capacity,
        int numOfRaces,
        int lapsComp,
        std::string type,
        std::string fullName,
        std::string racingTeam);

    std::unique_ptr<Support> createCarObject(
        int carNumber,
        int age,
        int speed,
        int capacity,
        int crewSize,
        std::string type,
        std::string fullName,
        std::string racingTeam,
        char reliabilityRating);

    int checkInCar(
        int carNumber,
        int age,
        int speed,
        int capacity,
        int numOfRaces,
        int lapsComp,
        std::string type,
        std::string fullName,
        std::string racingTeam);

    int checkInCar(
        int carNumber,
        int age,
        int speed,
        int capacity,
        int crewSize,
        std::string type,
        std::string fullName,
        std::string racingTeam,
        char reliabilityRating);

    int editByNumber(
        int carNumber,
        int age,
        int speed,
        int capacity,
        int numOfRaces,
        int lapsComp,
        std::string type,
        std::string fullName,
        std::string racingTeam);

    int editByNumber(
        int carNumber,
        int age,
        int speed,
        int capacity,
        int crewSize,
        std::string type,
        std::string fullName,
        std::string racingTeam,
        char reliabilityRating);

    std::vector<std::unique_ptr<Car>> &getCar();

protected:
    /* this is a vector for storing my cars that uses smart pointer as a type
       i used vector because we dont know how much cars the user would add
       and vectors are flexible i can keep adding elemets just by calling push_back!
       vectors where the only thing i really watched from the STL playlist so i am glad that
       i saw the idea pefore getting this project task in oop :) */
    std::vector<std::unique_ptr<Car>> cars;
};
