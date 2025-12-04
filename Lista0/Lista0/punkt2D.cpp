#include <iostream>
#include "punkt2D.h"

using namespace std;

punkt2D::punkt2D() {
    x1 = 1;
    y1 = 1;
}

punkt2D::punkt2D(double a, double b) {
    x1 = a;
    y1 = b;

}

double punkt2D::wezX() const {
    return x1;
}

double punkt2D::wezY() const {
    return y1;
}

void punkt2D::wyswietl() const {
    cout << "Punkt2D znajduje sie na nastepujacych wspolrzednych: " << x1 << "," << y1;

}
