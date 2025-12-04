/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.lista0java;

import static java.lang.Math.abs;
import static java.lang.Math.acos;
import static java.lang.Math.sqrt;

/**
 *
 * @author largo
 */
public class Wektor3D {
    double x1;
    double y1;
    double z1;
    
    Wektor3D() {
    x1 = 1;
    y1 = 1;
    z1 = 1;

    }

    Wektor3D(double a, double b, double c) {
        x1 = a;
        y1 = b;
        z1 = c;

    }

    Wektor3D(double a, double b, double c, double d, double e, double f) {
        x1 = d-a;
        y1 = e-b;
        z1 = f-c;

    }

    double wezX() {
        return x1;
    }

    double wezY() {
        return y1;
    }

    double wezZ() {
        return z1;
    }

    double dlugosc() {
        return sqrt(x1 * x1 + y1 * y1 + z1 * z1);
    }

    double policzKat(Wektor3D drugi) {
        double iloczyn = iloczynSkalarny(drugi);
        double dl1 = this.dlugosc();
        double dl2 = drugi.dlugosc();

        if (dl1 != 0 && dl2 != 0) {
            double Kat = iloczyn / (dl1 * dl2);
            return acos(Kat) * 180 / 3.14;
        }
        else {
            throw new ArithmeticException("\nJedna z dlugosci wektorow wynosi 0, nie da sie podzielic");
        }

    }

    void dodajWektor(Wektor3D drugi){
        this.x1 += drugi.x1;
        this.y1 += drugi.y1;
        this.z1 += drugi.z1;
    }

    void odejmijWektor(Wektor3D drugi){ 
        this.x1 -= drugi.wezX();
        this.y1 -= drugi.wezY();
        this.z1 -= drugi.wezZ();
    }

    Wektor3D iloczynWektorowy(Wektor3D drugi){
        double x = this.y1 * drugi.wezZ() - this.z1 * drugi.wezY();
        double y = this.z1 * drugi.wezX() - this.x1 * drugi.wezZ();
        double z = this.x1 * drugi.wezY() - this.y1 * drugi.wezX();

        return new Wektor3D(x, y, z);
    }

    double iloczynSkalarny(Wektor3D drugi){
        return abs(this.x1*drugi.wezX() + this.y1 * drugi.wezY() + this.z1 * drugi.wezZ());
    }

}
