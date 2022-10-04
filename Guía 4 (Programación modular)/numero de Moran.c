#include <stdio.h>
#include <math.h>
void escribirNumero(){
	printf("Ingrese el número a evaluar: ");
}

void cantidadCifras(int numero, int *cantidadCifras){
	*cantidadCifras=0;
	while(numero!=0){
		numero = numero/10;
		(*cantidadCifras)++; 
	}
}

void verificarEsMoran(int numero, int *esMoran){
	int sumaCifras = 0;
	int cantCifras;
	cantidadCifras(numero, &cantCifras);
	int cifra;
	int numeroCopia = numero;
	while(numeroCopia!=0){
		cifra = numeroCopia % 10;	
		sumaCifras = sumaCifras + cifra;
		numeroCopia = numeroCopia/10;
	}
	int division = numero/sumaCifras;
	int esPrimo;
	int i=2;
	while (i<numero){
		if (division%i != 0){
			esPrimo = 0;
		}
		else{
			esPrimo = 1;
		}
		i++;
	}
	(*esMoran) = esPrimo==1;
	if (*esMoran==1){
		printf("El número es Moran\n");
		printf("La suma de digitos es %d y el resultado de la division es %d\n", sumaCifras, division);
	}
	else{
		printf("El número no es Moran\n");
		printf("La suma de digitos es %d y el resultado de la division es %d\n", sumaCifras, division);
	}
}

int main(){
	int numero, esMoran;
	escribirNumero();
	scanf("%d", &numero);
	verificarEsMoran(numero, &esMoran);
	return 0;
}
