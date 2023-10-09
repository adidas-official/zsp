/*
* Nazev programu: Kinematika
*
* Autor: Darius Xerxes
*
* Datum: 26.11.2021
*  Tento program je pro vypocet rovnomerne zrychleneho pohybu. 
* Ve funkci intro se nastav� vstupni hodnoty, pokud jsou hodnoty zaporne program skonci. 
* Dale se ve funcki vola funkce kinematika, ktera zajistuje veskere vypocty a pote jejich vypsani, 
* vypisuje i typ pohybu. Funkce kinematika take vypisuje prehledovou tabulku.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h> //vstupy vystupy
#include <math.h>  //matematicke funkce
#include "task1.h"

// -- glob�ln� prom�nn�
char nazev_ukolu[255];
int uvod = 1;
// vstupn� hodnoty
const double s0 = 0.0; // po��te�n� dr�ha
double v0;  // po��te�n� rychlost
double v1;  // rychlost v �ase t0
double t0;  // po��te�n� �as
double t;   // kone�n� �as
// vystupn� hodnoty
double a;   // zrychlen�
double s;   // dr�ha ujet� v �ase <t>
double v;   // rychlost v �ase <t>
double pomer;   // pom�r rychlost� v1 a v0
int typPohybu;  // identifikator typu pohybu {1 - zrychlen� pohyb; 2 - konstantn� pohyb; 3 - zpomalen� pohyb}
int checkpoint;

void note()
// funkce zobraz� informace o autorovi a o realizaci �kolu
{//todo(1)
    if (uvod == 1) {
        uvod = 0;
        printf("Kinematika - program pro vypocet rovnomerne zrychleneho pohybu.\n\n");
        printf("jmeno: Zden�k Frydr�n\n");    // todo: zobrazit jm�no a p��jmen� autora
        printf("login: frydryn\n");    // todo: zobrazit login autora
        printf("datum plneni ukolu: 09.10.2023\n");   // todo: zobrazit datum realizace �kolu ve tvaru nap�. 17.10.2022

        snprintf(nazev_ukolu, sizeof(nazev_ukolu), "nazev ukolu: ZSP - Domaci ukol c. 2 - \"Kinematika\"");
        // todo: do prom�nn� zapsat text s n�zvem �kolu (bez t�ch �pi�at�ch z�vorek): <nazev ukolu: ZSP - Domaci ukol c. 2 - "Kinematika"> a zajistit dvakr�t od��dkov�n�
        printf("%s\n\n", nazev_ukolu);
    }
}

int kinematika(double v0, double v1, double t0, double t);
void kinematika_vypocet();

int intro(float v0_p, float v1_p, float t0_p, float t_p)
// funkce, ktera nahrazuje na�ten� hodnot z kl�vesnice u�ivatele,
// kontroluje se zde, zda jsou ��sla z�porn�, pokud ano, pak funkce skon��, 
// pokud ne, pak se zavol� funkce kinematika a v�pis, zda prob�hl program
// n�vratov� hodnota indikuje �sp�ch proveden� operace nebo typ chyby
{
    v0 = v0_p;
    v1 = v1_p;
    t0 = t0_p;
    t = t_p;

    // ------
    // 
    //todo(2): Podminky na zapornost vstupnich hodnot. 
    //      Kontrolovat smysluplnost vstupn�ch hodnot v0, v1, t0, t a to kontrolovat v uveden�m po�ad�. Hodnoty nesm� b�t z�porn�. 
    //      Funkce intro vr�t� hodnotu 0, pokud jsou hodnoty v po��dku. A zavol� funkci kinematika pro realizaci v�po�tu.
    //      Vr�t� hodnotu -1 : �patn� je v0; -2 : �patn� je v1; -3 : �patn� je t0; -4 : �patn� je t. V p��pad� zji�t�n� chyby nav�c zobraz� informaci
    //      <Vstupni hodnoty nejsou platne.Hodnoty nesmi byt zapornymi cisly.> a na dal�� ��dek <Uspesne neprovedeno.>.

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
// funkce dopo��t� na z�klad� vstupn�ch hodnot v�echny v�stupn� hodnoty
{//todo(3):
    // realizace v�po�tu v�stupn�ch hodnot dle vzorc� a logick�ho vyhodnocen�
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
// zobraz� textov� popis pohybu zji�t�n�ho typu pohybu: 
//  <Pohyb je rovnomerne zpomaleny>; <Pohyb je konstantni>; <Pohyb je rovnomerne zrychleny> a zajist� jedno od��dkov�n�
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
// funkce vyp�e v�sledky a p�ehledovou tabulku dle vzoru uveden�m v zad�n�
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
    // zajistit realizaci v�po�tu a zobrazen� v�sledk� podm�nit validitou vstupn�ch dat. 

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

