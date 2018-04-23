#include <stdio.h>
#include <stdlib.h>
#include "cant_digitos.h"

/* esta funcion no sirve para numeros con punto flotante */
size_t cant_digitos (int num) {
	static size_t i = 1;
	if (!(num /= 10))
		return i;
 i++;
	cant_digitos (num);
}

int main (void)
{
	int num, c;
 puts (MSJ_INGRESO);
	if (scanf ("%d", &num) != 1)
		return EXIT_FAILURE;
	while ((c = getchar ()) != EOF && c != '\n')
  ;
	printf ("%s: %lu\n", MSJ_CANT_DIGITOS, cant_digitos (num));
	return EXIT_SUCCESS;
}
	
