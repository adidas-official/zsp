// ZSP Ukazka 4.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

void ukazka1()
{
    int a, b, c;
    int obvod;
    float obsah;
    float s;

    printf("Zadej strany trojuhelnika:\n");
    scanf("%d;%d;%d", &a, &b, &c); //scanf("%d%d%d", &a, &b, &c);
    //scanf("%d", &a);
    //scanf("%d", &b);
    //scanf("%d", &c);

    obvod = a + b + c;
    s = (float)obvod / 2; //(float)(a + b + c) / 2; //printf("s: %f\n", s);
    obsah = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("a = %d, b = %d, c = %d\n", a, b, c);
    printf("o = %d, S = %.2f\n", obvod, obsah);

    printf("\n");
    system("PAUSE");
}

void ukazka2()
{
    //float a, b, c, obvod, obsah, s;
    float a, b, c;
    float obvod, obsah;
    float s;

    printf("Zadej strany trojuhelnika:\n");
    scanf("%f;%f;%f", &a, &b, &c); //scanf("%f%f%f", &a, &b, &c);

    obvod = a + b + c;
    s = obvod / 2; //(a + b + c) / 2;
    obsah = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("a = %.2f, b = %.2f, c = %.2f\n", a, b, c);
    printf("o = %.2f, S = %.2f\n", obvod, obsah);
}

void ukazka3()
{
    //float a, b, c, obvod, obsah, s;
    float a, b, c;
    float obvod, obsah;
    float s;
    int je_rovnostranny, je_rovnoramenny;  // 0/1

    printf("Zadej strany trojuhelnika:\n");
    scanf("%f;%f;%f", &a, &b, &c); //scanf("%f%f%f", &a, &b, &c);

    obvod = a + b + c;
    s = obvod / 2; //(a + b + c) / 2;
    obsah = sqrt(s * (s - a) * (s - b) * (s - c));

    je_rovnostranny = (a == b && b == c && c == a); // ==, &&
    je_rovnoramenny = (je_rovnostranny == 0) && (a == b || b == c || c == a); // ||

    printf("a = %.2f, b = %.2f, c = %.2f\n", a, b, c);
    printf("o = %.2f, S = %.2f\n", obvod, obsah);
    printf("rovnostranny: %d\n", je_rovnostranny);
    printf("rovnoramenny: %d\n", je_rovnoramenny);
}

void ukazka4()
{
    //float a, b, c, obvod, obsah, s;
    float a, b, c;
    float obvod, obsah;
    float s;
    int je_rovnostranny, je_rovnoramenny;  // 0/1

    printf("Zadej strany trojuhelnika:\n");
    scanf("%f;%f;%f", &a, &b, &c); //scanf("%f%f%f", &a, &b, &c);

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

void ukazka5()
{
    float a, b, c;
    float obvod, obsah;
    float s;
    int je_rovnostranny, je_rovnoramenny;  // 0/1

    printf("Zadej strany trojuhelnika:\n");
    scanf("%f;%f;%f", &a, &b, &c);

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
    ukazka5();

    printf("\n");
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
