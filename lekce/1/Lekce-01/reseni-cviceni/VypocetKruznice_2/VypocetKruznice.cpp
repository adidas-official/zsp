// VypocetKruznice.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>

int main()
{
	const float PI = 3.14;
	const float DVE_PI = 2 * PI;
	float r;
	float obvod;
	float obsah;

	printf("Polomer kruznice r = ");
	scanf("%f", &r);

	obvod = DVE_PI * r; //obvod = 2 * PI * r;
	obsah = PI * r * r;

	//PI = 45.25;

	printf("PI = %.2f", PI);
	printf("r = %.2f\n", r);
	printf("o = %.2f\n", obvod);
	printf("S = %.2f\n", obsah);
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
