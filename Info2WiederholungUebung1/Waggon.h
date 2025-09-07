//
// Created by Matthias Roos on 24.06.25.
//

#ifndef WAGGON_H
#define WAGGON_H



#include <iostream>
using namespace std;

class Waggon {
private:
    int waggonNr;
    double length;
public:
    Waggon();
    Waggon(int waggonNr, double length);
    void printData() const;
    double getLength();
    int getWaggonNr();
};



#endif //WAGGON_H
