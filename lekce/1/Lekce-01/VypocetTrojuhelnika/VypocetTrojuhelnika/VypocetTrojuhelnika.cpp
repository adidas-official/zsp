// VypocetTrojuhelnika.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include "ModulTrojuhelnik.h"




void vypocet_trojuhelnik()
{
    double a, b, c;
    double obvod;
    double obsah;
    int jeRovnostranny, jeRovnoramenny;

    printf("Strany trojuhelnika\n");
    printf("Zadej stranu a = ");
    scanf("%lf", &a);
    printf("Zadej stranu b = ");
    scanf("%lf", &b);
    printf("Zadej stranu c = ");//komentar
    scanf("%lf", &c);

    obvod = obvod_trojuhelnika(a, b, c);
    obsah = obsah_trojuhelnika(a, b, c);
    jeRovnostranny = test_rovnostranny_trojuhelnik(a, b, c);
    jeRovnoramenny = test_rovnoramenny_trojuhelnik(a, b, c);

    printf("a = %.2f;b = %.2f;c = %.2f\n", a, b, c);
    printf("obvod = %.2f\n", obvod);    
    printf("obsah = %f\n", obsah);
    printf("rovnostranny = %s\n", (jeRovnostranny == 0) ? "Ne" : "Ano"); // ternarni operator
    printf("rovnoramenny = %s\n", (jeRovnoramenny == 0) ? "Ne" : "Ano");
}

int main()
{
    vypocet_trojuhelnik();
    vypocet_trojuhelnik();
}

/*
viceradkovy komentar
*/


// Spuštění programu: Ctrl+F5 nebo nabídka Ladit > Spustit bez ladění
// Ladění programu: F5 nebo nabídka Ladit > Spustit ladění

// Tipy pro zahájení práce:
//   1. K přidání nebo správě souborů použijte okno Průzkumník řešení.
//   2. Pro připojení ke správě zdrojového kódu použijte okno Team Explorer.
//   3. K zobrazení výstupu sestavení a dalších zpráv použijte okno Výstup.
//   4. K zobrazení chyb použijte okno Seznam chyb.
//   5. Pokud chcete vytvořit nové soubory kódu, přejděte na Projekt > Přidat novou položku. Pokud chcete přidat do projektu existující soubory kódu, přejděte na Projekt > Přidat existující položku.
//   6. Pokud budete chtít v budoucnu znovu otevřít tento projekt, přejděte na Soubor > Otevřít > Projekt a vyberte příslušný soubor .sln.
