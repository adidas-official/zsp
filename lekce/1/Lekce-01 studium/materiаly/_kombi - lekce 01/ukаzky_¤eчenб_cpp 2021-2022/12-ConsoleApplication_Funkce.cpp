// ConsoleApplication_Funkce.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

double abs(double cislo)
{
    double cislo_abs;

    /*
    if (cislo >= 0.0)
        cislo_abs = cislo;
    else
        cislo_abs = cislo * -1.0;
        */
    cislo_abs = cislo;

    if (cislo_abs < 0.0)
        cislo_abs = cislo_abs * -1.0;

    return cislo_abs;
}

// ---

double max(double a, double b)
{
    double cislo_max;
    if (a > b)
        cislo_max = a;
    else
        cislo_max = b;
    return cislo_max;
}

double max3(double a, double b, double c)
{
    double cislo_max;

    if (a > b)
        if (a > c)
            cislo_max = a;
        else
            cislo_max = c;
    else
        if (b > c)
            cislo_max = b;
        else
            cislo_max = c;

    return cislo_max;
}

void tisk_max(double a, double b)
{
    double cislo_max;

    /*
    if (a > b)
        cislo_max = a;
    else
        cislo_max = b;
        */
    cislo_max = max(a, b);

    printf("Maximum z %f a %f je %f\n", a, b, cislo_max);
}

// ---

int zaokr(double cislo)
{
    int cc;
    double dc;

    cc = (int)cislo;  // double -> int
    dc = cislo - cc;

    if (dc >= 0.5)
        cc++;

    return cc;
}


void tisk_zaokr(double cislo)
{
    /*
    int cc;
    double dc;

    cc = (int) cislo;  // double -> int
    dc = cislo - cc;

    if (dc >= 0.5)
        cc++;

    printf("%f -> %d\n", cislo, cc);
        */

    int cislo_zaokr = zaokr(cislo);
    printf("%f -> %d\n", cislo, cislo_zaokr);
}



// ---

int main()
{
    double cislo, cislo_abs;
    
    scanf("%lf", &cislo);
    cislo_abs = abs(cislo);

    printf("%f -> %f\n", cislo, cislo_abs);
}

// Spuštění programu: Ctrl+F5 nebo nabídka Ladit > Spustit bez ladění
// Ladění programu: F5 nebo nabídka Ladit > Spustit ladění

// Tipy pro zahájení práce:
//   1. K přidání nebo správě souborů použijte okno Průzkumník řešení.
//   2. Pro připojení ke správě zdrojového kódu použijte okno Team Explorer.
//   3. K zobrazení výstupu sestavení a dalších zpráv použijte okno Výstup.
//   4. K zobrazení chyb použijte okno Seznam chyb.
//   5. Pokud chcete vytvořit nové soubory kódu, přejděte na Projekt > Přidat novou položku. Pokud chcete přidat do projektu existující soubory kódu, přejděte na Projekt > Přidat existující položku.
//   6. Pokud budete chtít v budoucnu znovu otevřít tento projekt, přejděte na Soubor > Otevřít > Projekt a vyberte příslušný soubor .sln.
