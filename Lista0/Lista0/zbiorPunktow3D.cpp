#include <iostream>
#include <algorithm>
#include <iterator>
#include <unordered_set>

#include "zbiorPunktow3D.h"
#include "punkt3D.h"

using namespace std;

zbiorPunktow3D::zbiorPunktow3D() {
	unordered_set<punkt3D> s = {};
}

void zbiorPunktow3D::dodajPunkt(punkt3D p) {
	s.insert(p);
}


void zbiorPunktow3D::usunPunkt(const punkt3D& p) {
    if (s.erase(p) == 0) {
        cout << "Nie znaleziono punktu!";
    }
    else {
        s.erase(p);
    }
}

bool zbiorPunktow3D::czyPunktJestWZbiorze(const punkt3D& p) {
    return s.find(p) != s.end();
}

int zbiorPunktow3D::mocZbioru() const {
    return s.size();
}

void zbiorPunktow3D::wyswietl() const {
    cout << "[ ";
    for (const auto& p : s) {
        cout << p;
    }
    cout << "]" << endl;
}