#include <stdio.h>
#include <math.h>
#define DIEZ 10


int cantidadCifras(numero){
	int cantidadCifras = trunc(log10(numero))+1;
	return cantidadCifras;
}

void verificarMoranSumaYDivision(int numero, int *sumaCifras, int *division, int *esPrimo){
	int cantidadDigitos=cantidadCifras(numero);
	int numeroCopia=numero;
	*sumaCifras=0;
	int cifra;
	while (numeroCopia!=0){
		cifra = numeroCopia%DIEZ;
		(*sumaCifras) += cifra;
		numeroCopia /= DIEZ;
	}
	*division = numero/(*sumaCifras);
	int i=2;
	int cantidadDivisores=2;
	while (i<(*division)){
		if ((*division)%i==0){
			cantidadDivisores++;
		}
		i++;
	}
	(*esPrimo)=cantidadDivisores==2;
}

void mostrarSalida(int esPrimo){
	if (esPrimo){
		printf("El numero es Moran");
	}
	else{
		printf("El número no es Moran");
	}
}

int main(){
	int numero, esPrimo, division, sumaCifras;
	printf("Ingrese el número a evaluar: ");
	scanf("%d", &numero);
	verificarMoranSumaYDivision(numero, &sumaCifras, &division, &esPrimo);
	mostrarSalida(esPrimo);
	printf("\nLa suma de dígitos es %d y el resultado de la división es %d", sumaCifras, division);
	return 0;
}


