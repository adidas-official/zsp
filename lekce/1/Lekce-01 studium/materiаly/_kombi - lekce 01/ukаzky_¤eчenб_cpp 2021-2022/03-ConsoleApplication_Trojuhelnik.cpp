// ConsoleApplication_Trojuhelnik.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
    double a, b, c;
    double o;
    int rovnostranny, rovnoramenny;

/*
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    */
    printf("Zadej strany trojuhelnika oddelene strednikem.\n");
    scanf("%lf;%lf;%lf", &a, &b, &c);

    if (a > 0.0 && b > 0.0 && c > 0.0)
    {
        o = a + b + c;
        rovnostranny = (a == b && b == c && c == a);
        rovnoramenny = a == b || b == c || c == a;

        printf("\n\na:%f, b:%f, c:%f\no:%f\n", a, b, c, o);
        printf("Rovnostranny:%d\n", rovnostranny);
        printf("Rovnoramenny:%d\n", rovnoramenny);
    }
    else
        printf("Chybne zadane strany trojuhelnika. Nektera ze stran trojuhelnika neni kladnym cislem.\n");
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
