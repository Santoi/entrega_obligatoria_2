#include <stdio.h>

typedef enum {
 TRUE,
 FALSE
} bool_t;

bool_t busqueda_binaria (const int vec [], size_t len, int elem) {
 int vec_izq [5], vec_der [5];
 size_t i;
 printf ("%d\n", vec [len / 2]);
 if (vec [len / 2] == elem)
  return TRUE;
 if (len == 2) {
  if (vec [0] == elem)
   return TRUE;
  else
   return FALSE;
 }
 if (len == 1)
  return FALSE;
  
 for (i = 0; i < len / 2; i++)
  vec_izq [i] = vec [i];
 i++;
 while (i < len) {
  vec_der [i] = vec [i];
  i++;
 }
 
 if (vec [len / 2] < elem) {
  len /= 2;
  len -= 1;
  busqueda_binaria (vec_der, len, elem);
 }
 else if (len % 2) {
  len /= 2;
  len -= 1;
  busqueda_binaria (vec_izq, len, elem);
 }
 else {
  len /= 2;
  busqueda_binaria (vec_izq, len, elem);
 }
}

int main (void)
{
 int vector [] = {1, 3, 5, 7, 8, 9};
 size_t len = 6;
 int elem;
 
 if (scanf ("%d", &elem) != 1)
  return 1;
 
 if (busqueda_binaria (vector, len, elem) == TRUE)
  puts ("true");
 else
  puts ("false");
  
 return 0;
}
