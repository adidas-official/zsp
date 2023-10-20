// ConsoleApplication_Datum.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

void tisk_datum(int d, int m, int r)
{
    char text_m[10];    // retezec (text)    

    printf("%d. %d. %d\n", d, m, r);
    printf("%02d. %02d. %04d\n", d, m, r);

    switch (m)
    {
    case 1:
        strcpy(text_m, "leden");
        break;

    case 2:
        strcpy(text_m, "unor");
        break;

    case 3:
        strcpy(text_m, "brezen");
        break;

    case 4:
        strcpy(text_m, "duben");
        break;

    case 5:
        strcpy(text_m, "kveten");
        break;

    case 6:
        strcpy(text_m, "cerven");
        break;

    case 7:
        strcpy(text_m, "cervenec");
        break;

    case 8:
        strcpy(text_m, "srpen");
        break;

    case 9:
        strcpy(text_m, "zari");
        break;

    case 10:
        strcpy(text_m, "rijen");
        break;

    case 11:
        strcpy(text_m, "listopad");
        break;

    case 12:
        strcpy(text_m, "prosinec");
        break;

    default:
        printf("Chybne zadane cislo mesice.\n");
        break;
    }

    printf("%02d. %s %04d\n", d, text_m, r);
}

int main()
{
    /*unsigned*/ int d, m, r;
    
    printf("Zadej den, mesic a rok oddelene dvojteckou: ");
    scanf("%d:%d:%d", &d, &m, &r);

    tisk_datum(d, m, r);

    /*
    printf("%d. %d. %d\n", d, m, r);
    printf("%02d. %02d. %04d\n", d, m, r);

    switch (m)
    {
    case 1:
        strcpy(text_m, "leden");
        break;

    case 2:
        strcpy(text_m, "unor");
        break;

    case 3:
        strcpy(text_m, "brezen");
        break;

    case 4:
        strcpy(text_m, "duben");
        break;

    case 5:
        strcpy(text_m, "kveten");
        break;

    case 6:
        strcpy(text_m, "cerven");
        break;

    case 7:
        strcpy(text_m, "cervenec");
        break;

    case 8:
        strcpy(text_m, "srpen");
        break;

    case 9:
        strcpy(text_m, "zari");
        break;

    case 10:
        strcpy(text_m, "rijen");
        break;

    case 11:
        strcpy(text_m, "listopad");
        break;

    case 12:
        strcpy(text_m, "prosinec");
        break;

    default:
        printf("Chybne zadane cislo mesice.\n");
        break;
    }

    printf("%02d. %s %04d\n", d, text_m, r);

    */
  
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
