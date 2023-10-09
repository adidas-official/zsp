/*
* Nazev programu: Kinematika
*
* Autor: Darius Xerxes
*
* Datum: 26.11.2021
*  Tento program je pro vypocet rovnomerne zrychleneho pohybu. 
* Ve funkci intro se nastaví vstupni hodnoty, pokud jsou hodnoty zaporne program skonci. 
* Dale se ve funcki vola funkce kinematika, ktera zajistuje veskere vypocty a pote jejich vypsani, 
* vypisuje i typ pohybu. Funkce kinematika take vypisuje prehledovou tabulku.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h> //vstupy vystupy
#include <math.h>  //matematicke funkce
#include "task1.h"

// -- globální promìnné
char nazev_ukolu[255];
int uvod = 1;
// vstupní hodnoty
const double s0 = 0.0; // poèáteèní dráha
double v0;  // poèáteèní rychlost
double v1;  // rychlost v èase t0
double t0;  // poèáteèní èas
double t;   // koneèný èas
// vystupní hodnoty
double a;   // zrychlení
double s;   // dráha ujetá v èase <t>
double v;   // rychlost v èase <t>
double pomer;   // pomìr rychlostí v1 a v0
int typPohybu;  // identifikator typu pohybu {1 - zrychlený pohyb; 2 - konstantní pohyb; 3 - zpomalený pohyb}
int checkpoint;

void note()
// funkce zobrazí informace o autorovi a o realizaci úkolu
{//todo(1)
    if (uvod == 1) {
        uvod = 0;
        printf("Kinematika - program pro vypocet rovnomerne zrychleneho pohybu.\n\n");
        printf("jmeno: Zdenìk Frydrýn\n");    // todo: zobrazit jméno a pøíjmení autora
        printf("login: frydryn\n");    // todo: zobrazit login autora
        printf("datum plneni ukolu: 09.10.2023\n");   // todo: zobrazit datum realizace úkolu ve tvaru napø. 17.10.2022

        snprintf(nazev_ukolu, sizeof(nazev_ukolu), "nazev ukolu: ZSP - Domaci ukol c. 2 - \"Kinematika\"");
        // todo: do promìnné zapsat text s názvem úkolu (bez tìch špièatých závorek): <nazev ukolu: ZSP - Domaci ukol c. 2 - "Kinematika"> a zajistit dvakrát odøádkování
        printf("%s\n\n", nazev_ukolu);
    }
}

int kinematika(double v0, double v1, double t0, double t);
void kinematika_vypocet();

int intro(float v0_p, float v1_p, float t0_p, float t_p)
// funkce, ktera nahrazuje naètení hodnot z klávesnice uživatele,
// kontroluje se zde, zda jsou èísla záporná, pokud ano, pak funkce skonèí, 
// pokud ne, pak se zavolá funkce kinematika a výpis, zda probìhl program
// návratová hodnota indikuje úspìch provedení operace nebo typ chyby
{
    v0 = v0_p;
    v1 = v1_p;
    t0 = t0_p;
    t = t_p;

    // ------
    // 
    //todo(2): Podminky na zapornost vstupnich hodnot. 
    //      Kontrolovat smysluplnost vstupních hodnot v0, v1, t0, t a to kontrolovat v uvedeném poøadí. Hodnoty nesmí být záporné. 
    //      Funkce intro vrátí hodnotu 0, pokud jsou hodnoty v poøádku. A zavolá funkci kinematika pro realizaci výpoètu.
    //      Vrátí hodnotu -1 : špatnì je v0; -2 : špatnì je v1; -3 : špatnì je t0; -4 : špatnì je t. V pøípadì zjištìné chyby navíc zobrazí informaci
    //      <Vstupni hodnoty nejsou platne.Hodnoty nesmi byt zapornymi cisly.> a na další øádek <Uspesne neprovedeno.>.

    char er[255] = "Vstupni hodnoty nejsou platne.Hodnoty nesmi byt zapornymi cisly.\nUspesne neprovedeno\n";

    if (v0 < 0) {
        printf("%s", er);
        return -1;
    }
    else if (v1 < 0) {
        printf("%s", er);
        return -2;
    } else if (t0 < 0) {
        printf("%s", er);
        return -3;
    }
    else if (t < 0) {
        printf("%s", er);
        return -4;
    }

    kinematika_vypocet(); 

    return 0;
}

void kinematika_vypocet()
// funkce dopoèítá na základì vstupních hodnot všechny výstupní hodnoty
{//todo(3):
    // realizace výpoètu výstupních hodnot dle vzorcù a logického vyhodnocení
    // v0, v1, t0, t
    // 15,  2,  3, 4

    a = (v1 - v0) / t0; // -1
    v = v0 + (a * t);
    s = s0 + (v0 * t) + (0.5 * a * t*t);

    pomer = v1 / v0;

    if (a < 0) {
        typPohybu = 1;
    }
    else if (a == 0)
    {
        typPohybu = 2;
    }
    else 
    {
        typPohybu = 3;
    }
    
}


void kinematika_vypisPohybu() 
// funkce pro vypis informace o pohybu
// zobrazí textový popis pohybu zjištìného typu pohybu: 
//  <Pohyb je rovnomerne zpomaleny>; <Pohyb je konstantni>; <Pohyb je rovnomerne zrychleny> a zajistí jedno odøádkování
{
    //todo(4):
    if (typPohybu == 1) {
        printf("Pohyb je rovnomerne zpomaleny");
    } else if (typPohybu == 2)
    {
        printf("Pohyb je konstantni");
    }else{
        printf("Pohyb je rovnomerne zrychleny");
    }
    printf("\n");
    
    ;
}

void kinematika_vypisTabulky()
// funkce vypíše výsledky a pøehledovou tabulku dle vzoru uvedeném v zadání
{    
    printf("Tabulka vysledku\n");
    //todo(5):
    printf("a = %.2fkm/h^2, v0 = %.2fkm/h, v1 = %.2fkm/h\n", a, v0, v1);
    printf("v(t = %.2fh) = %.2fkm/h\n", t, v);
    printf("s(t = %.2fh) = %.2fkm\n", t, s);
    printf("pomer v = %.2f%%\n", pomer * 100);
    printf("Prehledova tabulka\n");
    printf("\tv0\t%.2fkm/h\n", v0);
    printf("\tv1\t%.2fkm/h\n", v1);
    printf("\tt0\t%.2fh\n", t0);
    printf("\tt\t%.2fh\n", t);
    printf("\ta\t%.2fkm/h\n", a);
    printf("\tv\t%.2fkm/h\n", v);
    printf("\ts\t%.2fkm/h\n", s);
    printf("\tpomer v\t%.2fkm/h\n", pomer * 100);

    return;
}



int kinematika(double v0, double v1, double t0, double t)  // funkce kinematika
{
    note();
    checkpoint = intro(v0, v1, t0, t);

    //todo(5):
    // zajistit realizaci výpoètu a zobrazení výsledkù podmínit validitou vstupních dat. 

    if (checkpoint != 0) {
        return 0;
    }

    kinematika_vypisPohybu();
    kinematika_vypisTabulky();
    return 1;
}

// int main() {
//     kinematika(85, 125, 0.5, 2.5);
// }

