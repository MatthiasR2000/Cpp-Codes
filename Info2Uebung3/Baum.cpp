//
// Created by Matthias Roos on 16.05.25.
//

#include "Baum.h"
using namespace std;

Baum::Baum(string sorte, int alter) {
    this->sorte = sorte;
    this->alter = alter;
}

string Baum::getSorte() const {
    return sorte;
}
int Baum::getAlter() const {
    return alter;
}

ostream& operator << (ostream& o, const Baum b) {
    o << "Sorte : " << b.getSorte() << " Alter : " << b.getAlter() << endl;
    return o;
}

Baum Baum::operator + (Baum other) {
    Baum baum(this->sorte + other.getSorte(), this->alter  + other.getAlter());
    return baum;
}

Baum Baum::operator - (Baum other) {
    string newSorte = "";

    if ((this->sorte.size() > other.sorte.size())) {
        newSorte += sorte.substr(0, this->sorte.size() - other.sorte.size());
    } else {
        newSorte += other.sorte.substr(0, this->sorte.size() - sorte.size());
    }
    Baum baum( newSorte, this->alter - other.alter);
    return baum;
}

Baum Baum::operator * (Baum other) {

    string newSorte = "";
    string newThis(5, this->sorte[this->sorte.size() -1]);
    string newOthe(5, other.sorte[0]);
    newSorte = this->sorte + newThis + newOthe + other.sorte;
    Baum baum(newSorte, this->alter * other.alter);
    return baum;
}
Baum Baum::operator / (Baum other) {
    string newThis(this->sorte.substr(0, 2));
    string newOthe(other.sorte.substr(0, 2));
    string newSorte = this->sorte + newThis + newOthe + other.sorte;
    Baum baum(newSorte, this->alter / other.alter);
    return baum;
}

void Baum::operator++() {
    this->alter += 5;
}
void Baum::operator--() {
    if (this->alter > 0) {
        if (this->alter > 5) {
            this->alter -= 5;
        }
        else {
            this->alter--;
        }

    };
}
bool Baum::operator<(Baum other) {
    return this->alter < other.alter;
}
bool Baum::operator>(Baum other) {
    return this->alter > other.alter;
}
bool Baum::operator<=(Baum other) {
    return this->alter <= other.alter;
}
bool Baum::operator>=(Baum other) {
    return this->alter >= other.alter;
}
bool Baum::operator==(Baum other) {
    return this->alter == other.alter && this->sorte == other.sorte;;
}
bool Baum::operator!=(Baum other) {
    return this->alter != other.alter || this->sorte == other.sorte;
}
