/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.lista0java;

import static java.lang.Math.abs;
import static java.lang.Math.sqrt;
import static java.lang.Math.acos;

/**
 *
 * @author largo
 */
public class Wektor2D {
    double x1;
    double y1;
    
    Wektor2D() {
        x1 = 1;
        y1 = 1;
        
    }

    Wektor2D(double a, double b) {
        x1 = a;
        y1 = b;

    }

    Wektor2D(double a, double b, double c, double d) {
        x1 = c-a;
        y1 = d-b;
        
    }

    void wyswietl() {
        System.out.print("Wektor2D ma dlugosc: (" + x1 + ", " + y1 + ")");

    }

    double dlugosc() {
        return sqrt(x1 * x1 + y1 * y1);
    }

    double policzKat(Wektor2D drugi) {
        double iloczyn = abs(this.x1 * drugi.x1) + abs(this.y1 * drugi.y1);
        double dl1 = this.dlugosc();
        double dl2 = drugi.dlugosc();
        
        if (dl1 != 0 && dl2 != 0) {
            double Kat = iloczyn / (dl1 * dl2);
            return acos(Kat) * 180 / 3.14;
        }
        else {
            throw new ArithmeticException("Jedna z dlugosci wektorow wynosi 0, nie da sie podzielic");
        }
    }

    void dodajWektor(Wektor2D drugi) {
        this.x1 += drugi.x1;
        this.y1 += drugi.y1;

    }

    void odejmijWektor(Wektor2D drugi) {
        this.x1 -= drugi.x1;
        this.y1 -= drugi.y1;

    }
}
