#include "pch.h"
#include "p1.h"
#include <iostream>
#include <string.h>


int test_id_dne(int id_dne) {
	// otestuje (ov���) identifik�tor dne v t�dnu, p�edpokl�d� se hodnota identifik�toru v rozsahu <1; 7>
	// vr�t� hodnotu 0 v p��pad� chybn�ho identifik�toru, jinak hodnotu 1
	return (int)id_dne > 0 && id_dne <= POCET_TEPLOT_TYDEN;
}


char* nazev_dne(int id_dne) {
	// vr�t� n�zev dne podle identifik�toru
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
			return NULL;  // chyba: nepoda�ila se alokace �et�zce v pam�ti

		// Nefunguje protoze windows
		// strcpy_s(s, 10, nazvyDnu[id_dne - 1]); // kopie n�zvu dne odpov�daj�c� dnu ur�en�m jeho identifik�tor v t�dnu
		strncpy(s, nazvyDnu[id_dne - 1], sizeof(s)); // kopie n�zvu dne odpov�daj�c� dnu ur�en�m jeho identifik�tor v t�dnu
		return s;
	}
	else {
		return NULL;
	}
}


int zapis_teplotu(double *teploty_tyden, int pocet_teplot, int id_dne, double teplota) {
	// zap�e do tabulky teplot teplotu pro zadan� den, pozice v tabulce pro odpovidaj�c� den je ur�ena hodnotou id_dne
	// p�edpokl�d� se hodnota identifik�toru dne ��slov�no od 1, p�i chybn�ch datech, p�i neplatn�m identifik�toru dne vr�t� hodnotu 0, jinak hodnotu 1
	int test_id = test_id_dne(id_dne);
	if (test_id) {
		teploty_tyden[id_dne - 1] = teplota;
		return 1;
	};

	return 0; // todo du, vyu��t funkce test_id_dne
}


int precti_teplotu(double *teploty_tyden, int pocet_teplot, int id_dne, double *teplota) {
	// p�e�te z tabulky teplot teplotu pro zadan� den, pozice v tabulce pro odpovidaj�c� den je ur�ena hodnotou id_dne, hodnota teploty je zaps�na do v�stupn�ho parametru teplota
	// p�edpokl�d� se hodnota identifik�toru dne ��slov�no od 1, p�i chybn�ch datech, p�i neplatn�m identifik�toru dne vr�t� hodnotu 0, jinak hodnotu 1
	while (1) {
		if (test_id_dne(id_dne)) {
			std::cout << "Teplota v den " << id_dne << ": " << teploty_tyden[id_dne -1] << std::endl;
			return 1;
		} 
		std::cin >> id_dne;
	}
	// neplatny identifikator uz kontroluje `test_id_dne(id_dne)`
	return 0; // todo du, vyu��t funkce test_id_dne
}


double prumerna_teplota(double* teploty_tyden, int pocet_teplot) {
	// spo��t� pr�m�rnou teplotu ze v�ech dn� v t�dnu, v�sledek vr�t� n�vratovou hodnotou funkce
	double suma = 0;
	for (int i = 0; i < pocet_teplot; i++) {
		suma += teploty_tyden[i];
	}
	return suma / pocet_teplot;
	// return 0; // todo du
}


double maximalni_teplota(double* teploty_tyden, int pocet_teplot) {
	// ur�� maxim�ln� teplotu ze v�ech dn� v t�dnu, v�sledek vr�t� n�vratovou hodnotou funkce
	double max = teploty_tyden[0];
	for (int i = 1; i < pocet_teplot; i++) {
		if (teploty_tyden[i] > max) {
			max = teploty_tyden[i];
		}
	} 
	return max;
	// return 0; // todo du
}


int pozice_teploty(double* teploty_tyden, int pocet_teplot, double teplota) {
	// vr�t� identifk�tor dne (pozici) s hledanou teplotou, ��slov�no od nuly
	for (int i = 0; i < pocet_teplot; i++) {
		if (teploty_tyden[i] == teplota) {
			return i;
		}
	}
	return 0; // todo du
}


int pocet_dnu_teplota(double* teploty_tyden, int pocet_teplot, double teplota) {
	// spo�te po�et dn�, ve kter�ch nastala zadan� teplota
	return 0; // todo du
}


void nacti_teplotu_den(double *teploty_tyden, int pocet_teplot) {
	// p�e�te do tabulky teplot hodnotu pro zadan� den, zajisti na�ten� identifk�toru dne v rozsahu 1 a� 7 a teploty ze standardniho vstupu, zajisti zapis do tabulky teplot
	printf("Zadej teplotu pro konkretni den ve formatu <den mezera teplota> ");
	// todo du
	// pou��t jeden p��kaz scanf pro na�ten� v�ech �daj�
	// + vyu��t funkce zapis_teplotu
}

