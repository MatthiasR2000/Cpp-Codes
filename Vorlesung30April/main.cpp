#include "Double.h"

int main() {

    /*
    Double komma1(4.3);
    Double komma2(4.0);
    Double komma3(20.0);

    kommaMain.push_back(komma1);
    kommaMain.push_back(komma2);
    kommaMain.push_back(komma3);
    */

    vector<Double> kommaMain;
    for (int i = 0; i < 10; i++) {
        Double komma(i*0.69 + (3.1+i));
        kommaMain.push_back(komma);
    }

    if (kommaMain.size() > 0) {
        double max = kommaMain[0].getKomma();
        for (int i = 1; i < kommaMain.size(); i++) {
            if (kommaMain[i].getKomma() > max) {
                max = kommaMain[i].getKomma();
            }
        }
        cout << max << endl;
    }

    cout << "fstream dataReader: " << endl;
    fstream dataReader;
    dataReader.open("daten.dat", ios::in);
    double maximus;
    int i = 0;
    if (dataReader.is_open()) {
        cout <<"hi";
        while (!dataReader.eof()) {

            double wert;
            dataReader >> wert;
            if (i == 0) {
               maximus = wert;
            } else if (wert > maximus) {
                maximus = wert;
            }
            i++;

            dataReader >> wert;
            Double w(wert);
            kommaMain.push_back(w);
            cout << "Biggest Komma: " << maximus << endl;
        }
    } else {
        cout << "error";
    }
    dataReader.close();
    return 0;
}