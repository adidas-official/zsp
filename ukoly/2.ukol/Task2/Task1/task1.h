#pragma once

#include "catch.hpp"

extern char nazev_ukolu[255];
extern double a;   // zrychlen�
extern double v0;  // po��te�n� rychlost
extern double v1;  // v�sledn� rychlost
extern double t0;  // po��te�n� �as
extern double t;   // kone�n� �as
extern double s;   // dr�ha
extern double v;   // rychlost	
extern double pomer;   // pom�r rychlost�
extern int typPohybu; // typ pohybu

int kinematika(double v0, double v1, double t0, double t);  
// inicializace funkce kinematika, ktera je volana v mainu
int intro(float v0_p, float v1_p, float t0_p, float t_p);
// zadani dat
void note();
// jen predstaveni
