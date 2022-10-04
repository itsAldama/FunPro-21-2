#include <stdio.h>
#include <math.h>

int main(){
	double x, senh;
	printf("Ingrese el valor de x: ");
	scanf("%lf", &x);
	senh = (exp(x) - exp(-x))/2;
	printf("El seno hiperbolico es: %lf", senh);
	return 0;
}
