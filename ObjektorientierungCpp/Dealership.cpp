//
// Created by matthias on 3/1/25.
//

#include "Dealership.h"

void Dealership::addVehicle(Vehicle* vehicle) {
    vehicles.push_back(vehicle);
}

void Dealership::displayAllVehicles() const {
    // Iteriert über alle Fahrzeuge und ruft die richtige displayInfo()-Methode auf
    for (const auto& vehicle : vehicles) {
        vehicle->displayInfo();
        std::cout << "-------------------" << std::endl;
    }
}

Dealership::~Dealership() {
    for (auto& vehicle : vehicles) {
        delete vehicle;
    }
}