#include <stdio.h>
#include <math.h>

int main(){
	double x1, y1, x2, y2, distEuclidiana;
	printf("Ingrese la coordenadas del punto 1 (x1, y1) y del punto 2 (x2, y2): ");
	scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
	distEuclidiana = sqrt((pow(x2-x1, 2)) + pow(y2-y1, 2));
	printf("La distancia euclidiana es: %lf", distEuclidiana);
	return 0;
}
