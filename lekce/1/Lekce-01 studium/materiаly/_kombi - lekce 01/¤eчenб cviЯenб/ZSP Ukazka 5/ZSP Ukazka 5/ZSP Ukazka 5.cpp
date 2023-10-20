// ZSP Ukazka 5.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

void spocti_trojuhelnik(float a, float b, float c)
{
    float obvod, obsah;
    float s;
    int je_rovnostranny, je_rovnoramenny;  // 0/1

    if ((a > 0.0) && (b > 0.0) && (c > 0.0)
        && ((a + b) > c) && ((b + c) > a) && ((c + a) > b))
    {
        obvod = a + b + c;
        s = obvod / 2; //(a + b + c) / 2;
        obsah = sqrt(s * (s - a) * (s - b) * (s - c));

        je_rovnostranny = (a == b && b == c && c == a); // ==, &&
        je_rovnoramenny = (je_rovnostranny == 0) && (a == b || b == c || c == a); // ||

        printf("a = %.2f, b = %.2f, c = %.2f\n", a, b, c);
        printf("o = %.2f, S = %.2f\n", obvod, obsah);
        printf("rovnostranny: %s\n", (je_rovnostranny == 1) ? "Ano" : "Ne");
        printf("rovnoramenny: %s\n", (je_rovnoramenny == 1) ? "Ano" : "Ne");
    }
    else
        printf("Neco je spatne.\n");
}

int main()
{
    float a, b, c;
    float a2, b2, c2;

    printf("Zadej strany trojuhelnika:\n");
    scanf("%f;%f;%f", &a, &b, &c);
    spocti_trojuhelnik(a, b, c);

    printf("Zadej strany trojuhelnika:\n");
    scanf("%f;%f;%f", &a2, &b2, &c2);
    spocti_trojuhelnik(a2, b2, c2);

    spocti_trojuhelnik(3.0, 4.0, 5.0);
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
