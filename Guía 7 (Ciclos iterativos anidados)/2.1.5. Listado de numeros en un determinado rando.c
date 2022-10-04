#include <stdio.h>

void cantidadDivisoresYCantidadPrimos(int a, int b, int *cantidadDivisores, int *cantidadPrimos);
void mostrarNumerosPrimos(int a, int b);

int main(){
	int a, b, i, c, cantidadPrimos;
	printf("Ingrese rango [a, b]: ");
	scanf("%d %d", &a, &b);
	if (a>b){
		printf("El rango ingresado no es correcto.");
	}
	else{
		cantidadDivisoresYCantidadPrimos(a, b, &cantidadPrimos);
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

void cantidadDivisoresYCantidadPrimos(int a, int b, int *cantidadPrimos){
	int i, c, cantidadDivisores;
	for (i=a; i<=b; i++){
			cantidadDivisores=2;
			for (c=2; c<i; c++){
				if (i%c==0){
					cantidadDivisores++;
				}	
			}
			if (cantidadDivisores==2){
				(*cantidadPrimos)++;
			}
		}
}

void mostrarNumerosPrimos(int a, int b){
	int i, cantidadDivisores, cantidadPrimos, c;
	cantidadDivisoresYCantidadPrimos(a, b, &cantidadDivisores, &cantidadPrimos);
	int ultimo=cantidadPrimos;
	int penultimo=cantidadPrimos-1;
	cantidadPrimos=0;
	for (i=a; i<=b; i++){
			cantidadDivisores=2;
			for (c=2; c<i; c++){
				if (i%c==0){
					cantidadDivisores++;
				}	
			}
			if (cantidadDivisores==2 && cantidadPrimos<penultimo){
				printf("%d, ", i);
				cantidadPrimos++;
			}
			if (cantidadPrimos==ultimo){
					printf("%d", i);
				}
		}
}
