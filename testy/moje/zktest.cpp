#include <iostream>

// Napiste funkci, ktera prijima celociselny argument a vraci 2 nasobek a 16 nasobek argumentu
// Ma to byt pres navratovou hodnotu (return?), takze tohle asi spatne
void tab(int p, int* res1, int* res2) {
    *res1 = 2*p;
    *res2 = 16*p;
}

void callTab() {
    int r1;
    int r2;

    tab(4, &r1, &r2);
    printf("r1 = %d\n", r1);
    printf("r2 = %d\n", r2);

}

// Napiste definici funkce, ktera spocita pocet sudych cisel na intervalu <odkud;kam>
int pocet(int odkud, int kam) {
    int pocet = 0;
    for (int i = odkud; i <= kam; i++) {
        if (i % 2 == 0) {
            pocet++;
        }
    }
    return pocet;
}

void callPocet() {
    printf("Pocet sudych cisel od 4 do 12: %d\n", pocet(4, 12));
}


// Doplne tak, aby se funkcional xyz() zavolal presne 2100 krat
int counter = 0;
void xyz(int *c) {
    (*c)++;
}

void callxyz() {

    for (int i = 0; i < 70; i++) {
        int j = 0;
        do
        {
            if (j > 59) xyz(&counter); // ma byt 59
            j++;
        } while (j < 90);
        
    }

    printf("%d\n", counter);
}

// Napiste definici funkce filecpy, ktera prijima 3 argumenty; vstupni soubor, vystupni soubor a q.
// funkce ma zkopirovat vstupni soubor do vystupniho a pri tom vynechat vsechny znaky urcene parametrem q

int filecpy(const char* vstup, const char *vystup, int q) {
    FILE* src = fopen(vstup, "r");
    FILE* out = fopen(vystup, "w");
    printf("q=%c\n", q);

    int c = getc(src);
    while (c != EOF) {
        if (c != q) {
            fputc(c, out);
        }
        c = getc(src);
    }

    fclose(src);
    fclose(out);
    return 0;
}

void callFilecpy() {
    const char input[] = "input.txt";
    const char output[] = "output.txt";
    filecpy(input, output, 'i');
}

// Napiste definici funkce f122, ktera prijme celociselny argument N a pomoci rekurze vytiskne N*1, 2N*2,...
// pri volani f122(3) by output mel vypadat 111222222

int nonrecursivef122(int N) {

    if (N > 0) {
        for (int i = 0; i < N; i++) {
            printf("1");
        }
        for (int i = 0; i < 2 * N; i++) {
            printf("2");
        }
    }

    printf("\n");
    return 0;

}

void f122(int tisk, int n) {
    if (tisk == n){
        return;
    }

    for (int i = 0; i < n * tisk; i++) {
        printf("%d", tisk);
    }

    f122(tisk+1, n);
    
}


// Neco se stromem, prochazeni, vyhleda uzel s klicem k ve s, jinak vrati NULL
// definice stromu:

struct Uzel
{
    int klic;
    Uzel *levy;
    Uzel *pravy;
};



// Uzel *search(Uzel *s, key k);

int main() {

    // callTab();
    // callPocet();
    // callxyz(); // 2100
    // callFilecpy();
    f122(1, 4);

    return 0;
}