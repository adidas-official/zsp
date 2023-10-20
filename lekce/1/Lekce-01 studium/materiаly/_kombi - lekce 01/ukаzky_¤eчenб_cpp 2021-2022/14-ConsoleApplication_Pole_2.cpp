// ConsoleApplication_Pole_2.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

// globalni promenne
const int N = 5;
int cisla[N];
int id;

void zadej_hodnotu()
{
    printf("Zadej poradi: ");
    scanf("%d", &id);
    getchar();
    if (id >= 0 && id < N)
    {
        printf("Zadej hodnotu: ");
        scanf("%d", &cisla[id]);
        getchar();
    }
}

void tisk_hodnot()
{
    printf("[");
    for (int i = 0; i < N; i++)
        printf("%d;", cisla[i]);
    printf("]\n\n");
}

void spocti_prumer()
{
    int suma = 0;
    double prumer;

    for (int i = 0; i < N; i++)
        suma = suma + cisla[i];

    prumer = (double) suma / (double) N;
    printf("Prumer: %f\n", prumer);
}

void init_hodnoty()
{
    for (int i = 0; i < N; i++)
        cisla[i] = 0;
}

int main()
{
    char z;

    init_hodnoty();

    do
    {
        printf("Menu\n");
        printf("<1> - zadej hodnotu\n");
        printf("<2> - tisk hodnot\n");
        printf("<3> - prumer\n");
        printf("<K> - KONEC\n");

        scanf("%c", &z);
        getchar();

        switch (z)
        {
        case '1':
            zadej_hodnotu();
            break;

        case '2':
            tisk_hodnot();
            break;

        case '3':
            spocti_prumer();
            break;
        }

    } while (z != 'k' && z != 'K');
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
