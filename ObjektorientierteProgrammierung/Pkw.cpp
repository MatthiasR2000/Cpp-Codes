//
// Created by Matthias Roos on 06.10.24.
//

#include "Pkw.h"
#include <iostream>

// Konstruktor
Pkw::Pkw(std::string marke, std::string modell, int baujahr, double preis, int sitzplaetze, std::string treibstoff)
    : Fahrzeug(marke, modell, baujahr, preis), sitzplaetze(sitzplaetze), treibstoff(treibstoff) {}

// Getter Methoden
int Pkw::getSitzplaetze() const { return sitzplaetze; }
std::string Pkw::getTreibstoff() const { return treibstoff; }

// Überschriebene Methode anzeigen()
void Pkw::anzeigen() const {
    Fahrzeug::anzeigen(); // Aufruf der Basisfunktion
    std::cout << "Sitzplätze: " << sitzplaetze << ", Treibstoff: " << treibstoff << std::endl;
}

// Destruktor
Pkw::~Pkw() {}
