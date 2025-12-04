#ifndef wektor2D_h
#define wektor2D_h

#include <iostream>
#include <math.h>

using namespace std;

class wektor2D {
private:

    double x1; // szerokosc wektora

    double y1; // wysokosc wektora

public:
    wektor2D(); // Konstruktor domyslny

    wektor2D(double a, double b); // Konstruktor tworzacy wektor na plaszczyznie dwuwymiarowej z bazowym punktem startowym na pozycji (0,0)

    wektor2D(double a, double b, double c, double d); // Konstruktor tworzacy wektor na plaszczyznie dwuwymiarowej z podanymi punktami startowymi i koncowymi przez uzytkownika

    double wezX() const; // zwraca wartosc x1 wektora 2D

    double wezY() const; // zwraca wartosc y1 wektora 2D

    void wyswietl() const; // funkcja wypisujaca wspolrzedne wektora na ekran
    
    double dlugosc() const; // funkcja obliczajaca dlugosc wektora 

    double policzKat(const wektor2D& drugi); // funkcja obliczajaca kat pomiedzy dwoma wektorami 

    void dodajWektor(const wektor2D& drugi); // funkcja dodajaca jeden wektor do drugiego

    void odejmijWektor(const wektor2D& drugi); // funkcja odejmujaca jeden wektor od drugiego

    double iloczynSkalarny(const wektor2D& drugi); // oblicza iloczyn skalarny dwoch wektorow

};

#endif
