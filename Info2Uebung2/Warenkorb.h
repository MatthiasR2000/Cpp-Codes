//
// Created by Matthias Roos on 09.05.25.
//

#ifndef WARENKORB_H
#define WARENKORB_H
#include "Produkt.h"
#include <fstream>

class Warenkorb {
private:
    int anzProdukte;
    vector<Produkt> produkte;
public:
    int getAnzProdukte()const;
    int setAnzProdukte(int anzProdukte);
    void printData() const;
    bool vorhanden(string p);
    void addProdukt(Produkt p);
    void readProd(string datei);
};



#endif //WARENKORB_H
