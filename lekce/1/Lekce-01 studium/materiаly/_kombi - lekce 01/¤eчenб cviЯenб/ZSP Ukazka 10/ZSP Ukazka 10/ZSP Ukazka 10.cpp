// ZSP Ukazka 10.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
    const int N = 5;
    int cisla[N];
    int ktery;
    int suma;
    double prumer;

    for (int i = 0; i < N; i++)
    {
        printf("Zadej %d. cislo : ", i + 1);
        scanf("%d", &cisla[i]);
    }

    for (int i = 0; i < N; i++)
        printf("%d;", cisla[i]);

    printf("Pozice hodnoty: ");
    scanf("%d", &ktery);

    if (ktery >= 1 && ktery <= N)
        printf("%d. cislo je %d\n", ktery, cisla[ktery - 1]);

    suma = 0;
    for (int i = 0; i < N; i++)
        suma += cisla[i]; //suma = suma + cisla[i];

    prumer = (double)suma / N;

    printf("suma %d, prumer %.2f\n", suma, prumer);
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
