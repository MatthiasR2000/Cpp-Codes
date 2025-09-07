//
// Created by matthias on 3/1/25.
//

#include "Motorbike.h"

Motorbike::Motorbike(const std::string& brand, const std::string& model, int year, double price, bool hasSideCar)
    : Vehicle(brand, model, year, price), hasSideCar(hasSideCar) {}

void Motorbike::displayInfo() const {
    Vehicle::displayInfo();
    std::cout << "Has Sidecar: " << (hasSideCar ? "Yes" : "No") << std::endl;
}