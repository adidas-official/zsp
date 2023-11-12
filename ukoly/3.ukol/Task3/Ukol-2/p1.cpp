#include "pch.h"
#include "p1.h"
#include <iostream>
#include <string.h>
#include <cmath>

int test_id_dne(int id_dne) {
	// otestuje (overi) identifikator dne v tydnu, predpoklada se hodnota identifikatoru v rozsahu <1; 7>
	// vrati hodnotu 0 v pripade chybneho identifikatoru, jinak hodnotu 1
	return (int)id_dne > 0 && id_dne <= POCET_TEPLOT_TYDEN;
}


char* nazev_dne(int id_dne) {
	// vrati nazev dne podle identifikatoru
	char nazvyDnu[10][10] = {
		"Pondeli",
		"Utery",
		"Streda",
		"Ctvrtek",
		"Patek",
		"Sobota",
		"Nedele"
	};
	char* s;

	if (test_id_dne(id_dne)) {
		s = (char*) malloc(10 * sizeof(char));
		if (s == NULL)
			return NULL;  // chyba: nepodarila se alokace retezce v pameti

		strncpy(s, nazvyDnu[id_dne - 1], sizeof(s));
		return s;
	}
	else {
		return NULL;
	}
}


int zapis_teplotu(double *teploty_tyden, int pocet_teplot, int id_dne = 0, double teplota = 0) {
	// zapise do tabulky teplot teplotu pro zadani den, pozice v tabulce pro odpovidajici den je urcena hodnotou id_dne
	// predpoklada se hodnota identifikatoru dne od 1, pri chybnych datech, pri neplatnem identifikatoru dne vrati hodnotu 0, jinak hodnotu 1
	int test_id = test_id_dne(id_dne);
	if (test_id) {
		teploty_tyden[id_dne - 1] = teplota;
		return 1;
	};

	return 0;
}


int precti_teplotu(double *teploty_tyden, int pocet_teplot, int id_dne, double *teplota) {
	// precte z tabulky teplot teplotu pro zadany den, pozice v tabulce pro odpovidajici den je urcena hodnotou id_dne, hodnota teploty je zapsana do vystupniho parametru teplota
	// predpoklada se hodnota identifikatoru dne od 1, pri chybnych datech, pri neplatnem identifikatoru dne vrati hodnotu 0, jinak hodnotu 1
	while (1) {
		if (test_id_dne(id_dne)) {
			printf("| Teplota %-15s %5.2f stupnu\n", nazev_dne(id_dne), teploty_tyden[id_dne - 1]);
#include <cmath>
			return 1;
		} 
		printf("Zadejte index dne [1-7] ");
		scanf("%i", &id_dne);
		while(getchar() != '\n');
	}
	// neplatny identifikator uz kontroluje `test_id_dne(id_dne)`
	return 0;
}


double prumerna_teplota(double* teploty_tyden, int pocet_teplot) {
	// spocita prumernou teplotu ze vsech dni v tydnu, vysledek vrati navratovou hodnotou funkce
	double suma = 0;
	for (int i = 0; i < pocet_teplot; i++) {
		suma += teploty_tyden[i];
	}
	return round(suma / pocet_teplot * 100.0) / 100.0;
}


double maximalni_teplota(double* teploty_tyden, int pocet_teplot) {
	// urci maximalni teplotu ze vsech dni v tydnu, vysledek vrati navratovou hodnotou funkce
	double max = teploty_tyden[0];
	for (int i = 1; i < pocet_teplot; i++) {
		if (teploty_tyden[i] > max) {
			max = teploty_tyden[i];
		}
	} 
	return round(max * 100.0) / 100.0 ;
}


int pozice_teploty(double* teploty_tyden, int pocet_teplot, double teplota) {
	// vrati identifkator dne (pozici) s hledanou teplotou, indexovano od nuly
	for (int i = 0; i < pocet_teplot; i++) {
		if (teploty_tyden[i] == teplota) {
			return i;
		}
	}
	return 0;
}


