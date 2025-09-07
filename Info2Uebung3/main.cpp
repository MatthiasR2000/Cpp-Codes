
#include "Baum.h"

int main() {

    Baum baum1("erdbeer", 2);
    Baum baum2("banana", 4);
    Baum baum3 = baum1 + baum2;
    Baum baum4 = baum1 - baum2;
    Baum baum5 = baum1 * baum2;
    Baum baum6 = baum1 / baum2;
    cout << "Baum 1 Sorte: " << baum1.getSorte() << " Alter " << baum1.getAlter() << endl;
    cout << "Baum 2 Sorte: " << baum2.getSorte() << " Alter " << baum2.getAlter() << endl;
    cout << "Baum 3 Sorte: " << baum3.getSorte() << " Alter " << baum3.getAlter() << endl;
    cout << "Baum 4 Sorte: " << baum4.getSorte() << " Alter " << baum4.getAlter() << endl;
    cout << "Baum 5 Sorte: " << baum5.getSorte() << " Alter " << baum5.getAlter() << endl;
    cout << "Baum 6 Sorte: " << baum6.getSorte() << " Alter " << baum6.getAlter() << endl;
    ++baum3;
    --baum4;
    Baum baum7("Tanne", 15);
    Baum baum8("Tanne", 16);
    if (baum7 > baum8) {
        cout << baum7;
    } else if (baum7 < baum8) {
        cout << baum8;
    } else {
        cout << "Gleich" << endl;
    }

    return 0;
}