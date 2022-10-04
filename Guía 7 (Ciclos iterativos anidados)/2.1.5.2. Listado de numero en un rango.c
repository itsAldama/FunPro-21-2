#include <stdio.h>

int calcularCantidadDivisores(int i);
int calcularCantidadNumerosPrimos(int a, int b);
void mostrarNumerosPrimos(int a, int b);

int main(){
	int a, b, i, c, cantidadDivisores, cantidadPrimos;
	printf("Ingrese rango [a, b]: ");
	scanf("%d %d", &a, &b);
	if (a>b){
		printf("El rango ingresado no es correcto.");
	}
	else{
		cantidadPrimos=calcularCantidadNumerosPrimos(a, b);
		if (cantidadPrimos==0){
			printf("No existen números primos en el rango indicado");
		}
		else{
			printf("En el rango [%d..%d] se tienen los siguientes números primos: \n");
			mostrarNumerosPrimos(a, b);
		}
	}
	return 0;
}

int calcularCantidadDivisores(int i){
	int cantidadDivisores=2, c;
	for (c=2; c<i; c++){
		if (i%c==0){
			cantidadDivisores++;
		}	
	}
	return cantidadDivisores;
}

int calcularCantidadNumerosPrimos(int a, int b){
	int i, cantidadPrimos=0, cantidadDivisores;
	for (i=a; i<=b; i++){
		cantidadDivisores=calcularCantidadDivisores(i);
		if (cantidadDivisores==2){
			cantidadPrimos++;
		}
	}
	return cantidadPrimos;
}

void mostrarNumerosPrimos(int a, int b){
	int i, cantidadPrimos=0, cantidadDivisores;
	int cantidadPrimoss=calcularCantidadNumerosPrimos(a, b);
	for (i=a; i<=b; i++){
		cantidadDivisores=calcularCantidadDivisores(i);
		if (cantidadDivisores==2){
			if (cantidadPrimos<cantidadPrimoss-1){
				printf("%d, ", i);
			}
			if (cantidadPrimos==cantidadPrimoss-1){
				printf("%d", i);
			}
			cantidadPrimos++;
		}
	}
}
