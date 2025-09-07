//
// Created by matthias on 3/1/25.
//

#ifndef MOTORBIKE_H
#define MOTORBIKE_H

#include "Vehicle.h"

class Motorbike : public Vehicle {
private:
    bool hasSideCar;

public:
    Motorbike(const std::string& brand, const std::string& model, int year, double price, bool hasSideCar);
    void displayInfo() const override;
};


#endif //MOTORBIKE_H
