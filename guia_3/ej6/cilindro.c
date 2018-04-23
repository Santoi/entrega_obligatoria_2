#include <math.h>

double cilindro_diametro (double radio, double altura) {
 return radio * 2;
}

double cilindro_circunferencia (double radio, double, altura) {
 return M_PI * radio * 2;
}

double cilindro_base (double radio, double altura) {
 return M_PI * radio * radio;
}

double cilindro_volumen (double radio, double altura) {
 return M_PI * radio * radio * altura;
}
