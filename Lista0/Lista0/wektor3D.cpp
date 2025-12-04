#include <iostream>
#include "wektor3D.h"
#include "punkt3D.h"

using namespace std;

wektor3D::wektor3D() {
    x1 = 1;
    y1 = 1;
    z1 = 1;

}

wektor3D::wektor3D(double a, double b, double c) {
    x1 = a;
    y1 = b;
    z1 = c;

}
/*
wektor3D::wektor3D(const punkt3D p){
    x1 = p.wezX();
    y1 = p.wezY();
    z1 = p.wezZ();
}
*/

wektor3D::wektor3D(double a, double b, double c, double d, double e, double f) {
    x1 = d-a;
    y1 = e-b;
    z1 = f-c;
    
}
/*
wektor3D::wektor3D(const punkt3D p, const punkt3D r){
    x1 = abs(p.wezX() - r.wezX());
    y1 = abs(p.wezY() - r.wezY());
    z1 = abs(p.wezZ() - r.wezZ());
}*/

double wektor3D::wezX() const{
    return x1;
}

double wektor3D::wezY() const{
    return y1;
}

double wektor3D::wezZ() const{
    return z1;
}

double wektor3D::dlugosc() const {
    return sqrt(x1 * x1 + y1 * y1 + z1 * z1);
}

double wektor3D::policzKat(const wektor3D& drugi) {
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

void wektor3D::dodajWektor(const wektor3D& drugi) {
    this->x1 += drugi.x1;
    this->y1 += drugi.y1;
    this->z1 += drugi.z1;
}

void wektor3D::odejmijWektor(const wektor3D& drugi) { 
    this->x1 -= drugi.wezX();
    this->y1 -= drugi.wezY();
    this->z1 -= drugi.wezZ();
}

wektor3D wektor3D::iloczynWektorowy(const wektor3D& drugi) const {
    double x = this->y1 * drugi.wezZ() - this->z1 * drugi.wezY();
    double y = this->z1 * drugi.wezX() - this->x1 * drugi.wezZ();
    double z = this->x1 * drugi.wezY() - this->y1 * drugi.wezX();
    
    return wektor3D(x, y, z);
}

double wektor3D::iloczynSkalarny(const wektor3D& drugi) {
    return this->x1*drugi.wezX() + this->y1 * drugi.wezY() + this->z1 * drugi.wezZ();
}