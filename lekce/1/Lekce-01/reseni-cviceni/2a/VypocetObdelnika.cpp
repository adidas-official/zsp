// VypocetObdelnika.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>

int main()
{
	double a, b; // cislo s desetinnou teckou
	double o;
	double S;

	//a = 5.52146;
	//b = 3.7525;
	printf("Zadani stran obdelnika\n");
	printf("Zadej stranu a = ");
	scanf("%lf", &a);
	printf("Zadej stranu b = ");
	scanf("%lf", &b);

	o = (a + b) * 2;
	S = a * b;

	printf("Strana a = %.2f, b = %.2f\n", a, b);
	printf("Obvod o = %.2f\n", o);
	printf("Obsah S = %.2f\n", S);
	
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
