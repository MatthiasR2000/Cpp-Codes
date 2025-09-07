//
// Created by Matthias Roos on 06.10.24.
//

#ifndef PKW_H
#define PKW_H

#include "fahrzeug.h"
#include <string>

class Pkw : public Fahrzeug {
private:
    int sitzplaetze;
    std::string treibstoff;

public:
    // Konstruktor
    Pkw(std::string marke, std::string modell, int baujahr, double preis, int sitzplaetze, std::string treibstoff);

    // Getter Methoden
    int getSitzplaetze() const;
    std::string getTreibstoff() const;

    // Überschriebene Methode
    void anzeigen() const override;

    // Destruktor
    ~Pkw();
};

#endif //PKW_H
