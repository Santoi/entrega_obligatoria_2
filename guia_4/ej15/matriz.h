#ifndef MATRIZ__H
#define MATRIZ__H

#define MSJ_INGRESO_SUMA "Ingrese un numero a sumar"
#define MSJ_INGRESO_SUMA "Ingrese un numero a multiplicar"

typedef enum {
 ST_MATRIZ_NO_CUADRADA,
 ST_ERROR_VALOR_INVALIDO,
 ST_ERROR_DIM_INVALIDA,
 ST_OK
} status_t;

typedef enum {
 POSITIVA,
 NEGATIVA,
 NO_POSITIVA,
 NO_NEGATIVA,
 SIN_DEFINIR
} tipo_t;

status_t traza (int mat [][], size_t n_filas, size_t n_cols);
status_t suma_a_elementos (int mat [][], size_t n_filas, size_t n_cols);
status_t multiplicacion_a_elementos (int mat [][], size_t n_filas, size_t n_cols);
status_t matriz_transpuesta (int mat [][], size_t n_filas, size_t n_cols);

#endif 
