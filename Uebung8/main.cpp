#include "Uebung8.h"

int main() {
    Videothek v;
    initVideothek(v ,"Info1 Videoshop", Status::OFFEN);
    Film film1{"starwars", Genre::SCI_FI,2,40.45};
    Film film2,film3;
    Film* film2_;
    film2_ = &film2;
    film2_->name="starwars";
    film2_->genre=Genre::SCI_FI;
    film2_->laenge=4;
    film2_->preis=20.56;
    film2_ = &film3;
    film2_->name="Indiana Jones";
    film2_->genre=Genre::ACTION;
    film2_->laenge=4;
    film2_->preis=30.67;

    einfuegeFilm(v, film1);
    einfuegeFilm(v, film2);
    einfuegeFilm(v, film3);

    cout << "\nAusgabe Filme: " << endl;
    ausgabeFilm(film1);
    ausgabeFilm(film2);
    ausgabeFilm(film3);

    cout << "\nAusgabe Videothek: " << endl;
    ausgabeVideothek(v);

    cout << "\nAusgabe Preise: " << endl;
    cout << "Min Preis: " << getMinPreis(v) << endl;
    cout << "Max Preis: " << getMaxPreis(v) << endl;
    cout << "Average Preis: " << getAveragePreis(v) << endl;
    return 0;
}
