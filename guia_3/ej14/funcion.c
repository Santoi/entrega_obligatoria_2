#include <stdio.h>
#include <stdlib.h>

void funcion (void) {
 static int x = 0;
 x++;
 printf ("%d\n", x);
}

int main (void)
{
 funcion ();
 funcion ();
 funcion ();
 funcion ();
 funcion ();
 
 return EXIT_SUCCESS;
}

/* por la ejecucion del programa puedo deducir que que la variable sea
 * "static" hace que se guarde el valor de la variablo aunque la funcion
 * en donde está implementada termine */
