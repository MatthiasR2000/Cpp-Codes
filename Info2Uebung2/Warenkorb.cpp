//
// Created by Matthias Roos on 09.05.25.
//

#include "Warenkorb.h"

int Warenkorb::getAnzProdukte()const {
    return anzProdukte;
}

int Warenkorb::setAnzProdukte(int anzProdukte) {
    this->anzProdukte = anzProdukte;
}
void Warenkorb::printData() const {
    cout << "Eingekauft: " << endl;
    for (Produkt waren : this->produkte) {
        cout << waren.getName() << endl;
    }
}

bool Warenkorb::vorhanden(string p) {
    for (Produkt waren : this->produkte) {
        if (waren.getName() == p) {
            return true;
        }
    }
    return false;
}

void Warenkorb::addProdukt(Produkt p) {
    this->produkte.push_back(p);
    this->anzProdukte++;
}

void Warenkorb::readProd(string datei) {
    fstream kopieren;
    kopieren.open(datei, ios::in);
    if (kopieren.is_open()) {
        cout << "copy" << endl;
        while (!kopieren.eof()) {
            string text;
            getline(kopieren, text);
            Produkt p(text);
            this->addProdukt(p);
        }
    } else {
        cout << "no copy" << endl;
    }
    kopieren.close();
}