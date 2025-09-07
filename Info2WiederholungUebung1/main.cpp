#include "Zug.h"

int main() {
    Zug zug("OOP-Speedstar");
    Waggon w1(1,2.0);
    Waggon w2(2,4.0);
    Waggon w3(3,6.0);
    zug.addWaggons(w1);
    zug.addWaggons(w2);
    zug.addWaggons(w3);
    zug.listWaggons();
    cout << zug.averageLength() << endl;
    cout << zug.findWagNr(3) << endl;
    cout << zug.findWagNr(8) << endl;
    return 0;
}
