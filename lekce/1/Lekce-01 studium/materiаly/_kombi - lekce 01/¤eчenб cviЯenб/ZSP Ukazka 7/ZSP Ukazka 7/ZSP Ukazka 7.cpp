// ZSP Ukazka 7.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>

void ukazka1()
{
    double cislo;
    int zaokrouhleno;
    int cc;
    double dc;

    //scanf("%lf", &cislo);
    cislo = 15.65;

    cc = (int)cislo; // double -> int
    dc = cislo - cc;

    if (dc >= 0.5)
        zaokrouhleno = cc + 1;
    else
        zaokrouhleno = cc;
}

void ukazka2()
{
    double cislo;
    int zaokrouhleno;
    double dc;

    //scanf("%lf", &cislo);
    cislo = 15.65;

    zaokrouhleno = (int)cislo; // double -> int
    dc = cislo - zaokrouhleno;

    if (dc >= 0.5)
        zaokrouhleno++; // zaokrouhleno = zaokrouhleno + 1;
}

// ------

int zaokrouhli(float cislo)
{
    int zaokrouhleno;
    double dc;

    zaokrouhleno = (int)cislo; // double -> int
    dc = cislo - zaokrouhleno;

    if (dc >= 0.5)
        zaokrouhleno++; // zaokrouhleno = zaokrouhleno + 1;

    return zaokrouhleno;
}

int main()
{
    double cislo;
    int zaokrouhleno;    

    //scanf("%lf", &cislo);
    cislo = 15.65;
    zaokrouhleno = zaokrouhli(cislo);


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
