#pragma once

#include <string>

class Car
{
    std::string brand;
    int speed;
    int maxSpeed;
    int fuel;
    bool engineOn;
public:
    Car(std::string brand, int maxSpeed, int fuel);

    bool startEngine();
    bool increaseSpeed(int amount);
    void decreaseSpeed(int amount);
    bool refuel(int amount);
    void printStatus();
};
