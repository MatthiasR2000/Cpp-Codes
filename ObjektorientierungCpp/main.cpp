#include "Car.h"
#include "Motorbike.h"
#include "Dealership.h"
#include "Garage.h"

int main() {
    Dealership dealership;
    dealership.addVehicle(new Car("Maserati", "Ghibli", 2020, 20000, 4));
    dealership.addVehicle(new Motorbike("Harley", "", 2019, 15000, false));

    std::cout << "Dealership Vehicles:" << std::endl;
    dealership.displayAllVehicles();

    Garage garage;
    garage.addVehicle(new Car("Ferrari", "SF90", 2018, 350000, 2));
    garage.addVehicle(new Motorbike("Yamaha", "", 2021, 18000, false));

    std::cout << "Garage Vehicles:" << std::endl;
    garage.displayAllVehicles();

    return 0;
}
