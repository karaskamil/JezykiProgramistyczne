/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.mycompany.lista0java;

/**
 *
 * @author largo
 */
public class Punkt2D {
    
    double x1;
    double y1;
    
    Punkt2D() {
        x1 = 1;
        y1 = 1;
    }

    Punkt2D(double a, double b) {
        x1 = a;
        y1 = b;

    }

    double wezX() {
        return x1;
    }

    double wezY() {
        return y1;
    }

    void wyswietl() {
        System.out.print("Punkt2D znajduje sie na nastepujacych wspolrzednych: (" + x1 + "," + y1 + ")");
    }

}
