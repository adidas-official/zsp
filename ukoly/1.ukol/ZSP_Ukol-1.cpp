// ZSP_Ukol-1.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>

void u1_1()
{
    // todo u1-1
    // 
    // input 1
    // pocet ks [int]
    // input 2
    // cena za ks bez DPH [float]
    // 
    // output
    // ---------------------
    // Účtenka
    // Cena bez DPH/ks 200 Kč<tab>Cena s DPH/ks 240 Kč
    // Počet kusů: 5<tab>Cena bez DPH 1000 Kč<tab>Cena s DPH (20 %)
    // 1400 Kč
    // ---------------------

    int pocet;
    const float DPH = 1.2;
    const int DPHproc = (DPH -1) * 100;
    double cena;
    double cena_s_DPH;
    double celkem;
    double celkem_s_DPH;

    printf("Zadejte pocet ks polozky:\n");
    scanf("%i", &pocet);
    printf("Zadejte cenu za 1ks polozky:\n");
    scanf("%lf", &cena);

    cena_s_DPH = cena * DPH;
    celkem = pocet * cena;
    celkem_s_DPH = celkem * DPH;

    printf("Účtenka\n");
    printf("Cena bez DPH/ks %.2lf Kč\tCena s DPH/ks %.2lf Kč\n", cena, cena_s_DPH);
    printf("Počet kusů: %i\tCena bez DPH %.2lf Kč\tCena s DPH (%i %%) %.2lf\n", pocet, celkem, DPHproc, celkem_s_DPH);


}

void u1_2()
{
    // todo u1-2
}

void u1_3()
{
    // todo u1-3
}


int main()
{
    u1_1();
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
