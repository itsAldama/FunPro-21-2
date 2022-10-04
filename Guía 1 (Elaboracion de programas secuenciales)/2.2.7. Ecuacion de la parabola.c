#include <stdio.h>

int main(){
	int a, b, c, verificarPertenecenParabola, x1, x2, y1, y2, x3, y3;
	printf("Ingrese los valores de a, b y c: ");
	scanf("%d %d %d", &a, &b, &c);
	printf("Ingrese los valores de los puntos 1,2 y 3: ");
	scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);
	verificarPertenecenParabola = (y1 == (a*x1*x1 + b*x1 + c)) && (y2 == (a*x2*x2 + b*x2 + c)) && (y3 == (a*x3*x3 + b*x3 + c));
	printf("Los puntos pertenecen a la parabola? %d", verificarPertenecenParabola);
	return 0;
}
