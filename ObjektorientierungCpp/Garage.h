//
// Created by matthias on 3/1/25.
//

#ifndef GARAGE_H
#define GARAGE_H

#include <vector>
#include "Vehicle.h"

class Garage {
private:
    std::vector<Vehicle*> vehicles;

public:
    void addVehicle(Vehicle* vehicle);
    void displayAllVehicles() const;
    ~Garage();
};


#endif //GARAGE_H
