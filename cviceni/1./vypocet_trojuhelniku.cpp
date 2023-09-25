#include <iostream>
#include <math.h>
#include "ModulTrojuhelnik.h"  // kouknout se na tvorbu modulu a obecne typy

int main() 
{
    double a, b, c;
    double obvod;
    double obsah;
    int jeRovnostranny, jeRovnoramenny;
    double obvod_polovina;
    

    printf("Strany trojuhelnika\n");
    printf("Zadej stranu a\n");
    scanf("%lf", &a);
    printf("Zadej stranu b\n");
    scanf("%lf", &b);
    printf("Zadej stranu c\n");
    scanf("%lf", &c);
    
    obvod = obvod_trojuhelnika(a, b, c);
    obsah = obsah_trojuhelnika(a, b, c);  // dve mala a jedno vysoke -> NaN, proc?

    jeRovnoramenny = ((a == b) && (b == c) && (c == a));
    jeRovnostranny = (!jeRovnostranny) && ((a == b) || (b == c) || (c == a));

    printf("a = %lf, b = %lf, c = %lf\n", a, b, c);
    printf("obvod = %lf\n", obvod);
    printf("obsah = %lf\n", obsah);
    
    printf("rovnoramenny = %s\n", (jeRovnoramenny == 0) ? "Ne" : "Ano");
    printf("rovnostranny = %s\n", (jeRovnostranny == 0) ? "Ne" : "Ano");

}