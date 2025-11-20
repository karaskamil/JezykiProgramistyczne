#ifndef Punkt3D_h
#define Punkt3D_h

#include <iostream>
#include "wektor3D.h"
#include "punkt2D.h"

using namespace std;

class punkt3D {
private:
    double x1;  // szerokosc punktu

    double y1;  // wysokosc punktu

    double z1; // glebokosc punktu

public:
    punkt3D(); //konstruktor domyslny tworzacy punkt na wspolrzednych (0,0,0)

    punkt3D(double a, double b, double c); //Konstruktor tworzacy punkt na plaszczyznie trojwymiarowej

    double wezX() const; //zwraca polozenie punktu 3d na osi x

    double wezY() const; //zwraca polozenie punktu 3d na osi y

    double wezZ() const; //zwraca polozenie punktu 3d na osi z

    void wyswietl() const; //wypisuje wspolzedne punktu na ekran

    punkt3D przesun(const wektor3D& wektor) const; // tworzy nowy punkt przesuniety o wektor

    punkt2D rzut2D(double a, double b); // rzutowanie punktu3D na os 2D przy pomocy jakiegos parametru d nie wiem o co biega

};

#endif
