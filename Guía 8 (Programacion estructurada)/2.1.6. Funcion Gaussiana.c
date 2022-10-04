#include <stdio.h>
#include <math.h>
#define E 2.71828

void leerX(double *x);

int main(){
	double x, media, desvEstandar, fx;
	int i;
	printf("Ingrese la media y la desviación estandar: ");
	scanf("%lf %lf", &media, &desvEstandar);
	for (i=1; i==1; ){
		leerX(&x);
		if (x!=-999.999){
			fx=pow(E, -((pow(x-media, 2))/(2*desvEstandar*desvEstandar)));
			printf("x=%lf, f(x)=%lf\n", x, fx);
		}
		else{
			i=0;
		}
	}
	printf("Fin de la evaluación.");
	return 0;
}

void leerX(double *x){
	printf("Ingrese el valor de x: ");
	scanf("%lf", x);
}
