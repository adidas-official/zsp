// ZSP Ukazka 2.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

void ukazka1()
{
    //int a;
    //int b;
    int a, b;
    int obvod, obsah;

    printf("Zadej stranu a : ");
    scanf("%d", &a);
    printf("Zadej stranu b : ");
    scanf("%d", &b);

    obvod = 2 * (a + b);
    obsah = a * b;

    printf("a = %d, b = %d\n", a, b);
    printf("o = %d, S = %d\n", obvod, obsah);
}

void ukazka2()
{
    //int a;
    //int b;
    float a, b;
    float obvod, obsah;

    printf("Zadej stranu a : ");
    scanf("%f", &a);
    printf("Zadej stranu b : ");
    scanf("%f", &b);

    obvod = 2 * (a + b);
    obsah = a * b;

    printf("a = %f, b = %f\n", a, b);
    printf("o = %.2f, S = %.2f\n", obvod, obsah);
}

void ukazka3()
{
    //int a;
    //int b;
    float a, b;
    float obvod, obsah;

    printf("Zadej stranu a : ");
    scanf("%f", &a);
    printf("Zadej stranu b : ");
    scanf("%f", &b);

    if (a > 0.0 && b > 0.0) // && - logicky soucin
    {
        obvod = 2 * (a + b);
        obsah = a * b;

        printf("a = %f, b = %f\n", a, b);
        printf("o = %.2f, S = %.2f\n", obvod, obsah);
    }
    else
        printf("Chybne zadane strany obdelnika.\n");

}

int main()
{
    ukazka3();

    system("PAUSE");

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
