package com.mycompany.lista0java;

import java.util.ArrayList;
import java.util.List;

public class CiagPunktow3D {

    private List<Punkt3D> lista;

    public CiagPunktow3D() {
        lista = new ArrayList<>();
    }

    public void dodajPunkt(Punkt3D p) {
        lista.add(p);
    }

    public void usunPunkt(Punkt3D p) {
        if (!lista.remove(p)) {
            System.out.println("Nie znaleziono punktu!");
        }
    }

    public boolean czyPunktJestWCiagu(Punkt3D p) {
        return lista.contains(p);
    }

    public Punkt3D podajPunkt(int i) {
        if (i < 0 || i >= lista.size()) {
            throw new IndexOutOfBoundsException("Podano nieprawidlowy indeks!");
        }
        return lista.get(i);
    }

    public int dlugoscCiagu() {
        return lista.size();
    }

    public void wyswietl() {
        System.out.print("[ ");
        for (Punkt3D p : lista) {
            System.out.print(p + " ");
        }
        System.out.println("]");
    }
}