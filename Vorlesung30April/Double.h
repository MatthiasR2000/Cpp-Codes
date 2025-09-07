//
// Created by Matthias Roos on 30.04.25.
//

#ifndef DOUBLE_H
#define DOUBLE_H

#include <fstream>
#include <vector>
#include <iostream>
#include <ostream>
using namespace std;

class Double {
private:
    double komma;
    //vector<Double> doubles;
public:
    Double(double komma);
    double getKomma() const;
    double setKomma(double kommaNeu);
    //double addKomma(vector<Double> doubles, const Double &komma);
    //void listKomma() const;
    //double biggestKomma() const;
};



#endif //DOUBLE_H
