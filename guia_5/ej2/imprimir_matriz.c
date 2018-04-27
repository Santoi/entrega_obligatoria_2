#include "imprimir_matriz.h"
#include <stdio.h>
#include <stdlib.h>

void imprimir_matriz (int mat [][COLS], int filas, int cols) {
 int (* ptr2vector) [COLS];
 /*int * ptr;*/
 size_t i, j;
 
 ptr2vector = mat;
 /*ptr = *ptr2vector;*/
 
 for (j = 0; j < filas; j++) {
  for (i = 0; i < cols; i++)
   printf ("%d\n", (*ptr2vector) [i]);
  *ptr2vector++;
 }
}
 
int main (void)
{
 int mat [FILAS][COLS] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
 
 
 
 imprimir_matriz (mat, FILAS, COLS);
 
 return EXIT_SUCCESS;
}

