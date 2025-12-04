/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.lista0java;

import static java.lang.Math.acos;

/**
 *
 * @author largo
 */
public class Punkt3D {
    
    double x1;
    double y1;
    double z1;
    
    Punkt3D() {
        x1 = 1;
        y1 = 1;
        z1 = 1;

    }

    Punkt3D(double a, double b, double c) {
        x1 = a;
        y1 = b;
        z1 = c;

    }

    double wezX()  {
        return x1;
    }

    double wezY()  {
        return y1;
    }

    double wezZ()  {
        return z1;
    }

    void wyswietl()  {
        System.out.print("Punkt3D znajduje sie na nastepujacych wspolrzednych: (" + x1 + "," + y1 + "," + z1 + ")");

    }

    Punkt3D przesun(Wektor3D wektor) { 
        double a = this.x1 + wektor.wezX();
        double b = this.y1 + wektor.wezY();
        double c = this.z1 + wektor.wezZ();
        return new Punkt3D(a, b, c);

    }

    Punkt2D rzut2D(double a, double b){
        double d = a;
        double z0 = b;
        
        if (z0-z1 != 0) {
            double x2 = ((z0 * x1) - (z1 * d)) / (z0 - z1);
            double y2 = (z0 * y1) / (z0 - z1); 
            System.out.print("Zrzutowano punkt 3d na wspolrzedne: (" + x2 + ", " + y2 + ")\n");
            return new Punkt2D(x2, y2);
        }
        else {
            throw new ArithmeticException("\nError: Podano niewlasciwe parametry, nie da sie dzielic przez 0");
        }

    }
}
