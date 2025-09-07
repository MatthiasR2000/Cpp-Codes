//
// Created by Matthias Roos on 24.06.25.
//

#include "Waggon.h"
Waggon::Waggon() {

}
Waggon::Waggon(int waggonNr, double length) {
    this->waggonNr = waggonNr;
    this->length = length;
}
void Waggon::printData() const {
    cout << "Waggon " << waggonNr
    << " length " << length << endl;
}

double Waggon::getLength() {
    return this->length;
}

int Waggon::getWaggonNr() {
    return this->waggonNr;
}