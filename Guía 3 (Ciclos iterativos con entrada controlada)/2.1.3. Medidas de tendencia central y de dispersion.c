#include <stdio.h>
#include <math.h>

int main(){
	int i, cantidadNumeros, x, suma, multiplicacion, minValor, maxValor;
	double mediaAritmetica, mediaGeometrica, mediaArmonica, varianza, desviacionEstandar, sumaNumeradores, numerador, restaXCuadrado, sumaRestasCuadrado;
	printf("Ingrese la cantidad de números a procesar: ");
	scanf("%d", &cantidadNumeros);
	i=1;
	suma=0;
	multiplicacion=1;
	sumaNumeradores=0;
	sumaRestasCuadrado=0;
	while (i<=cantidadNumeros){
		printf("Ingrese valor %d de la distribución: ", i);
		scanf("%d", &x);
		suma+=x;
		mediaAritmetica = (double)suma/cantidadNumeros;
		multiplicacion*=x;
		mediaGeometrica = pow(multiplicacion, (double)1/cantidadNumeros);
		numerador=(double)1/x;
		sumaNumeradores+=numerador;
		mediaArmonica = (double)cantidadNumeros/sumaNumeradores;
		if (i==1){
			minValor=x;
			maxValor=x;
		}
		if (x>maxValor){
			maxValor=x;
		}
		if (x<minValor){
			minValor=x;
		}
		sumaRestasCuadrado+=pow(x,2);
		i++;
	}
	varianza = sumaRestasCuadrado/cantidadNumeros - pow(mediaAritmetica, 2);
	desviacionEstandar = sqrt(varianza);
	printf("\nLa media aritmética es: %lf\n", mediaAritmetica);
	printf("La media geométrica es: %lf\n", mediaGeometrica);
	printf("La media armónica es: %lf\n", mediaArmonica);
	printf("Rango: [%d..%d]\n", minValor, maxValor);
	printf("La varianza es: %lf\n", varianza);
	printf("La desviación estándar es: %lf", desviacionEstandar);
	return 0;
}
