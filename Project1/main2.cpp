#include "Car.h"

int main()
{
    Car car("Toyota", 180, 5);

    car.startEngine();
    car.increaseSpeed(60);
    car.increaseSpeed(40);
    car.decreaseSpeed(20);
    car.refuel(3);
    car.printStatus();
}