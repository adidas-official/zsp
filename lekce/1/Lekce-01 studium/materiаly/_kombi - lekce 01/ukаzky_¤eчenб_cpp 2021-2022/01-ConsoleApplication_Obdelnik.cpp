// ConsoleApplication_Obdelnik.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
    /*
    float a;
    float b;
    float o;
    float s;

    float a;
    float b;
    float o, s;
    */

    // deklarace promennych
    float a, b, o, s;

    printf("Vypocet obvodu a obsahu obdelnika ze zadanych stran.\n\n\n");

    printf("Zadej stranu a: ");
    scanf("%f", &a); //a = 5.25
    printf("Zadej stranu b: ");
    scanf("%f", &b); //b = 4.84;

    o = 2 * (a + b); // o=2*(a+b)
    s = a * b;

    printf("Strany obdelnika a = %.1f, b = %.1f\n", a, b);
    printf("Obvod = %.1f\n", o);
    printf("Obsah = %.1f\n", s);

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
