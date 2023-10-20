// ZSP Ukazka 9.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

void ukazka1()
{
    int d, m, r;

    /*    scanf("%d", &d);
        scanf("%d", &m);
        scanf("%d", &r);*/

    scanf("%d/%d/%d", &r, &m, &d);
    //scanf("%d%d%d", &d, &m, &r);

    printf("'%02d.%02d.%d'", d, m, r);
    //printf("'%2d.%2d.%d'", d, m, r);

}

void ukazka2()
{
    int d, m, r;
    char mesic[15];

    scanf("%d/%d/%d", &r, &m, &d);

    switch (m)
    {
    case 1:
        strcpy(mesic, "leden");
        break;
    case 2:
        strcpy(mesic, "unor");
        break;
    case 3:
        strcpy(mesic, "brezen");
        break;
    case 4:
        strcpy(mesic, "duben");
        break;
    case 5:
        strcpy(mesic, "kveten");
        break;
    case 6:
        strcpy(mesic, "cerven");
        break;
    case 7:
        strcpy(mesic, "cervenec");
        break;
    case 8:
        strcpy(mesic, "srpen");
        break;
    case 9:
        strcpy(mesic, "zari");
        break;
    case 10:
        strcpy(mesic, "rijen");
        break;
    case 11:
        strcpy(mesic, "listopad");
        break;
    case 12:
        strcpy(mesic, "prosin");
        break;
    default:
        strcpy(mesic, "spatne");
        break;
    }

    printf("'%02d.%s.%d'", d, mesic, r);

}

void ukazka3()
{
    int d, m, r;
    char mesic[15];

    scanf("%d/%d/%d", &r, &m, &d);

    if (m == 1)
        strcpy(mesic, "leden");
    else
        if (m == 2)
            strcpy(mesic, "unor");
        else
            if (m == 3)
                strcpy(mesic, "brezen");
            else
                if (m == 4)
                    strcpy(mesic, "duben");
                else
                    if (m == 5)
                        strcpy(mesic, "kveten");
                    else
                        if (m == 6)
                            strcpy(mesic, "cerven");
                        else
                            if (m == 7)
                                strcpy(mesic, "cervenec");
                            else
                                if (m == 8)
                                    strcpy(mesic, "srpen");
                                else
                                    if (m == 9)
                                        strcpy(mesic, "zari");
                                    else
                                        if (m == 10)
                                            strcpy(mesic, "rijen");
                                        else
                                            if (m == 11)
                                                strcpy(mesic, "listopad");
                                            else
                                                if (m == 12)
                                                    strcpy(mesic, "prosinec");
                                                else
                                                    strcpy(mesic, "spatne");
    printf("'%02d.%s.%d'", d, mesic, r);

}

void ukazka4()
{
    int d, m, r;
    char mesic[15];
    char mesice[12][50] = { "leden" , "unor", "brezen", "duben", "kveten", "cerven", "cervenec", "srpen", "zari", "rijen", "listopad", "prosinec" };

    scanf("%d/%d/%d", &r, &m, &d);

    strcpy(mesic, mesice[m - 1]);
    printf("'%02d.%s.%d'", d, mesic, r);
}

int main()
{
    ukazka4();

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
