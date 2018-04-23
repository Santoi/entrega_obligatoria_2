#include "cilindro.h"
#include <stdlib.h>
#include <stdio.h>

double cilindro_diametro (double radio, double altura) {
 return radio * 2;
}

double cilindro_circunferencia (double radio, double altura) {
 return M_PI * radio * 2;
}

double cilindro_base (double radio, double altura) {
 return M_PI * radio * radio;
}

double cilindro_volumen (double radio, double altura) {
 return M_PI * radio * radio * altura;
}

int main (void)
{
 double radio, alt;
 int c;
 puts (MSJ_INGRESO);
 if (scanf ("%lf %lf", &radio, &alt) != 2)
  return EXIT_FAILURE;
 while ((c = getchar ()) != EOF && c != '\n')
  ;
 printf ("Diametro: %f\n", cilindro_diametro (radio, alt));
 printf ("Circunferencia: %f\n", cilindro_circunferencia (radio, alt));
 printf ("Base: %f\n", cilindro_base (radio, alt));
 printf ("Volumen: %f\n", cilindro_volumen (radio, alt));
 
 return EXIT_SUCCESS;
}
