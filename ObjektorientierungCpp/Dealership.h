//
// Created by matthias on 3/1/25.
//

#ifndef DEALERSHIP_H
#define DEALERSHIP_H

#include <vector>
#include "Vehicle.h"

class Dealership {
private:
    //Vector voll mit vehicles objekten car motorbike usw
    std::vector<Vehicle*> vehicles;

public:
    //Der Pointer ist sehr wichtig damit das Programm richtig versteht, was für ein Objekt es ist car/motorbike
    //Thema: Objectslicing -> ohne zeiger verliert vehicle seinen individuellen attribute
    void addVehicle(Vehicle* vehicle);
    void displayAllVehicles() const;
    ~Dealership();
};




#endif //DEALERSHIP_H
