#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>

int main()
{
    double a, b; 
    double o, obsah;

    printf("Zadej stranu 'a': ");
    scanf("%lf", &a);
    
    printf("Zadej stranu 'b': ");
    scanf("%lf", &b);
    
    if (a > 0 && b > 0)
    {

        o = (a+b) * 2;
        obsah = a*b;

        printf("Strana a = %.2f, b = %.2f\n", a, b);
        printf("obvod = %.2f\n", o);
        printf("obsah = %.2f\n", obsah);

    }
    else

        printf("Chyba hodnoty\n");
    


}