//
// Created by matthias on 3/1/25.
//

#include "Garage.h"

void Garage::addVehicle(Vehicle* vehicle) {
    vehicles.push_back(vehicle);
}

void Garage::displayAllVehicles() const {
    for (const auto& vehicle : vehicles) {
        vehicle->displayInfo();
        std::cout << "-------------------" << std::endl;
    }
}
//Auto wird verwendet, weil in diesem vector verschiedene datentypen/objekttypen drinne sind
Garage::~Garage() {
    for (auto& vehicle : vehicles) {
        delete vehicle;
    }
}