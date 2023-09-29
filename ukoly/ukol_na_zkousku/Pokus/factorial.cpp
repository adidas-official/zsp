#include "factorial.hpp"
#include <iostream>

int factorial(int n) {
    if (n < 2) {
        return 1;
    }

    if (n > 1) {
        return n * factorial(n-1);
    }
    else
    {
        return 0;
    }
}

int factorial2(int n) {
    if (n < 2) {
        return 1;
    }

    int total;
    total = 1;

    for (int j = n; j > 1; j--) {
        total = total * j;
    }
    return total;
}

// int main() {
//     int a;
//     int fac1;
//     int fac2;

//     printf("Zadejte cislo:\n");
//     scanf("%i", &a);

//     fac1 = factorial(a);
//     fac2 = factorial2(a);

//     printf("funkce Factorial(%i) rekurze: %i\n", a, fac1);
//     printf("funkce Factorial2(%i) for loop: %i\n", a, fac2);
// }