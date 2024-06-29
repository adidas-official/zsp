#include <iostream>


void ex1() {
    int* pc; // Ukazatel na nejakou adresu
    int c; // hodnota
    c = 5; // prirazeni hodnoty, je ulozena na nejake adrese v pameti pocitace
    pc = &c; // Adresa, na ktere je ulozena promena `c`, se priradi ukazateli `pc` 
    printf("%d na adrese %p\n", *pc, &c); // Output: 5 na adrese 0x7fffffffd2cc
}

void ex2() {
    int* pc, c;
    c = 5;
    pc = &c;
    c = 1;
    printf("%d\n", c);
    printf("%d\n", *pc);
}

void ex3() {
    int* pc, c;
    c = 5;
    pc = &c;
    *pc = 1;

    printf("%d\n", c);
    printf("%p\n", pc);
}

void workingEx() {
    int* pc, c;
    c = 22;
    printf("Adresa `c`: %p\n", &c);
    printf("Hodnota `c`: %d\n", c);

    pc = &c;
    printf("Adresa `c`: %p\n", pc);
    printf("Hodnota `c`: %d\n", *pc);

    *pc = 1;
    printf("Adresa `c`: %p\n", pc);
    printf("Hodnota `c`: %d\n", *pc);

}

void testEx(int *pc) {
    printf("adresa `c`: %p\n", pc);
    printf("hodnota `c`: %d\n", *pc);

}

int main() {

    int c;
    c = 10;
    int* pc;
    pc = &c;

    testEx(pc);
    
}