//
// Created by Matthias Roos on 30.04.25.
//

#include "Double.h"


Double::Double(double komma) {
    this->komma = komma;
}
double Double::getKomma() const {
    return this->komma;
}
double Double::setKomma(double kommaNeu) {
    this->komma = kommaNeu;
}
/*
double Double::addKomma(vector<Double> doubles, const Double &komma) {
    doubles.push_back(komma);
}
void Double::listKomma() const {
    for (int i = 0; i < doubles.size(); i++) {
        cout << doubles[i] << endl;
    }
}
double Double::biggestKomma() const {
    double biggestKomma = doubles[0];
    for (int i = 1; i < doubles.size(); i++) {
        if (doubles[i] > biggestKomma ) {
            biggestKomma = doubles[i];
        }
    }
    return biggestKomma;

}

*/