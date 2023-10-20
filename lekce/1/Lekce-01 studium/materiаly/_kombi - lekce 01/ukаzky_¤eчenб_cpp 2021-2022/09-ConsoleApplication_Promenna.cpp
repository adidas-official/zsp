// ConsoleApplication_Promenna.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>

int main()
{
    int a, b;

    a = 3;
    b = a;  // kopie hodnoty
    printf("1::a:%d,b:%d,eq:%d\n", a, b, a == b);
    
    a = 5;
    printf("2::a:%d,b:%d,eq:%d\n", a, b, a == b);

    printf("3::b:%d --> ", b);  // inkrementace promenne
    b++;  // b = b + 1;  // b -= 1;    
    printf("%d\n", b);

    // ----------------------------

    b = 2;
    a = b++; // post inkrementace
    printf("4::a:%d,b:%d\n", a, b);

    b = 2;
    a = ++b; // pre inkrementace
    printf("5::a:%d,b:%d\n", a, b);

    

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
