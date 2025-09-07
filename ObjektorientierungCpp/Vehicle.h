//
// Created by matthias on 3/1/25.
//

#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>
#include <iostream>
//Vehicle ist in diesem Projekt eine Basisklasse heißt, es wird andere Klassen geben die von Vehicle erben werden
class Vehicle {
//Verkapselung damit die abgeleiteten Klassen diese Attribute haben können
protected:
    std::string brand;
    std::string model;
    int year;
    double price;

public:
    //Getter und Setter
    std::string getBrand() const;
    void setBrand(const std::string& newBrand);
    //Konstruktor um ein Objekt dieser Klasse zu erstellen
    Vehicle(const std::string& brand, const std::string& model, int year, double price);
    //Polymorphie diese methoden können auf alle abgeleiteten objekte dieser Klasse angwendet werden macht das ganze viel effizienter
    virtual void displayInfo() const;
    virtual ~Vehicle();
};

#endif //VEHICLE_H
