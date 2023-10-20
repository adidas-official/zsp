// ConsoleApplication_Pole.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>

int main()
{
    //int c1, c2, c3, c4, c5;
    const int N = 5;
    int c[N];  // pole : velikost, prvek pole, index prvku pole 0 1 2 3 4

    //c[0] = 0; c[1] = 1; c[2] = 2; c[3] = 3; c[4] = 4;

    for (int i = 0; i < N; i++)
        c[i] = i;

    for (int i = 0; i < N; i++)
        printf("%d;", c[i]);
    printf("\n");

    c[2] = 3;

    for (int i = 0; i < N; i++)
        printf("%d;", c[i]);
    printf("\n");

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
