#ifndef wektor2D_h
#define wektor2D_h

#include <iostream>
#include <math.h>

using namespace std;

class wektor2D {
private:
    
    int x0; // poczatkowa szerokosc wektora, ktora bazowo zaczyna sie w punkcie 0 

    int y0; // poczatkowa wysokosc wektora, ktora bazowo zaczyna sie w punkcie 0
    
    int x1; // koncowa szerokosc wektora

    int y1; // koncowa wysokosc wektora

public:
    wektor2D(); // Konstruktor domyslny

    wektor2D(int a, int b); // Konstruktor tworzacy wektor na plaszczyznie dwuwymiarowej z bazowym punktem startowym na pozycji (0,0)

    wektor2D(int a, int b, int c, int d); // Konstruktor tworzacy wektor na plaszczyznie dwuwymiarowej z podanymi punktami startowymi i koncowymi przez uzytkownika

    void wyswietl() const; // funkcja wypisujaca wspolzedne poczatkowe i koncowe wektora
    
    double dlugosc() const; // funkcja obliczajaca dlugosc wektora z uwzglednieniem przypadku gdy poczatek wektora nie jest w (0,0)

    double policzKat(const wektor2D& drugi); // funkcja obliczajaca kat pomiedzy dwoma wektorami 

    void dodajWektor(const wektor2D& drugi); // funkcja dodajaca jeden wektor do drugiego

    void odejmijWektor(const wektor2D& drugi); // funkcja odejmujaca jeden wektor od drugiego

};

#endif
