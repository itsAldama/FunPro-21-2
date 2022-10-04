#include <stdio.h>

void mostrarNumerosPrimosGemelos(int a, int b);
int contarCantidadDivisores(int i);

int main(){
	int a, b;
	printf("Ingrese rango [a, b]: ");
	scanf("%d %d", &a, &b);
	printf("En el rango [1..100] se tienen los siguientes números primos gemelos:\n");
	mostrarNumerosPrimosGemelos(a, b);
	return 0;
}

void mostrarNumerosPrimosGemelos(int a, int b){
	int i, cantidadDivisores, esPrimo, siguientePrimo, primerPrimo;
	for (i=a; i<=b; i++){
		esPrimo=verificarPrimo(i);
		if (esPrimo){
			primerPrimo=i;
		}
		else{
			primerPrimo=-1;
		}
		siguientePrimo=siguienteNumeroPrimo(primerPrimo);
		if (siguientePrimo-primerPrimo==2){
			printf("%d %d\n", primerPrimo, siguientePrimo);
		}
	}
}

int verificarPrimo(int numero){
	int cantidadDivisores=0, i;
	for (i=1; i<=numero; i++){
		if (numero%i==0){
			cantidadDivisores++;
		}
	}
	if (cantidadDivisores==2){
		return 1;
	}
	else{
		return 0;
	}
}

int siguienteNumeroPrimo(int primoAnterior){
	int encontrado=0, primoAnteriorEsPrimo;
	while (!encontrado){
		primoAnterior++;
		primoAnteriorEsPrimo=verificarPrimo(primoAnterior);
		if (primoAnteriorEsPrimo){
			 return primoAnterior;
			 encontrado=1;
		}
	}
}


