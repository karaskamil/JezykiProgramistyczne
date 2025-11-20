package com.mycompany.lista0java;

import java.util.Scanner;

public class Lista0java{
    public static void main(String[] args){

        double g = 0;
        double d = 0;
        double z0 = 0;
        
        System.out.print( "Wybierz czy chcesz rzutowac punkty (1), czy obliczyc objetosc rownolegloscianu (2): ");
        
        Scanner s = new Scanner(System.in);
        char wybor = s.next().charAt(0);
        
        switch (wybor) {
            case '1' -> {
                System.out.println("Podaj ilosc punktow 3d ktore chcesz stworzyc: ");
                g = s.nextDouble();
                System.out.println("Podaj parametry rzutowania d: ");
                d = s.nextDouble();
                System.out.println("oraz z0: ");
                z0 = s.nextDouble();
                for (double i = 0; i < g; i++) {
                    double a = 0;
                    double b = 0;
                    double c = 0;
                    System.out.println( "\nPodaj kolejno wartosci x, y, z punktu: ");
                    a = s.nextDouble();
                    b = s.nextDouble();
                    c = s.nextDouble();
                    Punkt3D p = new Punkt3D(a, b, c);
                    p.rzut2D(d, z0);
                }
            }

            case '2' -> {
                Punkt3D p30 = new Punkt3D(0, 0, 0);
                Punkt3D p31 = new Punkt3D(2, 3, 4);
                Punkt3D p32 = new Punkt3D(10, 15, 16);
                Punkt3D p33 = new Punkt3D(9, 8, 7);

                Wektor3D w30 = new Wektor3D(p30.wezX() - p31.wezX(), p30.wezY() - p31.wezY(), p30.wezZ() - p31.wezZ());
                Wektor3D w31 = new Wektor3D(p30.wezX() - p32.wezX(), p30.wezY() - p32.wezY(), p30.wezZ() - p32.wezZ());
                Wektor3D w32 = new Wektor3D(p30.wezX() - p33.wezX(), p30.wezY() - p33.wezY(), p30.wezZ() - p33.wezZ());
                Wektor3D wiw = w30.iloczynWektorowy(w31);

                double V = wiw.iloczynSkalarny(w32);
                System.out.print("objetosc rownolegloboku wynosi " + V + " jednostek szesciennych");
            }
        }

        // CZESC TESCIOWA
        /*
        punkt2D p21 = punkt2D(2, -5);
        //p2.wyswietlX();
        //p2.wyswietlY();
        p21.wyswietl();

        wektor2D w21 = wektor2D(5, 5);
        wektor2D w22 = wektor2D(5, 0);
        wektor2D w23 = wektor2D(9, 7, 2, 2);

        System.out.print("Kat pomiedzy tymi wektorami wynosi " + w21.policzKat(w22) + " stopni");

        System.out.print("Dlugosc wektora przed dodaniem wynosi: " + w21.dlugosc());

        w21.dodajWektor(w23);
        
        System.out.print("A po dodaniu wynosi: " + w21.dlugosc());

        System.out.print( "---------Dotad sa wektory 2d----------" );

        wektor3D w31 = wektor3D(-3, -4, -5);
        wektor3D w32 = wektor3D(8, 8, 8, -5, 6, -1);

        punkt3D p31 = punkt3D(1, 1, 1);
        System.out.print(w31.wezX());

        p31.przesun(w31);

        p31.wyswietl();

        p31.rzut2D();

        Wektor3D w35 = Wektor3D(0, 9, 3);
        Wektor3D w36 = Wektor3D(6, 7, 8);
        System.out.print(w35.policzKat(w36));
        */

    }
}