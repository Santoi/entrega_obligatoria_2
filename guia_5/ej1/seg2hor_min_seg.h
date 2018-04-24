#ifndef SEG2HOR_MIN_SEG__H
#define SEG2HOR_MIN_SEG__H

#define SEGXMIN 60
#define MINXHORA 60
#define MAX_STR 10
#define MSJ_INGRESO "Ingrese una cantidad de segundos"
#define MSJ_ERROR_PREFIJO "Error"
#define MSJ_ENTRADA_INVALIDA "entrada invalida"
#define MSJ_PUNTERO_NULO "puntero nulo"
#define HORAS "Horas"
#define MINUTOS "Minutos"
#define SEGUNDOS "Segundos"

typedef enum {
	ST_OK,
	ST_ERROR_PUNTERO_NULO
} status_t;

status_t seg2hor_min_seg (int * horas, int * min, int * seg);

#endif
