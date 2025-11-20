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

punkt3D::punkt3D(double a, double b, double c) {
    x1 = a;
    y1 = b;
    z1 = c;

}

double punkt3D::wezX() const {
    return x1;
}

double punkt3D::wezY() const {
    return y1;
}

double punkt3D::wezZ() const {
    return z1;
}

void punkt3D::wyswietl() const {
    cout << "Punkt3D znajduje sie na nastepujacych wspolrzednych: (" << x1 << "," << y1 << "," << z1 << ")";

}

punkt3D punkt3D::przesun(const wektor3D &wektor) const { 
    double a = this->x1 + wektor.wezX();
    double b = this->y1 + wektor.wezY();
    double c = this->z1 + wektor.wezZ();
    return punkt3D(a, b, c);

}

punkt2D punkt3D::rzut2D(double a, double b) {
    double d = a;
    double z0 = b;
    try {
        if (z0 != z1) {
            double x2 = ((z0 * x1) - (z1 * d)) / (z0 - z1);
            double y2 = (z0 * y1) / (z0 - z1);
            return punkt2D(x2, y2);
        }
        else {
            throw(0);
        }
    }
    catch (int) {
        cout << "Podano niewlasciwe parametry, nie da sie dzielic przez 0.";
        exit;
    }
}
