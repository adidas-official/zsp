// ZSP Ukazka 11.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>

int main()
{
    int cislo = 5;
    int je_sude;

    je_sude = (cislo % 2 == 0);

    //

    int rok = 2022;
    int je_prestupny;

    je_prestupny = (rok % 4 == 0) && (rok % 400 != 0);

    //

    int vysledek1 = 3 + 5 * 4; // 32 nebo 23 ?, spravne 23
    int vysledek2 = (3 + 5) * 4;

    int cislo = 5;

    //cislo == 5
    //cislo > 0
    //cislo < 0
    //cislo == 0

    //cislo > 0 && cislo < 6
    //cislo >= 1 && cislo <= 5

    int a = 4, b = 5;
    a = a + b;

    // 

    char z;

    z = 'a';

    //z == 'a'
    //z >= 'a' && z <= 'z'
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
