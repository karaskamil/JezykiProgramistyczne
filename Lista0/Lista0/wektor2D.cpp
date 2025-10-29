#include <iostream>
#include "wektor2D.h"

using namespace std;

wektor2D::wektor2D() {
    x0 = 1;
    y0 = 1;
    x1 = 0;
    y1 = 0;
}

wektor2D::wektor2D(int a, int b) {
    x0 = 0;
    y0 = 0;
    x1 = a;
    y1 = b;

}

wektor2D::wektor2D(int a, int b, int c, int d) {
    x0 = a;
    y0 = b;
    x1 = c;
    y1 = d;
}

void wektor2D::wyswietl() const {
    cout << "Wektor2D zaczyna sie na nastepujacych wspolrzednych : " << x0 << ", " << y0 << "i konczy sie na: " << x1 << ", " << y1;

}

double wektor2D::dlugosc() const {
    if (x0 == 0 && y0 == 0) {
        return sqrt(x1 * x1 + y1 * y1);
    }
    else {
        double u = x1 - x0;
        double i = y1 - y0;
        return sqrt(u * u + i * i);
    }
}

double wektor2D::policzKat(const wektor2D& drugi) {
    double iloczyn = this->x1 * drugi.x1 + this->y1 * drugi.y1;
    double dl1 = this->dlugosc();
    double dl2 = drugi.dlugosc();
    double Kat = iloczyn/(dl1*dl2);
    double stopnie = acos(Kat)*180/3.14;
    return stopnie;
}

void wektor2D::dodajWektor(const wektor2D& drugi) {
    if (x0 == 0 && y0 == 0) {
        this->x1 += drugi.x1;
        this->y1 += drugi.y1;
    }
    else {
        this->x1 += drugi.x1 - drugi.x0;
        this->y1 += drugi.y1 - drugi.y0;
    }
}

void wektor2D::odejmijWektor(const wektor2D& drugi) {
    if (this->x0 == drugi.x0 && this->y0 == drugi.y0) {
        this->x1 -= drugi.x1;
        this->y1 -= drugi.y1;
    }
    else {
        this->x1 -= drugi.x1 - drugi.x0;
        this->y1 -= drugi.y1 - drugi.y0;
    }
}