﻿// Lista0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// czyjes
#include <iostream>
#include <string>
#include <vector>
// moje 
#include "punkt2D.h"
#include "wektor2D.h"
#include "punkt3D.h"
#include "wektor3D.h"

using namespace std;

int main(){
    int wybor;
    int g = 0;
    int d = 0;
    int z0 = 0;
    cout << "Wybierz czy chcesz rzutowac punkty (1), czy obliczyc objetosc rownolegloscianu (2): ";
    cin >> wybor;
    switch (wybor) {
    case 1:
        cout << "Podaj ilosc punktow 3d ktore chcesz stworzyc: " << endl;
        cin >> g;
        cout << endl;
        cout << "Podaj parametry rzutowania d: ";
        cin >> d;
        cout << "oraz z0: ";
        cin >> z0;
        for (int i = 0; i < g; i++) {
            int a = 0;
            int b = 0;
            int c = 0;
            cout << "Podaj kolejno wartosci x,y,z punktu: " << endl;
            cin >> a;
            cin >> b;
            cin >> c;
            punkt3D p = punkt3D(a, b, c);
            p.rzut2D(d, z0);
        };
        break;

    case 2:
        punkt3D p30 = punkt3D(0, 0, 0);
        punkt3D p31 = punkt3D(2, 3, 4);
        punkt3D p32 = punkt3D(10, 15, 16);
        punkt3D p33 = punkt3D(9, 8, 7);

        wektor3D w30 = wektor3D(p30.wezX() - p31.wezX(), p30.wezY() - p31.wezY(), p30.wezZ() - p31.wezZ());
        wektor3D w31 = wektor3D(p30.wezX() - p32.wezX(), p30.wezY() - p32.wezY(), p30.wezZ() - p32.wezZ());
        wektor3D w32 = wektor3D(p30.wezX() - p33.wezX(), p30.wezY() - p33.wezY(), p30.wezZ() - p33.wezZ());
        wektor3D wiw = w30.iloczynWektorowy(w31);

        double V = wiw.iloczynSkalarny(w32);
        cout << "objetosc rownolegloboku wynosi " << V << " jednostek szesciennych";
        break;
    }

    // CZESC TESTOWA
    /* 
    punkt2D p21 = punkt2D(2, -5);
    //p2.wyswietlX();
    //p2.wyswietlY();
    p21.wyswietl();

    wektor2D w21 = wektor2D(5, 5);
    wektor2D w22 = wektor2D(5, 0);
    wektor2D w23 = wektor2D(9, 7, 2, 2);

    cout << endl;

    cout << "Kat pomiedzy tymi wektorami wynosi " << w21.policzKat(w22) << " stopni" << endl;

    cout << "Dlugosc wektora przed dodaniem wynosi: " << w21.dlugosc() << endl;

    w21.dodajWektor(w23);

    cout << "A po dodaniu wynosi: " << w21.dlugosc();

    cout << endl << "---------Dotad sa wektory 2d----------" << endl;

    wektor3D w31 = wektor3D(-3, -4, -5);
    wektor3D w32 = wektor3D(8, 8, 8, -5, 6, -1);

    punkt3D p31 = punkt3D(1, 1, 1);
    cout << w31.wezX() << endl;
    
    p31.przesun(w31);

    p31.wyswietl();

    cout << endl;

    p31.rzut2D();
    */
}