int pocet_dnu_teplota(double* teploty_tyden, int pocet_teplot, double teplota) {
	// spocte pocet dnu, ve kterych nastala zadana teplota
	int count = 0;

	for (int i = 0; i < pocet_teplot; i++) {
		if (teploty_tyden[i] == teplota) {
			count++;
		}
	}

	return count;
}


void nacti_teplotu_den(double *teploty_tyden, int pocet_teplot) {
	// pricte do tabulky teplot hodnotu pro zadany den, zajisti nacteni identifkatoru dne v rozsahu 1 az 7 a teploty ze standardniho vstupu, zajisti zapis do tabulky teplot
	printf("Zadej teplotu pro konkretni den ve formatu <den mezera teplota> ");
	// pouzij jeden prikaz scanf pro nacteni vsech udaju
	int den_id;
	double teplota;

	while (!test_id_dne(den_id)) {
		scanf("%d %lf", &den_id, &teplota);
	}
	
	while(getchar() != '\n');
	zapis_teplotu(teploty_tyden, pocet_teplot, den_id, teplota);
}

void nacti_teplotu_tyden(double *teploty_tyden, int pocet_teplot) {
	// nacte do tabulky teplot data za cely tyden
	printf("Zadani teplot pro cely tyden\n");
	double teplota;
	char* den;
	
	for (int i = 1; i < POCET_TEPLOT_TYDEN + 1; i++) {
		den = nazev_dne(i);
		printf("Teplota %s ", den);
		scanf("%lf", &teplota);
		zapis_teplotu(teploty_tyden, pocet_teplot, i, teplota);
	}

	while(getchar() != '\n');
	
}

void tisk_teploty(double *teploty_tyden, int pocet_teplot) {
	// vypise obsah tabulky teplot
	
	printf("| Tisk teplot\n");

	for (int i = 1; i < pocet_teplot + 1; i++) {
		precti_teplotu(teploty_tyden, pocet_teplot, i, 0);
	}
} 

void tisk_statistika(double *teploty_tyden, int pocet_teplot) {
	// ziska hodnoty pro statistku (prumerna teplota, maximalni teplota, pocet dnu s maximalni teplotou) a vytiskne vysledky na standardni vystup
	double max = maximalni_teplota(teploty_tyden, pocet_teplot);
	double avg = prumerna_teplota(teploty_tyden, pocet_teplot);
	int max_pocet = pocet_dnu_teplota(teploty_tyden, pocet_teplot, max);

	printf("| Statistika teplot\n");
	printf("| - Prumerna teplota: %19.2f\n", avg);
	printf("| - Maximalni teplota: %18.2f\n", max);
	printf("| - Pocet dni s maximalni teplotou: %2.d\n", max_pocet);

}

void zapis_do_souboru_statistika(double* teploty_tyden, int pocet_teplot, char* nazev_souboru) {
	// ziska hodnoty pro statistiku (prumerna teplota, maximalni teplota, pocet dnu s maximalni teplotou) a zapse vysledky do textoveho souboru
	printf("Ulozit do souboru %s [A] [N]? ", nazev_souboru);
	char write = tolower(getchar()); 
	while(getchar() != '\n');

	if (write == 'a') {

		FILE *file = fopen(nazev_souboru, "w");

		double max = maximalni_teplota(teploty_tyden, pocet_teplot);
		double avg = prumerna_teplota(teploty_tyden, pocet_teplot);
		int max_pocet = pocet_dnu_teplota(teploty_tyden, pocet_teplot, max);

		fprintf(file, "| Statistika teplot\n");
		fprintf(file, "| - Prumerna teplota: %19.2f\n", avg);
		fprintf(file, "| - Maximalni teplota: %18.2f\n", max);
		fprintf(file, "| - Pocet dni s maximalni teplotou: %2.d\n", max_pocet);

		printf("Data byla zapsana do souboru %s\n", nazev_souboru);
		fclose(file);
	}
		// todo du
}

