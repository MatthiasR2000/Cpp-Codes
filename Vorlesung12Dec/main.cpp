#include <iostream>
#include <string>
#include "Structs.h"

using namespace std;

int main() {
    const int length = 2;
    Cat cat2;
    Cat cat3;
    Cat cats[length] = {cat2, cat3};
    giveMeName(cats, length);
    Cat cat1  = {"bert",4,"blau"};
    cout << cat1.name << endl;
    cout << cat1.alter << endl;
    cat1.alter = cat1.alter+1;
    cout << cat1.alter << endl;
    printCat(cat1);
    // Array von Person-Strukturen
    Person1 people[3] = {
        {"Alice", 30, Montag},
        {"Bob", 25, Freitag},
        {"Charlie", 35, Sonntag}
    };

    // Ausgabe der Informationen und des Verhaltens basierend auf dem Lieblingstag
    for (int i = 0; i < 3; i++) {
        cout << "Name: " << people[i].name << ", Alter: " << people[i].age << ", Lieblingstag: ";
        verhaltenBasierendAufWochentag(people[i].lieblingstag);
    }

    Person einwohner[3] = { {"Alice", {1, 1, 1990}, {"Hauptstrasse", 1, "Berlin", 10115}}, {"Bob", {2, 2, 1985}, {"Nebenstrasse", 2, "Hamburg", 20095}}, {"Charlie", {3, 3, 1975}, {"Ringstrasse", 3, "München", 80331}} }; // Zugriff auf die Stadt des 2. Einwohners cout << "Stadt des 2. Einwohners: " << einwohner[1].wohnort.stadt << endl; // Zugriff auf die Daten des 2. Einwohners Person p = einwohner[1]; Adresse a = p.wohnort; string s = a.stadt; cout << "Stadt des 2. Einwohners (über Variable): " << s <<
    return 0;
}

