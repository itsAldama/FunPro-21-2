#include <stdio.h>

int main(){
	int n, denominador;
	printf("Ingrese el primer valor de la serie y el denominador: ");
	scanf("%d %d", &n, &denominador);
	double sumaSuperior = ((n+4)*(n+5)*(2*(n+4)+1))/6;
	double sumaInferior = ((n-1)*(n)*(2*(n-1)+1))/6;
	double resultadoOperacion = (sumaSuperior - sumaInferior)/denominador;
	printf("El resultado de la operacion es: %lf", resultadoOperacion);
	return 0;
}
