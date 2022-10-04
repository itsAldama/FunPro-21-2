#include <stdio.h>
#include <math.h>

int main(){
	double sumaErroresParciales, errorParcial, sumaParcial;
	int i, cantidadTerminos;
	printf("Ingrese cantidad de términos: ");
	scanf("%d", &cantidadTerminos);
	i=1;
	errorParcial=0;
	sumaParcial=0;
	printf("Sumas parciales\n");
	while (i<=cantidadTerminos){
		sumaParcial+=(double)1/(pow(2, i));
		errorParcial=1-sumaParcial;
		printf("S%d=%.10lf, error parcial=%.10lf\n", i, sumaParcial, fabs(errorParcial));
		i++;
	}
	printf("Suma total = %.10lf, error absoluto=%.10lf\n", sumaParcial, fabs(errorParcial));
	if (fabs(errorParcial)<0.001){
		printf("La serie converge");
	}
	return 0;
}
