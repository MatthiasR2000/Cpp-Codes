//
// Created by Matthias Roos on 16.05.25.
//

#ifndef BAUM_H
#define BAUM_H
#include <iostream>
using namespace std;

class Baum {
private:
    string sorte;
    int alter;
public:
    Baum(string sorte, int alter);
    string getSorte() const;
    int getAlter() const;
    friend ostream& operator << (ostream&, const Baum b);
    Baum operator+(Baum other);
    Baum operator-(Baum other);
    Baum operator*(Baum other);
    Baum operator/(Baum other);

    void operator++();
    void operator--();
    bool operator<(Baum other);
    bool operator>(Baum other);
    bool operator<=(Baum other);
    bool operator>=(Baum other);
    bool operator==(Baum other);
    bool operator!=(Baum other);

};

#endif //BAUM_H
