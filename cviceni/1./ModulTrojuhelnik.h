#include <math.h>
#include <iostream>

double obvod_trojuhelnika(double a, double b, double c)
{
    return a + b + c;
}

double obsah_trojuhelnika(double a, double b, double c)
{
    double obvod_polovina;
    double obsah;
    obvod_polovina = obvod_trojuhelnika(a, b, c) / 2;

    obsah = sqrt(obvod_polovina * (obvod_polovina - a) * (obvod_polovina - b) * (obvod_polovina - c));
    return obsah;
}