void nacti_teplotu_tyden(double *teploty_tyden, int pocet_teplot) {
	// na�te do tabulky teplot data za cel� t�den
	printf("Zadani teplot pro cely tyden\n");
	// todo du
	for (int i = 1; i < POCET_TEPLOT_TYDEN + 1; i++) {
		double teplota;
		std::cout << "Teplota " << std::endl;
		std::cin >> teplota;
		zapis_teplotu(teploty_tyden, pocet_teplot, i, teplota);
	}
	while(getchar() != '\n');
	// + vyu��t funkce zapis_teplotu
}

void tisk_teploty(double *teploty_tyden, int pocet_teplot) {
	// vyp�e obsah tabulky teplot
	// todo du
	// + vyu��t funkce precti_teplotu
	std::cout << "Tisk teplot" << std::endl;

	for (int i = 1; i < pocet_teplot + 1; i++) {
		precti_teplotu(teploty_tyden, pocet_teplot, i, 0);
	}
} 

void tisk_statistika(double *teploty_tyden, int pocet_teplot) {
	// z�sk� hodnoty pro statistku (pr�m�rn� teplota, maxim�ln� teplota, po�et dn� s maxim�ln� teplotou) a vytiskne v�sledky na standardn� v�stup
	// todo du
}

void zapis_do_souboru_statistika(double* teploty_tyden, int pocet_teplot, char* nazev_souboru) {
	// z�sk� hodnoty pro statistiku (pr�m�rn� teplota, maxim�ln� teplota, po�et dn� s maxim�ln� teplotou) a zap�e v�sledky do textov�ho souboru
	// todo du
}

void zapis_do_souboru_teploty(double *teploty_tyden, int pocet_teplot, char *nazev_souboru) {
	// zapise tabulku teplot do souboru
	while (getchar() != '\n');

	FILE *file = fopen(nazev_souboru, "w");
	if (file == NULL) {
		std::cout << "Soubor nelze otevrit" << std::endl;
		exit(2);
	}

	for (int i = 0; i < pocet_teplot; i++) {
		fprintf(file, "%lf\n", teploty_tyden[i]);
	}
	fclose(file);
	// todo du
}


void nacti_ze_souboru_teploty(double *teploty_tyden, int pocet_teplot, char *nazev_souboru) {
	FILE *file = fopen(nazev_souboru, "r");
	char buffer[32];
	if (file == NULL) {
		std::cout << "Soubor nelze otevrit" << std::endl;
		exit(2);
	}

	for (int i = 1; i < pocet_teplot + 1; i++) {
		fgets(buffer, 32, file);
		zapis_teplotu(teploty_tyden, pocet_teplot, i, std::stod(buffer));
		std::cout << "teplota zapsana " << buffer;
	}
	fclose(file);

	// nacte tabulku teplot ze souboru
	// todo du
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
	std::cout << teploty_tyden << "*:" << *teploty_tyden << std::endl;
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
				// todo du - na��st n�zev souboru
				nacti_ze_souboru_teploty(teploty_tyden, POCET_TEPLOT_TYDEN, soubor);			
			} break;
			case '3': {
				char soubor[10] = "data.txt";
				// todo du - na��st n�zev souboru
				zapis_do_souboru_teploty(teploty_tyden, POCET_TEPLOT_TYDEN, soubor);			
			} break;
			case '4': {
				tisk_teploty(teploty_tyden, POCET_TEPLOT_TYDEN);
			} break;
			case '5': {
				// p�e�ti den 
				int den = 0;
				double teplota = 0;  // trochu nanic, zatim jedu podle zadani
				precti_teplotu(teploty_tyden, POCET_TEPLOT_TYDEN, den, &teplota);
				// todo du - na��st identifk�tor dne
				// double teplota_id = precti_teplotu(teploty_tyden, POCET_TEPLOT_TYDEN, den, &teplota);

			} break;
			case '6': {
				// p�e�ti den a hodnotu teploty
				int den = 0;
				if (!test_id_dne(den)) {
					std::cout << "Zadejte den [1-7]" << std::endl;
					std::cin >> den;
				}
				double teplota = 0;
				std::cout << "Zadejte teplotu" << std::endl;
				std::cin >> teplota;
				// todo du - na��st identifik�tor dne a teplotu
				zapis_teplotu(teploty_tyden, POCET_TEPLOT_TYDEN, den, teplota);
				std::cout << teploty_tyden[den - 1] << std::endl;
			} break;
			case '7': {
				char soubor[10] = "data.txt";			
				tisk_statistika(teploty_tyden, POCET_TEPLOT_TYDEN);

				// Nen� v uk�zkov�m exe-souboru. (!!!)
				// Dotaz�t se na z�pis do souboru (ulo�en� do souboru), odpov�� stiskem kl�vesy <A> nebo <N>. V p��pad� odpov�di ano, na��st n�zev souboru. A zobrazit informaci, "Data byla zaps�na do souboru nazev souboru."
				zapis_do_souboru_statistika(teploty_tyden, POCET_TEPLOT_TYDEN, soubor);
			} break;
			default: {
				printf("Neplatn� hodnota volby!");
			} break;
		}
	
	}
}
