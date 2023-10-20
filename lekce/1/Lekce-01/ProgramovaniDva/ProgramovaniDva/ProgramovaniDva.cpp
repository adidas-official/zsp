// ProgramovaniDva.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>

void ukazka1()
{
    int r1, r2;

    printf("Zadej rok: ");
    scanf("%d", &r1); //r1 = 2023;
    r2 = r1 + 1;

    printf("%d/%d", r1, r2);
}

void ukazka2()
{
    int pocet_procent;

    pocet_procent = 75;
    printf("Pocet procent %d%%", 75);
}

void ukazka3()
{
    int d, m, r;

    //d = 23;
    //m = 9;
    //r = 2023;

    scanf("%d-%d-%d", &r, &m, &d); //scanf("%d%d%d", &d, &m, &r);

    printf("%02d.%02d.%04d\n", d, m, r);//printf("%d.%d.%d\n", d, m, r);
}

void ukazka4()
{
    int cislo = 254;

    printf("%d\t%xh\t%XH\n", cislo, cislo, cislo);
}

int main()
{

    const int POSUN = 'a' - 'A';
    int i;
    char malepismeno;

    printf("znak\tDEC\tHEX\t\tznak\tDEC\tHEX\n");
    printf("---------------------------------------------------\n");
    for (i = 'A'; i <= 'Z'; i++)
    {
        malepismeno = (char)(i + POSUN);
        printf("%c\t%d\t%X\t\t%c\t%d\t%X\n", (char)i, i, i, malepismeno, malepismeno, malepismeno);
    }
    
/*
    printf("znak\tDEC\tHEX\n");
    printf("-------------------\n");
    for (i = 'A'; i <= 'Z'; i++)
    {
        printf("%c\t%d\t%X\n", (char)i, i, i);
    }
    */

    /*
    const int POCET_PISMEN = 'z' - 'a' + 1;
    for (i = 0; i < POCET_PISMEN; i++)
    {
        printf("%d\n", i);
    }*/
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
