#include<stdio.h>

int main() {
	double numero;
	printf("Ingrese el n�mero: ");
	scanf("%lf", &numero);
	if (numero>=0)
		printf("El n�mero es %.1lf", numero);
	if (numero<0) {
		double absnumero = -numero;
		printf("El numero es %lf", absnumero);
	}
}
