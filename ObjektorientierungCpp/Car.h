//
// Created by matthias on 3/1/25.
//

#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"
//Car erbt protected und public attribute von Vehicle
class Car : public Vehicle {
private:
    int numDoors;

public:
    Car(const std::string& brand, const std::string& model, int year, double price, int numDoors);
    void displayInfo() const override;//Override von der virtual methode in vehicle
    //Destruktor von Vehicle macht die Arbeit für alle abgleiteten Klassen mit deswegen ist hier keiner
};
#endif //CAR_H
