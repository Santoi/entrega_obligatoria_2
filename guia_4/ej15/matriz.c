#include "matriz.h"
#include <stdio.h>


status_t traza (int mat [][], size_t n_filas, size_t n_cols) {
 size_t i;
 int traza = 0;
 if (n_cols != n_filas)
  return ST_MATRIZ_NO_CUADRADA;
 for (i = 0; i < n_cols; i++)
  traza += mat [i][i];
  
 return ST_OK;
}

status_t suma_a_elementos (int mat [][], size_t n_filas, size_t n_cols) {
	int num, c;
	size_t i, j;
	
	puts (MSJ_INGRESO_SUMA);
	if (scanf ("%d", &num) != 1)
	 return ST_ERROR_VALOR_INVALIDO;
	while ((c = getchar ()) != EOF && c != '\n')
	 ;
	for (i = 0; i < n_filas; i++)
	 for (j = 0; j < n_cols; j++)
	  mat [i][j] += num;
	  
	return ST_OK;
}

status_t multiplicacion_a_elementos (int mat [][], size_t n_filas, size_t n_cols) {
	int num, c;
	size_t i, j;
	
	puts (MSJ_INGRESO_MULTIPLICACION);
	if (scanf ("%d", &num) != 1)
	 return ST_ERROR_VALOR_INVALIDO;
	while ((c = getchar ()) != EOF && c != '\n')
	 ;
	for (i = 0; i < n_filas; i++)
	 for (j = 0; j < n_cols; j++)
	  mat [i][j] *= num;
	  
	return ST_OK;
}

status_t matriz_transpuesta (int mat [][], size_t n_filas, size_t n_cols) {
 int aux;
 size_t i, j;
 
 for (i = 0; i < n_filas; i++)
	 for (j = 0; j < n_cols; j++) {
	  aux = mat [i][j];
	  mat [i][j] = mat [j][i];
	  mat [j][i] = aux;
		}
		
	return ST_OK;
} 

tipo_t definir_tipo_matriz (int mat [][], size_t n_filas, size_t n_cols) {
	size_t i, j, positiva, no-negativa, negativa, no-positiva;

 for (i = 0; i < n_filas; i++)
	 for (j = 0; j < n_cols; j++) {
	  if (mat [i][j] > 0)
	   positiva = 1;
	  else if (mat [i][j] < 0)
	   negativa = 0;
	  else {
				no-positiva = 1;
				no-negativa = 1;
			}
		}
 if (positiva == 1) {
		if (negativa == 1)
		 return SIN_DEFINIR;
		if (no-negativa == 1)
		 return NO_NEGATIVA;
		return POSITIVA;
	}
	if (negativa == 1) {
		if (no-positiva == 1)
		 return NO_POSITIVA;
		return NEGATIVA;
	}
}

status_t determinante_2x2 (int mat [][], size_t n_filas, size_t n_cols, int * det) {
 
 if (n_cols != n_filas || n_cols != 2)
  return ST_ERROR_DIM_INVALIDA;
 
 (*det) = mat [0][0] * mat [1][1] - mat [0][1] * mat [1][0];
 
 return ST_OK;
}

status_t determinante_3x3 (int mat [][], size_t n_filas, size_t n_cols, int * det) {
	
	if (n_cols != n_filas || n_cols != 3)
	 return ST_ERROR_DIM_INVALIDA;
	
 (*det) = mat [0][0] * (mat [1][1] * mat [2][2] - mat [1][2] * mat [2][1]);
 (*det) -= mat [1][0] * (mat [0][1] * mat [2][2] - mat [2][1] * mat [0][2]);
 (*det) += mat [2][0] * (mat [0][1] * mat [1][2] - mat [1][1] * mat [0][2]);
 
 return ST_OK;
}
















