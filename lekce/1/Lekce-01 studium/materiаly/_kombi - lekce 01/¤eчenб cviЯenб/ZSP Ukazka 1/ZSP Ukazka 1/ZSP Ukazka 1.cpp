// ZSP Ukazka 1.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

void ukol1()
{
    printf("ZSP - Zaklady strukturovaneho programovani\n2022/2023\nzimni semestr\n\n");

    /*
    printf("ZSP - Zaklady strukturovaneho programovani\n");
    printf("2022/2023\n");
    printf("zimni semestr\n\n");
*/
}

void ukol2()
{
    char jmeno[25];
    char prijmeni[25];

    printf("Zadej jmeno: ");
    scanf("%s", jmeno);

    printf("Zadej prijmeno: ");
    scanf("%s", prijmeni);

    printf("%s %s\n\n", jmeno, prijmeni);
    //printf("\n\n");
}

int main()
{
    
    //ukol1();
    ukol2();    

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
