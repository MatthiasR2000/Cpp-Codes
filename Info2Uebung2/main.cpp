#include <iostream>
#include "Warenkorb.h"

int main() {
    Warenkorb w;
    w.readProd("daten.dat");
    w.printData();
    string gesucht;
    cout << "Was wird gesucht?: " << endl;
    cin >> gesucht;

    if (w.vorhanden(gesucht)) {
        cout << gesucht << " vorhanden" << endl;
    } else {
        cout << gesucht << " nicht vorhanden" << endl;
    }
    return 0;
}