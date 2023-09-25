#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>

int main()
{
    float r;
    float obvod;
    float obsah; 
    const float PI = 3.14;

    printf("Zadej r: ");
    scanf("%f", &r);
    
    if (r > 0)
    {

        obvod = 2 * PI * r;
        obsah = PI * r * r;

        printf("PI = %.2f\n", PI);
        printf("r = %.2f\n", r);
        printf("obvod = %.2f\n", obvod);
        printf("obsah = %.2f\n", obsah);

    }
    else

        printf("Chyba hodnoty\n");
    


}