void zapis_do_souboru_teploty(double *teploty_tyden, int pocet_teplot, char *nazev_souboru) {
	// zapise tabulku teplot do souboru

	FILE *file = fopen(nazev_souboru, "w");
	if (file == NULL) {
		printf("Soubor nelze otevrit\n");
		return;
	}

	for (int i = 0; i < pocet_teplot; i++) {
		fprintf(file, "%lf\n", teploty_tyden[i]);
	}
	fclose(file);
}


void nacti_ze_souboru_teploty(double *teploty_tyden, int pocet_teplot, char *nazev_souboru) {
	// nacte tabulku teplot ze souboru
	FILE *file = fopen(nazev_souboru, "r");
	char buffer[32];
	if (file == NULL) {
		printf("Soubor nelze otevrit\n");
		return;
	}

	for (int i = 1; i < pocet_teplot + 1; i++) {
		fgets(buffer, 32, file);
		zapis_teplotu(teploty_tyden, pocet_teplot, i, atof(buffer));
		printf("teplota zapsana %s", buffer);
	}
	fclose(file);

}
// ------------------------

void menu() {
	printf("\n| Menu\n");
	printf("| 0 - KONEC\n");
	printf("| 1 - Zadat teploty na klavesnici\n");
	printf("| 2 - Nacist teploty ze souboru\n");
	printf("| 3 - Ulozit teploty do souboru\n");
	printf("| 4 - Zobrazit teploty\n");
	printf("| 5 - Zobrazit teplotu v zadany den\n");
	printf("| 6 - Zmena teploty v zadany den\n");
	printf("| 7 - Statistika teplot\n");
}


char volba_menu() {
	printf("\nZadej cislo volby: ");
	char volba = getchar();
	while (getchar() != '\n');
	return volba;
}


void operace(double *teploty_tyden) {
	int konec = 0;
	while (!konec) {
		menu();

		char volba = volba_menu();

		switch (volba)
		{
			case '0': {
				konec = 1;
			} break;
			case '1': {
				nacti_teplotu_tyden(teploty_tyden, POCET_TEPLOT_TYDEN);			
			} break;
			case '2': {
				char soubor[10] = "data.txt";
				// todo du - nacist nazev souboru
				nacti_ze_souboru_teploty(teploty_tyden, POCET_TEPLOT_TYDEN, soubor);			
			} break;
			case '3': {
				char soubor[10] = "data.txt";
				// todo du - nacist nazev souboru
				zapis_do_souboru_teploty(teploty_tyden, POCET_TEPLOT_TYDEN, soubor);			
			} break;
			case '4': {
				tisk_teploty(teploty_tyden, POCET_TEPLOT_TYDEN);
			} break;
			case '5': {
				// precti den 
				int den = 0;
				double teplota = 0;
				// todo du - nacist identifkator dne
				precti_teplotu(teploty_tyden, POCET_TEPLOT_TYDEN, den, &teplota);

			} break;
			case '6': {
				// precti den a hodnotu teploty
				nacti_teplotu_den(teploty_tyden, POCET_TEPLOT_TYDEN);
				printf("Teplota zmenena\n");
			} break;
			case '7': {
				char soubor[10] = "stat.txt";			
				tisk_statistika(teploty_tyden, POCET_TEPLOT_TYDEN);

				// Neni v ukazkovem exe-souboru. (!!!)
				// Dotazat se na zapis do souboru (ulozeni do souboru), odpoved stiskem klevesy <A> nebo <N>. V pripade odpovedi ano, nacist nazev souboru. A zobrazit informaci, "Data byla zapsana do souboru nazev souboru."
				zapis_do_souboru_statistika(teploty_tyden, POCET_TEPLOT_TYDEN, soubor);
			} break;
			default: {
				printf("Neplatn� hodnota volby!");
			} break;
		}
	
	}
}
