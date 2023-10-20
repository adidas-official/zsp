// ZSP Ukazka 3.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
    const float PI = 3.14;
    const float PI_DVA = 2 * PI;
    float r, obvod, obsah;

    //PI = 6.28;

    printf("Zadej polomer kruznice r = ");
    scanf("%f", &r);

    if (r > 0.0)
    {
        obvod = PI_DVA * r;
        obsah = PI * (r * r);

        printf("obvod %.2f\nobsah %.2f\n\n", obvod, obsah);
    }
    else
        printf("Chybne zadana strana kruznice.\n");
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
