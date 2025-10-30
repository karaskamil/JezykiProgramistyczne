#ifndef Punkt3D_h
#define Punkt3D_h

#include <iostream>
#include "wektor3D.h"

using namespace std;

class punkt3D {
private:
    int x1;  // szerokosc punktu

    int y1;  // wysokosc punktu

    int z1; // glebokosc punktu

public:
    punkt3D(); //konstruktor domyslny tworzacy punkt na wspolrzednych (0,0,0)

    punkt3D(int a, int b, int c); //Konstruktor tworzacy punkt na plaszczyznie trojwymiarowej

    int wezX() const; //zwraca polozenie punktu 3d na osi x

    int wezY() const; //zwraca polozenie punktu 3d na osi y

    int wezZ() const; //zwraca polozenie punktu 3d na osi z

    void wyswietl() const; //wypisuje wspolzedne punktu na ekran

    void przesun(const wektor3D& wektor); // przesuwa punkt o wektor

    punkt2D rzut2D(int a, int b); // rzutowanie punktu3D na os 2D przy pomocy jakiegos parametru d nie wiem o co biega

};

#endif
