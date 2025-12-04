#ifndef wektor3D_h
#define wektor3D_h

#include <iostream>
#include <math.h>

using namespace std;

class wektor3D {
private:
    double x1; // dlugosc na szerokosc wektora

    double y1; // dlugosc na wysokosc wektora

    double z1; // dlugosc na glebokosc wektora

public:
    wektor3D(); // Konstruktor domyslny

    wektor3D(double a, double b, double c); // Konstruktor tworzacy wektor na plaszczyznie trojwymiarowej z bazowym punktem startowym na pozycji (0,0)
    
    //wektor3D(const punkt3D p); // Konstruktor tworzacy wektor od punktu (0,0) do wspolrzednych punktu 3D

    wektor3D(double a, double b, double c, double d, double e, double f); // Konstruktor tworzacy wektor na plaszczyznie trojwymiarowej z podanymi punktami startowymi i koncowymi przez uzytkownika

    //wektor3D(const punkt3D p, punkt3D r); // Konstruktor tworzacy wektor od punktu p do punktu r
    
    double wezX() const; // zwraca wartosc x1 wektora 3D

    double wezY() const; // zwraca wartosc y1 wektora 3D

    double wezZ() const; // zwraca wartosc z1 wektora 3D

    double policzKat(const wektor3D& drugi); // liczy kat pomiedzy dwoma wektorami 3D

    void dodajWektor(const wektor3D& drugi); // dodaje jeden wektor do drugiego 

    void odejmijWektor(const wektor3D& drugi); // odejmuje jeden wektor od drugiego

    double dlugosc() const; // no jest napisane czego nie rozumisz

    wektor3D iloczynWektorowy(const wektor3D& drugi) const; //oblicza iloczyn wektorowy dwoch wektorow

    double iloczynSkalarny(const wektor3D& drugi); // oblicza iloczyn skalarny dwoch wektorow
};

#endif