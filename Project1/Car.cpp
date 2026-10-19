#include <iostream>
#include "Car.h"

Car::Car(std::string name, int topSpeed, int fuelAmount)
{
    brand = name;
    speed = 0;
    maxSpeed = topSpeed;
    fuel = fuelAmount;
    engineOn = false;
}

bool Car::startEngine()
{
    if (engineOn == true)
    {
        return false;
    }

    engineOn = true;
    return true;
}

bool Car::increaseSpeed(int amount) // Тут повышение типа + проверка на старт движка
{
    if (engineOn == false)
    {
        return false;
    }

    if (amount <= 0 || fuel <= 0 || speed >= maxSpeed)
    {
        return false;
    }

    speed += amount;
    if (speed > maxSpeed)
    {
        speed = maxSpeed;
    }

    fuel--;
    return true;
}

void Car::decreaseSpeed(int amount) // Тут уменьшение типа
{
    if (amount <= 0)
    {
        return;
    }

    speed -= amount;
    if (speed < 0)
    {
        speed = 0;
    }
}

bool Car::refuel(int amount)
{
    if (amount <= 0)
    {
        return false;
    }

    fuel += amount;
    return true;
}

void Car::printStatus()
{
    std::cout << "Brand: " << brand << '\n';

    if (engineOn == true)
    {
        std::cout << "Engine: on\n";
    }
    else
    {
        std::cout << "Engine: off\n";
    }

    std::cout << "Speed: " << speed << '\n'
        << "Max speed: " << maxSpeed << '\n'
        << "Fuel: " << fuel << '\n';
}
