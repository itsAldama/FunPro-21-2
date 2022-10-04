#include<stdio.h>

int main() {
	double numero;
	printf("Ingrese el número: ");
	scanf("%lf", &numero);
	if (numero>=0)
		printf("El número es %.1lf", numero);
	if (numero<0) {
		double absnumero = -numero;
		printf("El numero es %lf", absnumero);
	}
}
