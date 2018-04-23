#include "espectral.h"
#include <stdio.h>
#include <stdlib.h>
#include "types.h"

int main (void)
{
 float temp;
 espectral_t tipo_estrella;
 int c;
 
 puts (MSJ_INGRESO);

 if (scanf ("%f", &temp) != 1) {
  fprintf (stderr, "%s\n", MSJ_DATO_INVALIDO);
  return EXIT_FAILURE;
 }

 while ((c = getchar ()) != '\n' && c != EOF)
    ;
 
 if (temp > M && temp < K)
  tipo_estrella = M;
 else if (temp > K && temp < G)
  tipo_estrella = K;
 else if (temp > G && temp < F)
  tipo_estrella = G;
 else if (temp > F && temp < A)
  tipo_estrella = F;
 else if (temp > A && temp < B)
  tipo_estrella = A;
 else if (temp > B && temp < O)
  tipo_estrella = B;
 else if (temp > O && temp < O_MAX)
  tipo_estrella = O;
 
 switch (tipo_estrella) {
  case M:
   printf ("%s %s\n", MSJ_ESTRELLA, COLOR_ROJO);
   break;
  case K:
   printf ("%s %s\n", MSJ_ESTRELLA, COLOR_NARANJA);
   break;
  case G:
   printf ("%s %s\n", MSJ_ESTRELLA, COLOR_AMARILLO);
   break;
  case F:
   printf ("%s %s\n", MSJ_ESTRELLA, COLOR_BLANCO_AMARILLENTO);
   break;
  case A:
   printf ("%s %s\n", MSJ_ESTRELLA, COLOR_BLANCO);
   break;
  case B:
   printf ("%s %s\n", MSJ_ESTRELLA, COLOR_BLANCO_AZULADO);
   break;
  case O:
   printf ("%s %s\n", MSJ_ESTRELLA, COLOR_AZUL);
   break;
  default:
   printf ("%s\n", MSJ_SIN_CLASIFICACION);
 }
 return EXIT_SUCCESS;
}



















