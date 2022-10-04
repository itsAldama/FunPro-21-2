#include <stdio.h>

int main(){
	double longOnda, velPropagacion, frecuenciaLA=440;
	printf("Ingrese la velocidad de propagacion en cada caso: ");
	scanf("%lf", &velPropagacion);
	longOnda = velPropagacion/frecuenciaLA;
	printf("La longitud de onda es: %lf", longOnda);
	
	return 0;
}
