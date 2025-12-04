#ifndef Punkt2D_h
#define Punkt2D_h

#include <iostream>

using namespace std;

class punkt2D {
private:
    double x1;  // szerokosc punktu

    double y1;  // wysokosc punktu

public:
    punkt2D(); // konstruktor domyslny tworzacy punkt na wspolzednych 0,0

    punkt2D(double a, double b); // Konstruktor tworzacy punkt na plaszczyznie dwuwymiarowej

    double wezX() const; //zwraca polozenie punktu 2d na osi x

    double wezY() const; //zwraca polozenie punktu 2d na osi y

    void wyswietl() const; //wypisuje wspolrzedne punktu na ekran


};

#endif
