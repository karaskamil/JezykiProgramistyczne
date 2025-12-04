#pragma once
#include <iostream>
#include <set>

#include "punkt3D.h"

using namespace std;

class zbiorPunktow3D{
	private:
		set<punkt3D> s;

	public:
		zbiorPunktow3D(); // Konstruktor domyslny tworzacy pusty zbior
		void dodajPunkt(punkt3D p); // dodanie podanego punktu do zbioru

};

