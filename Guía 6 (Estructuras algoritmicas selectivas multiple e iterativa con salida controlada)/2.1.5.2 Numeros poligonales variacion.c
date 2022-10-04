#include <stdio.h>
#define TRIANGULAR 3
#define OCTOGONAL 8
#define PENTAGONAL 5

int verificarPoligono(int numero, int numeroDeLados);

int main(){
	int numero, numeroDeLados, esPoligonal;
	printf("Ingrese un numero: ");
	scanf("%d", &numero);
	printf("Ingrese el n�mero de lados: ");
	scanf("%d", &numeroDeLados);
	esPoligonal=verificarPoligono(numero, numeroDeLados);
	if (esPoligonal==TRIANGULAR){
		printf("Se puede representar como n�mero triangular.\n");
	}
	else if (esPoligonal==OCTOGONAL){
		printf("Se puede representar como n�mero octagonal.\n");
	}
	else if (esPoligonal==PENTAGONAL){
		printf("Se puede representar como n�mero pentagonal.\n");
	}
	else{
		printf("No se puede representar como n�mero triangular, pentagonal ni octagonal.\n");
	}
	return 0;
}

int verificarPoligono(int numero, int numeroDeLados){
	if (numeroDeLados==3){
		return 3;
	}
	else if (numeroDeLados==5){
		return 5;
	}
	else if (numeroDeLados==8){
		return 8;
	}
	else{
		return 0;
	}
}
