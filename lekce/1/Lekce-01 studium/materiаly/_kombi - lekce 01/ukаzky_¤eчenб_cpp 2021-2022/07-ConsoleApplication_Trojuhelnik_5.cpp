// ConsoleApplication_Trojuhelnik_5.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

double spocti_obvod_trojuhelnika(double a, double b, double c)
{
    /*
    double o = a + b + c;
    return o;
    */    
    return a + b + c;
}

int je_rovnostranny_trojuhelnik(double a, double b, double c)
{
    return a == b && b == c && c == a;
}

int je_rovnoramenny_trojuhelnik(double a, double b, double c)
{
    return a == b || b == c || c == a;
}

void spocti_trojuhelnik(double a, double b, double c)  // parametr funkce
{
    double o;
    int rovnostranny, rovnoramenny;

    if (a > 0.0 && b > 0.0 && c > 0.0)
    {
        o = spocti_obvod_trojuhelnika(a, b, c);
        rovnostranny = je_rovnostranny_trojuhelnik(a, b, c);
        rovnoramenny = je_rovnoramenny_trojuhelnik(a, b, c);

        printf("\n\na:%f, b:%f, c:%f\no:%f\n", a, b, c, o);
        printf("Rovnostranny:%d:%s\n", rovnostranny, rovnostranny == 0 ? "Ne" : "Ano"); // ternarni operator
        printf("Rovnoramenny:%d:%s\n", rovnoramenny, rovnoramenny == 0 ? "Ne" : "Ano");
    }
    else
        printf("Chybne zadane strany trojuhelnika. Nektera ze stran trojuhelnika neni kladnym cislem.\n");
}

/*
int spocti_trojuhelnik_2(double a, double b, double c)  // parametr funkce
{
    double o;
    int rovnostranny, rovnoramenny;
    int vypocet;

    if (a > 0.0 && b > 0.0 && c > 0.0)
    {
        o = a + b + c;
        rovnostranny = (a == b && b == c && c == a);
        rovnoramenny = a == b || b == c || c == a;

        printf("\n\na:%f, b:%f, c:%f\no:%f\n", a, b, c, o);
        printf("Rovnostranny:%d:%s\n", rovnostranny, rovnostranny == 0 ? "Ne" : "Ano"); // ternarni operator
        printf("Rovnoramenny:%d:%s\n", rovnoramenny, rovnoramenny == 0 ? "Ne" : "Ano");

        vypocet = 1;
    }
    else
    {
        printf("Chybne zadane strany trojuhelnika. Nektera ze stran trojuhelnika neni kladnym cislem.\n");

        vypocet = 0;
    }

    return vypocet;
}
*/

int main()
{
    double strana_a, strana_b, strana_c;
    int ok;

    printf("Zadej strany trojuhelnika oddelene strednikem.\n");
    scanf("%lf;%lf;%lf", &strana_a, &strana_b, &strana_c);

    //spocti_trojuhelnik(strana_a, strana_b, strana_c);    
    ok = spocti_trojuhelnik_2(strana_a, strana_b, strana_c);
    if (ok == 0)
        printf("Trojuhelnik nebyl spocitan.\n");
    else
        printf("Trojuhelnik byl spocitan.\n");
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
