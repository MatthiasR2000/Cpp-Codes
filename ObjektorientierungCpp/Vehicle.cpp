//
// Created by matthias on 3/1/25.
//

#include "Vehicle.h"

//Wichtig hinter dem : in der Klammer bei brand könnte ebenfalls ein funktionsaufruf sein wie z.b generateRandomBrand() oder ein fest definierter Wert
Vehicle::Vehicle(const std::string& brand, const std::string& model, int year, double price)
    : brand(brand), model(model), year(year), price(price) {}

/*Getter und Setter
 * Mit Ihnen kann man auf Private und protected Attribute einer Klasse zugreifen,
 * werden in diesem Projekt nicht benutzt da man mit Polymorphie und virtual methoden, siehe unten das Ganze regelt
 */
std::string Vehicle::getBrand() const {
    return brand;
}
void Vehicle::setBrand(const std::string& newBrand) {
    brand = newBrand;
}

void Vehicle::displayInfo() const {
    std::cout << "Brand: " << brand << ", Model: " << model << ", Year: " << year << ", Price: $" << price << std::endl;
}
//Standard-Destruktor
Vehicle::~Vehicle() {}