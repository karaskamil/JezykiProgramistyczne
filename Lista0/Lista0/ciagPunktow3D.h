#ifndef ciagPunktow3D_h
#define ciagPunktow3D_h
#pragma once

#include <iostream>
#include "punkt3D.h"
#include <list>
using namespace std;

class ciagPunktow3D{
	private:
		list<punkt3D> l;

	public:
		ciagPunktow3D(); //Konstruktor domyslny

		void dodajPunkt(const punkt3D p); // Dodawanie punktu na koniec ciagu
		
		void usunPunkt(const punkt3D p); // Usuwanie punktu 
		
		bool czyPunktJestWCiagu(punkt3D p); // Sprawdza czy podany punkt jest w ciagu i zwraca wartosc boolean

		punkt3D podajPunkt(int i); // zwraca punkt o podanym indeksie

		int dlugoscCiagu(); // zwraca dlugosc ciagu, czego nie rozumiesz przeciez prosciej sie nie da
		
		void wyswietl() const; // wypisuje wszystkie elementy ciagu


};

#endif