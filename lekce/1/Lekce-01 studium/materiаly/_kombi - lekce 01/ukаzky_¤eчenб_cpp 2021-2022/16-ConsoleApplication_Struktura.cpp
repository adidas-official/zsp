// ConsoleApplication_Struktura.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>

typedef struct {
    int d;
    int m;
    int r;
} DATUM;

int main()
{
    DATUM dt1; //int d, m, r;
    DATUM dt2; //int d2, m2, r2;

    dt1.d = 24;
    dt1.m = 10;
    dt1.r = 2020;

    //scanf("%d", &dt1.d);

    printf("%d.%d.%d\n", dt1.d, dt1.m, dt1.r); //printf("%d.%d.%d\n", d, m, r);
    printf("%d.%d.%d\n", dt2.d, dt2.m, dt2.r); //printf("%d.%d.%d\n", d2, m2, r2);

    DATUM pole_datumu[10];

    // ...
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
