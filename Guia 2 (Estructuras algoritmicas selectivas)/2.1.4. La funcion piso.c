#include <stdio.h>
#include <math.h>

int main(){
	double x;
	printf("Ingrese el numero real: ");
	scanf("%lf", &x);
	if (x>=0)
		printf("El numero es %.lf", trunc(x));
	else {
		int parteEntera = x;
		double parteFraccionaria = x - parteEntera;
		if (parteFraccionaria!=0)
			printf("El numero piso es %d", parteEntera-1);
		else 
			printf("El numero piso es %d", parteEntera);
	}
	return 0;
}
