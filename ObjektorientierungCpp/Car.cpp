//
// Created by matthias on 3/1/25.
//

#include "Car.h"
//Car Konstruktor mit berücksichtigung des Vehicle Konstruktor siehe Initialisierungsliste nach dem :
Car::Car(const std::string& brand, const std::string& model, int year, double price, int numDoors)
    : Vehicle(brand, model, year, price), numDoors(numDoors) {}
//Zuerst displayInfo von Vehicle und dann spezielles zu car
void Car::displayInfo() const {
    Vehicle::displayInfo();
    std::cout << "Number of Doors: " << numDoors << std::endl;
}