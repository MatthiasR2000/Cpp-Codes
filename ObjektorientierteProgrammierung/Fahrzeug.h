//
// Created by Matthias Roos on 06.10.24.
//

#ifndef FAHRZEUG_H
#define FAHRZEUG_H

#include <string>

class Fahrzeug {
protected:
    std::string marke;
    std::string modell;
    int baujahr;
    double preis;

public:
    // Konstruktor
    Fahrzeug(std::string marke, std::string modell, int baujahr, double preis);

    // Getter Methoden
    std::string getMarke() const;
    std::string getModell() const;
    int getBaujahr() const;
    double getPreis() const;

    // Virtuelle Methode
    virtual void anzeigen() const;

    // Virtueller Destruktor
    virtual ~Fahrzeug();
};

#endif //FAHRZEUG_H
