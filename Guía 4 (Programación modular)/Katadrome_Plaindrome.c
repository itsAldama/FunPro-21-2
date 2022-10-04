#include <stdio.h>
#include <math.h>

void escribirNumero(){
	printf("Ingrese el número a evaluar: ");
}

int iterativaYSelectiva(int *numero){
	int cantidadCifras, i, primero, segundo, n, validarKatadromo;
	scanf("%d", numero);
	cantidadCifras = trunc(log10((*numero)))+1;
	i=1;
	n=cantidadCifras-1;
	while (cantidadCifras>=i){
		primero = *numero / (int)pow(10, n);
		*numero = *numero % (int)pow(10,n);
		segundo = *numero / (int)pow(10, n);
		if (primero>segundo){
			validarKatadromo=1;
		}
		else{
			validarKatadromo=0;
		}
		i++;
	}
	if (validarKatadromo){
		printf("El numero es Katadrome");
	}
	else{
		printf("El numero no es Katadrome");
	}
	return validarKatadromo;	
}



int main(){
	int numero, esKatadromo;
	escribirNumero();
	esKatadromo = iterativaYSelectiva(&numero);
	printf("el nuevo numero: %d", numero);
	
	return 0;
}
