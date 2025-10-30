#include <iostream>
#include "punkt3D.h"
#include "wektor3D.h"
#include "punkt2D.h"

using namespace std;

punkt3D::punkt3D() {
    x1 = 1;
    y1 = 1;
    z1 = 1;

}

punkt3D::punkt3D(int a, int b, int c) {
    x1 = a;
    y1 = b;
    z1 = c;

}

int punkt3D::wezX() const {
    return x1;
}

int punkt3D::wezY() const {
    return y1;
}

int punkt3D::wezZ() const {
    return z1;
}

void punkt3D::wyswietl() const {
    cout << "Punkt3D znajduje sie na nastepujacych wspolrzednych: (" << x1 << "," << y1 << "," << z1 << ")";

}

void punkt3D::przesun(const wektor3D &wektor) { 
    if (wektor.wezX0() == 0 && wektor.wezY0() == 0 && wektor.wezZ0() == 0) {
        x1 += wektor.wezX();
        y1 += wektor.wezY();
        z1 += wektor.wezZ();

    }
    else { // bierze pod uwage punkt poczatkowy i zwrot wektora
        if (wektor.wezX() < wektor.wezX0()) { // jesli wektor skierowany "w lewo" odejmij dlugosc, w przeciwnym wypadku dodaj
            x1 -= wektor.wezX0() - wektor.wezX(); 
        }
        else {
            x1 += wektor.wezX0() - wektor.wezX();
        }
        if (wektor.wezY() < wektor.wezY0()) { // jesli wektor skierowany "w dol" odejmij dlugosc, w przeciwnym wypadku dodaj
            y1 -= wektor.wezY0() - wektor.wezY();
        }
        else {
            y1 += wektor.wezY0() - wektor.wezY();
        }
        if (wektor.wezZ() < wektor.wezZ0()) { // jesli wektor skierowany "z dala od obserwatora" odejmij dlugosc, w przeciwnym wypadku dodaj
            z1 -= wektor.wezZ0() - wektor.wezZ();
        }
        else {
            z1 += wektor.wezZ0() - wektor.wezZ();
        }
    
    }
}

punkt2D punkt3D::rzut2D(int a, int b){ // dodac wyjatek kiedy z0-z1=0 aby nie dzielic przez 0
    int d = a;
    int z0 = b;
    int x2 = (z0 * x1 - z1 * d) / (z0 - z1);
    int y2 = (z0 * y1) / (z0 - z1);
    
    return punkt2D(x2, y2);
    

}
