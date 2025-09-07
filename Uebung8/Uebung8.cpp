//
// Created by Matthias Roos on 15.01.25.
//
#include "Uebung8.h"

void initVideothek(Videothek& videothek, string name, Status status) {
    videothek.name = name;
    videothek.status = status;
    videothek.anzahlFilme = 0;
    videothek.maxPreis = 0.0;
    videothek.minPreis = 0.0;
    videothek.averagePreis = 0.0;
}

void einfuegeFilm(Videothek& v, Film f) {
    if (v.anzahlFilme < 5) {
        v.filme[v.anzahlFilme++] = f;
    }
}

double getMinPreis(const Videothek &v) {
    if (v.anzahlFilme == 0) {
        return 0.0;
    }
    double minPreis = v.filme[0].preis;

    for (int i = 1; i < v.anzahlFilme; i++) {
        if (v.filme[i].preis < minPreis) {
            minPreis = v.filme[i].preis;
        }
    }
    return minPreis;
}

double getMaxPreis(const Videothek &v) {
    if (v.anzahlFilme == 0) {
        return 0.0;
    }
    double maxPreis = v.filme[0].preis;

    for (int i = 1; i < v.anzahlFilme; i++) {
        if (v.filme[i].preis > maxPreis) {
            maxPreis = v.filme[i].preis;
        }
    }
    return maxPreis;
}

double getAveragePreis(const Videothek &v) {
    if (v.anzahlFilme == 0) {
        return 0.0;
    }
    double gesamtPreis = 0.0;
    for (int i = 0; i < v.anzahlFilme; i++) {
        //cout << v.filme[i].preis << endl;
        gesamtPreis += v.filme[i].preis;
    }
    return gesamtPreis / v.anzahlFilme;
}

void ausgabeFilm(const Film &film) {
    cout << "Filemname: " << film.name << endl;
    cout <<  "Filemgenre: " << getGenreName(film.genre) << endl;
    cout << "Fileaenge: " << film.laenge << endl;
    cout << "Filmpreis: " << film.preis << endl;
}
void ausgabeVideothek(const Videothek& v) {
    for (int i = 0; i < v.anzahlFilme; i++) {
        ausgabeFilm(v.filme[i]);
    }
}

string getGenreName(Genre genre) {
    switch(genre) {
        case Genre::ACTION:
            return "Action";
        case Genre::SCI_FI:
            return "Sci_Fi";
        case Genre::FANTASY:
            return "Fantasy";
        case Genre::HORROR:
            return "Horror";
        case Genre::LOVE:
            return "Love";
        default:
            return "Unknown";
    }
}