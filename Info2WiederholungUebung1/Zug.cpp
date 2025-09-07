//
// Created by Matthias Roos on 24.06.25.
//

#include "Zug.h"

Zug::Zug(string name) {
    this->name = name;
}
void Zug::listWaggons() const {
    for (int i = 0; i < this->counterWaggon; ++i) {
        this->waggons[i].printData();
    }
}

void Zug::addWaggons(Waggon waggon) {
    this->waggons[this->counterWaggon] = waggon;
    this->counterWaggon++;
}

double Zug::averageLength() {
    double sum = 0;
    for (int i = 0; i < this->counterWaggon; ++i) {
        sum += this->waggons[i].getLength();
    }
    cout << "Average length: ";
    return (sum/counterWaggon);
}

bool Zug::findWagNr(int waggonNr) {
    bool found = false;
    for (int i = 0; i < this->counterWaggon; ++i) {
        if (this->waggons[i].getWaggonNr() == waggonNr) {
            found = true;
            break;
        }
    }
    cout << "Gefunden true/false: "
    return found;
}