//
// Created by Matthias Roos on 24.06.25.
//

#ifndef ZUG_H
#define ZUG_H

#include "Waggon.h"
#include <array>

class Zug {
private:
    static const  int MAX_WAGGONS = 5;
    string name;
    Waggon waggons[MAX_WAGGONS];
    int counterWaggon = 0;
public:
    Zug(string name);
    void listWaggons() const;
    void addWaggons(Waggon waggon);
    double averageLength();
    bool findWagNr(int waggonNr);
};



#endif //ZUG_H
