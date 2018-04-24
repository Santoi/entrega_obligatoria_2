#include <stdio.h>
#include <stdlib.h>
#define NO_ESTA -1
#define INIC_VEC 0
#define FIN_VEC 5
#define MSJ_POS_ELEM "El elemento esta en la posicion"
#define MSJ_ELEM_INEX "El elemento no se encuentra en el vector"
#define MSJ_INGRESO "Ingrese un numero a buscar"

int busqueda_binaria (const int vec [], int elem, size_t izq, size_t der) {
 int medio = (izq + der) / 2;
 
 if (der < izq)
  return NO_ESTA;
 
 if (elem < vec [medio])
  der = medio - 1;
 else if (elem > vec [medio])
  izq = medio + 1;
 else
  return medio;
 
 return busqueda_binaria (vec, elem, izq, der);
}
  

int main (void)
{
 int vector [] = {1, 3, 5, 7, 8, 9};
 int elem, pos;
 
 puts (MSJ_INGRESO);
 
 if (scanf ("%d", &elem) != 1)
  return EXIT_FAILURE; 
 
 if ((pos = busqueda_binaria (vector, elem, INIC_VEC, FIN_VEC)) < 0)
  printf ("%s\n", MSJ_ELEM_INEX);
 else
  printf("%s %d\n", MSJ_POS_ELEM, pos);
   
 return EXIT_SUCCESS;
}
