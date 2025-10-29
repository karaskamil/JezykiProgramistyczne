#ifndef wektor3D_h
#define wektor3D_h

#include <iostream>
#include <math.h>

using namespace std;

class wektor3D {
private:

    int x0; // poczatkowa szerokosc wektora, ktora domyslnie zaczyna sie w punkcie 0 

    int y0; // poczatkowa wysokosc wektora, ktora domyslnie zaczyna sie w punkcie 0

    int z0; // poczatkowa glebokosc wektora, ktora domyslnie zaczyna sie w punkcie 0

    int x1; // koncowa szerokosc wektora

    int y1; // koncowa wysokosc wektora

    int z1; // koncowa glebokosc wektora


public:
    wektor3D(); // Konstruktor domyslny

    wektor3D(int a, int b, int c); // Konstruktor tworzacy wektor na plaszczyznie trojwymiarowej z bazowym punktem startowym na pozycji (0,0)

    wektor3D(int a, int b, int c, int d, int e, int f); // Konstruktor tworzacy wektor na plaszczyznie trojwymiarowej z podanymi punktami startowymi i koncowymi przez uzytkownika

    int wezX() const; // zwraca wartosc x1 wektora 3D

    int wezY() const; // zwraca wartosc y1 wektora 3D

    int wezZ() const; // zwraca wartosc z1 wektora 3D

    int wezX0() const; // zwraca wartosc x0 wektora 3D

    int wezY0() const; // zwraca wartosc y0 wektora 3D

    int wezZ0() const; // zwraca wartosc z0 wektora 3D

    double policzKat(const wektor3D& drugi); // liczy kat pomiedzy dwoma wektorami 3D

    void dodajWektor(const wektor3D& drugi); // dodaje jeden wektor do drugiego 

    void odejmijWektor(const wektor3D& drugi); // odejmuje jeden wektor od drugiego

    double dlugosc() const; // no jest napisane czego nie rozumisz

    wektor3D iloczynWektorowy(const wektor3D& drugi) const; //oblicza iloczyn wektorowy dwoch wektorow

    int iloczynSkalarny(const wektor3D& drugi); // oblicza iloczyn skalarny dwoch wektorow
};

#endif
