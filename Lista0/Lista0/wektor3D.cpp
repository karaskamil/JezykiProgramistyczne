#include <iostream>
#include "wektor3D.h"

using namespace std;

wektor3D::wektor3D() {
    x1 = 1;
    y1 = 1;
    z1 = 1;
    x0 = 0;
    y0 = 0;
    z0 = 0;

}

wektor3D::wektor3D(int a, int b, int c) {
    x1 = a;
    y1 = b;
    z1 = c;
    x0 = 0;
    y0 = 0;
    z0 = 0;
}

wektor3D::wektor3D(int a, int b, int c, int d, int e, int f) {
    x0 = a;
    y0 = b;
    z0 = c;
    x1 = d;
    y1 = e;
    z1 = f;

}

int wektor3D::wezX() const{
    return x1;
}

int wektor3D::wezY() const{
    return y1;
}

int wektor3D::wezZ() const{
    return z1;
}

int wektor3D::wezX0() const {
    return x0;
}

int wektor3D::wezY0() const {
    return y0;
}

int wektor3D::wezZ0() const {
    return z0;
}

double wektor3D::dlugosc() const {
    if (x0 == 0 && y0 == 0) {
        return sqrt(x1 * x1 + y1 * y1 + z1 * z1);
    }
    else {
        double u = x1 - x0;
        double i = y1 - y0;
        double j = z1 - z0;
        return sqrt(u * u + i * i + j * j);
    }
    
}

double wektor3D::policzKat(const wektor3D& drugi) {
    double iloczyn = x1 * drugi.x1 + y1 * drugi.y1 + z1 * drugi.z1;
    double dl1 = this->dlugosc();
    double dl2 = drugi.dlugosc();
    double Kat = iloczyn / (dl1 * dl2);
    return acos(Kat) * 180 / 3.14;
}

void wektor3D::dodajWektor(const wektor3D& drugi) {
    if (x0 == 0 && y0 == 0) {
        this->x1 += drugi.x1;
        this->y1 += drugi.y1;
    }
    else {
        this->x1 += drugi.x1 - drugi.x0;
        this->y1 += drugi.y1 - drugi.y0;
    }
}

void wektor3D::odejmijWektor(const wektor3D& drugi) { 
    if (this->x0 == drugi.x0 && this->y0 == drugi.y0) {
        this->x1 -= drugi.x1;
        this->y1 -= drugi.y1;
    }
    else {
        this->x1 -= drugi.x1 - drugi.x0;
        this->y1 -= drugi.y1 - drugi.y0;
    }
}

wektor3D wektor3D::iloczynWektorowy(const wektor3D& drugi) const {
    int x = this->wezY() * drugi.wezZ() - this->wezZ() * drugi.wezY();
    int y = this->wezZ() * drugi.wezX() - this->wezX() * drugi.wezZ();
    int z = this->wezX() * drugi.wezY() - this->wezY() * drugi.wezX();
    
    return wektor3D(x, y, z);
}

int wektor3D::iloczynSkalarny(const wektor3D& drugi)
{
    return this->wezX()*drugi.wezX() + this->wezY() * drugi.wezY() + this->wezZ() * drugi.wezZ();
}