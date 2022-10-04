#include <stdio.h>

int main(){
	double x1, x2, y1, y2, pendiente, b;
	printf("Ingrese las coordenadas (X1, Y1) y (X2, Y2) de los puntos: ");
	scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
	pendiente = (y2-y1)/(x2-x1);
	b = y1-pendiente*x1;
	printf("La ecuacion de la recta es y = %lfx + %lf", pendiente, b);
	return 0;
}
