#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

void ukazka1() {
    int r1, r2;

    r1 = 2023;
    r2 = r1 + 1;
    
    printf("%d/%d", r1, r2);
}

void ukazka2() {

    int pocet_procent;
    pocet_procent = 75;

    // printf("%d%%\n"); ???
}

void ukazka3() {
    int d, m, r;
    scanf("%d%d%d", &d, &m, &r);
    printf("%02d.%02d.%04d", d, m, r);

}

void ukazka4() {
    int i;
    const int POCET_PISMEN = 'z' - 'a' + 1;
    char male_pismeno;

    printf("DEC\tznak\tHEX\n");

    for (i = 'A'; i < 'Z'; i++) 
    {
        male_pismeno = (char)(i + POCET_PISMEN);
        printf("%d\t%c\t%X\t%c \n", i, i, i, male_pismeno);

    }
}

int main()
{
    ukazka4();
}