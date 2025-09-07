//
// Created by Matthias Roos on 09.05.25.
//

#ifndef PRODUKT_H
#define PRODUKT_H
#include <iostream>
#include <vector>
using namespace std;


class Produkt {
private:
    string name;
public:
    Produkt(string name);
    string getName() const;
};



#endif //PRODUKT_H
