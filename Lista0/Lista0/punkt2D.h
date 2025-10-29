#ifndef Punkt2D_h
#define Punkt2D_h

#include <iostream>

using namespace std;

class punkt2D {
private:
    int x1;  // szerokosc punktu

    int y1;  // wysokosc punktu

public:
    punkt2D(); // konstruktor domyslny tworzacy punkt na wspolzednych 0,0

    punkt2D(int a, int b); // Konstruktor tworzacy punkt na plaszczyznie dwuwymiarowej

    int wezX() const; //zwraca polozenie punktu 2d na osi x

    int wezY() const; //zwraca polozenie punktu 2d na osi y

    void wyswietl() const; //wypisuje wspolrzedne punktu na ekran


};

#endif
