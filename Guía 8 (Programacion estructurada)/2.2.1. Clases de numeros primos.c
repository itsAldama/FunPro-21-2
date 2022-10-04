#include <stdio.h>

void mostrarNumerosPrimosSophie(int cantidad);
void mostrarNumeroPrimosGemelos(int cantidad);
int verificarPrimo(int numero);
int siguientePrimo(int primo);

int main(){
	int cantidad;
	printf("Ingrese cantidad de números: ");
	scanf("%d", &cantidad);
	if (cantidad<=0){
		printf("La cantidad debe ser mayor que 0");
	}
	else{
		printf("Pares de números primos de Sophie Germain: ");
		mostrarNumerosPrimosSophie(cantidad);
		printf("\nPares de números primos Gemelos: ");
		mostrarNumeroPrimosGemelos(cantidad);
	}
	return 0;
}

int verificarPrimo(int numero){
	int i=1, cantidadDivisores=0;
	while (i<=numero){
		if (numero%i==0){
			cantidadDivisores++;
		}
		i++;
	}
	if (cantidadDivisores==2){
		return 1;
	}
	else{
		return 0;
	}
}

void mostrarNumerosPrimosSophie(int cantidad){
	int i, primo, sophie, sophieEsPrimo;
	for (i=1, primo=2; i<=cantidad;){
		sophie=2*primo+1;
		sophieEsPrimo=verificarPrimo(sophie);
		if (sophieEsPrimo){
			printf("(%d, %d) ", primo, sophie);
			i++;
		}
		primo=siguientePrimo(primo);
	}
}

int siguientePrimo(int primo){
	int centinela, esPrimo;
	for (centinela=1; centinela==1; ){
		primo++;
		esPrimo=verificarPrimo(primo);
		if (esPrimo){
			centinela=0;
		}
	}
	return primo;
}

void mostrarNumeroPrimosGemelos(int cantidad){
	int i, primerPrimo, sigPrimo;
	for (i=1, primerPrimo=3; i<=cantidad; primerPrimo=siguientePrimo(primerPrimo)){
		sigPrimo=siguientePrimo(primerPrimo);
		if (sigPrimo-primerPrimo==2){
			printf("(%d, %d) ", primerPrimo, sigPrimo);
			i++;
		}
	}
}
