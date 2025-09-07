//
// Created by Matthias Roos on 15.01.25.
//

#ifndef UEBUNG8_H
#define UEBUNG8_H

#include <iostream>
#include <string>
using namespace std;

enum Status {OFFEN, GESCHLOSSEN};
enum Genre {HORROR,SCI_FI, ACTION, LOVE, FANTASY};

struct Film {
    string name;
    Genre genre;
    int laenge;
    double preis;
};
struct Videothek {
    string name;
    Film filme[5];
    int anzahlFilme;
    bool status;
    int maxPreis;
    int minPreis;
    int averagePreis;
};

void initVideothek(Videothek& videothek, string name, Status status);
void einfuegeFilm(Videothek& v, Film f);
double getMinPreis(const Videothek &v);
double getMaxPreis(const Videothek &v);
double getAveragePreis(const Videothek &v);
void ausgabeFilm(const Film &film);
void ausgabeVideothek(const Videothek& v);
string getGenreName(Genre genre);
#endif //UEBUNG8_H
