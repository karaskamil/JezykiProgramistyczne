#include <iostream>
#include "wektor2D.h"

using namespace std;

wektor2D::wektor2D() {
    x1 = 1;
    y1 = 1;
}

wektor2D::wektor2D(double a, double b) {
    x1 = a;
    y1 = b;

}

wektor2D::wektor2D(double a, double b, double c, double d) {
    x1 = c-a;
    y1 = d-b;
}

double wektor2D::wezX() const {
    return x1;
}

double wektor2D::wezY() const {
    return y1;
}

void wektor2D::wyswietl() const {
    cout << "Wektor2D ma dlugosc: [" << x1 << ", " << y1 << "]";

}

double wektor2D::dlugosc() const {
        return sqrt(x1 * x1 + y1 * y1);
}

double wektor2D::policzKat(const wektor2D& drugi) {
    double iloczyn = iloczynSkalarny(drugi);
    double dl1 = this->dlugosc();
    double dl2 = drugi.dlugosc();
    try {
        if (dl1 != 0 && dl2 != 0) {
            double Kat = iloczyn / (dl1 * dl2);
            return acos(Kat) * 180 / 3.14;
        }
        else {
            throw(0);
        }

    }
    catch (int) {
        cout << "dlugosc jednego z wektorow wynosi 0, wiec nie da sie podzielic" << endl;
        return 0;
    }
}

void wektor2D::dodajWektor(const wektor2D& drugi) {
    this->x1 += drugi.x1;
    this->y1 += drugi.y1;

}

void wektor2D::odejmijWektor(const wektor2D& drugi) {
    this->x1 -= drugi.x1;
    this->y1 -= drugi.y1;

}

double wektor2D::iloczynSkalarny(const wektor2D& drugi) {
    return this->x1 * drugi.wezX() + this->y1 * drugi.wezY();
}