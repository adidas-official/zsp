// ZSP_Ukol-1.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>
#include <stdio.h>
#include <cmath>


void u1_1()
{
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

void u1_2(int n)
{
    // input 5*int
    // output
    // Známky: z1<tab>z2<z3><tab>z4<tab>z5
    // průměrná hodnota zaokrouhlená na dvě desetinná místa
    // Prospěl s vyznamenáním: {1:Ano/0:Ne}
    // Prospěl: {1:Ano/0:Ne}
    // Neprospěl: {1:Ano/0:Ne}

    int znamky[n];
    int znamka;
    float prumer;
    bool prospel = true;
    bool vyznamenani = true;
    int soucet = 0;

    for (int i = 0; i < n; i++)
    {
        while(true) {
            printf("Zadejte znamku mezi 1 a 5\n");
            if (scanf("%i", &znamka) == 1) {
                if (znamka >= 1 && znamka <= 5) {
                    break;
                }
                else {
                    printf("Znamka musi byt cislo mezi 1 a 5\n");
                }
            }
            else {
                printf("Znamka musi byt cele cislo\n");
                while(getchar() != '\n');  // vymaze input buffer. pokud buffer neco obsahuje, while loop jede do nekonecna, kde input pro scanf je to, co uzivatel zadal predtim. Pr.: input scanf je 'a', vyhodnoceni neni 1, znovu na zacetek while loop, scanf uz se nepta, ma zadano 'a', pokracuje s tim, atd.
            }
        }

        if (znamka > 2) {
            vyznamenani = false;
        }

        if (znamka > 4) {
            prospel = false;
        }

        znamky[i] = znamka;
        soucet += znamka;
    }

    prumer = float(soucet) / n;
    if (prumer > 1.5) {
        prospel = false;
    }

    printf("Známky: %i\t%i\t%i\t%i\t%i\n", znamky[0], znamky[1], znamky[2], znamky[3], znamky[4]);
    printf("průměrná hodnota zaokrouhlená na dvě desetinná místa %.2f\n", prumer);
    printf("Prospel:  %s\n", (prospel == false) ? "Ne" : "Ano");
    printf("Prospel s vyznamenanim: %s\n", (vyznamenani == false) ? "Ne" : "Ano");

}

void u1_3()
{
    // input 1:
    // zkratka meny: str [EUR, GB, ...] 
    // input 2:
    // cena za jednotku meny: float
    // input 3:
    // pocet meny k nakupu: int
    // 1 GBP = 24.9 Kč
    // Nákup: 5 GBP
    // Celkem: 5 x 24.9 = 124.5 Kč Zaokrouhleno: 125 Kč 

    char mena[4];
    float cena;
    int pocet;
    float celkem;

    while (1) {
        printf("Zadejte nazev meny\n");
        if (scanf("%3s", mena) == 1) {
            break;
        }
        while (getchar() != '\n');
    }

    while (1) {
        printf("Zadejte nakupni cenu meny %s\n", mena);
        if (scanf("%f", &cena) == 1) {
            break;
        }
        while (getchar() != '\n');
    }
    printf("Kolik %s za %.2f chcete nakoupit?\n", mena, cena);
    scanf("%i", &pocet);

    celkem = float(pocet) * cena;

    printf("1 %s = %.2f Kč\n", mena, cena);
    printf("Nákup: %i %s\n", pocet, mena);
    printf("Celkem: %i x %.2f = %.2f Kč Zaokrouhleno: %i Kč", pocet, cena, celkem, int(ceil(celkem)));

}

int main()
{
    // u1_1();
    // printf("\n");
    u1_2(5);
    // printf("\n");
    // u1_3();
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
