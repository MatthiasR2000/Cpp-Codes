//
// Created by Matthias Roos on 09.05.25.
//

#include "Produkt.h"


Produkt::Produkt(string name) {
    this->name = name;
}

string Produkt::getName() const {
    return name;
}