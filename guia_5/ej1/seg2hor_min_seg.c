#include "seg2hor_min_seg.h"
#include <stdio.h>
#include <stdlib.h>

status_t seg2hor_min_seg (int * horas, int * min, int * seg) {
 if (!horas || !min || !seg)
  return ST_ERROR_PUNTERO_NULO;
 
 *min = *seg / SEGXMIN;
 *horas = *min / MINXHORA;
 *min %= MINXHORA;
 *seg %= SEGXMIN;
 
 return ST_OK;
}

int main (void)
{
 char segundos [MAX_STR];
 int seg, min, horas;
 status_t st;
 char * endp;
 
 puts (MSJ_INGRESO);
 if (!fgets (segundos, MAX_STR, stdin))
  return EXIT_FAILURE;
 seg = strtol (segundos, &endp, 10);
 if (*endp && *endp != '\n') {
  fprintf (stderr, "%s: %s\n", MSJ_ERROR_PREFIJO, MSJ_ENTRADA_INVALIDA);
  return EXIT_FAILURE;
 }
 if (seg < 0) {
  fprintf (stderr, "%s: %s\n", MSJ_ERROR_PREFIJO, MSJ_ENTRADA_INVALIDA);
  return EXIT_FAILURE;
 }
 if ((st = seg2hor_min_seg (&horas, &min, &seg)) != ST_OK) {
  fprintf (stderr, "%s: %s\n", MSJ_ERROR_PREFIJO, MSJ_PUNTERO_NULO);
  return st;
 }
 printf ("%s: %d\n%s: %d\n%s: %d\n", HORAS, horas, MINUTOS, min, SEGUNDOS, seg);
 
 return EXIT_SUCCESS;
}
  
 
