//
// Created by Matthias Roos on 06.10.24.
//

#include "Fahrzeug.h"

#include <iostream>

// Konstruktor
Fahrzeug::Fahrzeug(std::string marke, std::string modell, int baujahr, double preis)
    : marke(marke), modell(modell), baujahr(baujahr), preis(preis) {}

// Getter Methoden
std::string Fahrzeug::getMarke() const { return marke; }
std::string Fahrzeug::getModell() const { return modell; }
int Fahrzeug::getBaujahr() const { return baujahr; }
double Fahrzeug::getPreis() const { return preis; }

// Virtuelle Methode anzeigen()
void Fahrzeug::anzeigen() const {
    std::cout << "Marke: " << marke << ", Modell: " << modell
              << ", Baujahr: " << baujahr << ", Preis: " << preis << "€" << std::endl;
}

// Virtueller Destruktor
Fahrzeug::~Fahrzeug() {}
