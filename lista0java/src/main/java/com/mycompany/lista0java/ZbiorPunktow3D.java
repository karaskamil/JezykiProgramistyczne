package com.mycompany.lista0java;

import java.util.HashSet;
import java.util.Set;

public class ZbiorPunktow3D {

    private Set<Punkt3D> zbior;

    public ZbiorPunktow3D() {
        zbior = new HashSet<>();
    }

    public void dodajPunkt(Punkt3D p) {
        zbior.add(p);
    }

    public void usunPunkt(Punkt3D p) {
        if (!zbior.remove(p)) {
            System.out.println("Nie znaleziono punktu!");
        }
    }

    public boolean czyPunktJestWZbiorze(Punkt3D p) {
        return zbior.contains(p);
    }

    public int mocZbioru() {
        return zbior.size();
    }

    public void wyswietl() {
        System.out.print("[ ");
        for (Punkt3D p : zbior) {
            System.out.print(p + " ");
        }
        System.out.println("]");
    }
}