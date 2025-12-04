#include <iostream>
#include <list>
#include <algorithm>

#include "ciagPunktow3D.h"
#include "punkt3D.h"
#include <iterator>

using namespace std;

ciagPunktow3D::ciagPunktow3D(){
	list<punkt3D> l = {};
}

void ciagPunktow3D::dodajPunkt(const punkt3D p) {
	l.push_back(p);
}

void ciagPunktow3D::usunPunkt(const punkt3D p) {
    auto szukany = find(l.begin(), l.end(), p);

    if (szukany != l.end()) {
        l.erase(szukany);
    }
    else {
        cout << "Nie znaleziono punktu! ";
    }

}

bool ciagPunktow3D::czyPunktJestWCiagu(punkt3D p) {
    auto szukany = find(l.begin(), l.end(), p);
    return szukany != l.end();
}

punkt3D ciagPunktow3D::podajPunkt(int i) {
    if (i < 0 || i > l.size()) {
        throw out_of_range("Podano nieprawidlowy indeks! ");
    }
    auto it = l.begin();
    advance(it, i);
    return *it;
   
}

int ciagPunktow3D::dlugoscCiagu() {
    return l.size();
}

void ciagPunktow3D::wyswietl() const {
    cout << "[";
    for (const auto& p : l) {
            cout <<" (" << p.wezX() << ", " << p.wezY() << ", " << p.wezZ() << ")";
    }
    cout << " ]";
}

