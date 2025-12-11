#pragma once
#include <iostream>
#include <unordered_set>

#include "punkt3D.h"

using namespace std;

class zbiorPunktow3D{
	private:
		unordered_set<punkt3D> s; // s od set

	public:
		zbiorPunktow3D(); // Konstruktor domyslny tworzacy pusty zbior

		void dodajPunkt(punkt3D p); // dodanie podanego punktu do zbioru

		void usunPunkt(const punkt3D& p); // usuniecie podanego punktu ze zbioru

		bool czyPunktJestWZbiorze(const punkt3D& p); // sprawdza czy punkt jest w zbiorze po hashu

		int mocZbioru() const; // zwraca ilosc elementow wewnatrz zbioru

		void wyswietl() const; // wyswietlanie wszystkich elementow zbioru

};

