#include "ModulTrojuhelnik.h"

double obsah_trojuhelnika(double a, double b, double c)
{
    double obvod_polovina = obvod_trojuhelnika(a, b, c) / 2;
    //double obsah = sqrt(obvod_polovina * (obvod_polovina - a) * (obvod_polovina - b) * (obvod_polovina - c));
    //return obsah;
    return sqrt(obvod_polovina * (obvod_polovina - a) * (obvod_polovina - b) * (obvod_polovina - c));
}

double obvod_trojuhelnika(double a, double b, double c)
{
    /*
    double obvod;
    obvod = a + b + c;
    return obvod;*/
    return a + b + c;
}

int test_rovnostranny_trojuhelnik(double a, double b, double c)
{
    return ((a == b) && (b == c) && (c == a)); //0,1
}

int test_rovnoramenny_trojuhelnik(double a, double b, double c)
{
    return (!test_rovnostranny_trojuhelnik(a, b, c) && ((a == b) || (b == c) || (c == a));
}
