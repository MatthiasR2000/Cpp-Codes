#include <iostream>
#include "Fahrzeug.h"
#include "Pkw.h"

int main() {
    // Array von Zeigern auf Fahrzeug-Objekte (kann Fahrzeuge oder Autos speichern)
    const int anzahlFahrzeuge = 3;
    Fahrzeug* fahrzeuge[anzahlFahrzeuge];

    // Objekte erstellen und ins Array speichern
    fahrzeuge[0] = new Fahrzeug("Mercedes", "C-Klasse", 2018, 30000);
    fahrzeuge[1] = new Pkw("BMW", "3er", 2020, 35000, 5, "Benzin");
    fahrzeuge[2] = new Pkw("Tesla", "Model 3", 2021, 45000, 5, "Elektrisch");

    // Alle Fahrzeuge anzeigen
    for (int i = 0; i < anzahlFahrzeuge; ++i) {
        fahrzeuge[i]->anzeigen();
        std::cout << "-----------------------" << std::endl;
    }

    // Speicher freigeben
    for (int i = 0; i < anzahlFahrzeuge; ++i) {
        delete fahrzeuge[i];
    }

    return 0;
}

