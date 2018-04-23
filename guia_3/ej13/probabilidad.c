#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "probabilidad.h"

int probabilidad_a (int x) {
 x %= 10;
 if (x < 10 && x > 7)
  return 0;
 else
  return 1;
}

int probabilidad_b (int x) {
 x %= 100;
 if (x < 100 && x > 89)
  return 3;
 else if (x < 90 && x > 35)
  return 5;
 else
  return 9;
}

void probabilidad_c (int x) {
 if (!(x % 2))
  putchar ('H');
 else
  putchar ('T');
}

void probabilidad_d (int x) {
 caras_dado_t cara = x % 6 + 1;
 switch (cara) {
  case UNO:
   puts ("|     |");
   puts ("|  *  |");
   puts ("|     |");
   break;
  case DOS:
   puts ("|    *|");
   puts ("|     |");
   puts ("|*    |");
   break;
  case TRES:
   puts ("|    *|");
   puts ("|  *  |");
   puts ("|*    |");
   break;
  case CUATRO:
   puts ("|*   *|");
   puts ("|     |");
   puts ("|*   *|");
   break;
  case CINCO:
   puts ("|*   *|");
   puts ("|  *  |");
   puts ("|*   *|");
   break;
  case SEIS:
   puts ("|*   *|");
   puts ("|*   *|");
   puts ("|*   *|");
   break;
 }
}

int main (void)
{
 int x;
 srand (time (NULL));
 x = rand ();
 
 probabilidad_a (x);
 probabilidad_b (x);
 probabilidad_c (x);
 probabilidad_d (x);
  
 return EXIT_SUCCESS;
}
