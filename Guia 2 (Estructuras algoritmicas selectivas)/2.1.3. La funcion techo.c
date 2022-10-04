#include <stdio.h>
#include <math.h>

int main() {
	double x;
	printf("Ingrese el numero real: ");
	scanf("%lf", &x);
	int parteEntera = trunc(x);
	double parteFraccionaria = x - parteEntera;
	if (parteFraccionaria>0) {
		int techo = parteEntera + 1;
		printf("El techo es %d", techo);
	}
	else
		printf("El numero es %d", parteEntera); 
}
