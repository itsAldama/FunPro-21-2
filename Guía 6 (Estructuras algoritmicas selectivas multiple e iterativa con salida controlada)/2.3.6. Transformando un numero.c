#include <stdio.h>
#include <math.h>

int contarDigitos(int numero);
int invertirNumero(int parte1);
int concatenarPartes(int parte1Invertida, int parte2);
void obtenerParte1YParte2(int numero, int *parte1, int *parte2, int cantidadDigitos);

int main(){
	int numero, parte1, parte2, cantidadDigitos, parte1Invertida, numeroConcatenado;
	printf("Ingrese un número: ");
	scanf("%d", &numero);
	cantidadDigitos=contarDigitos(numero);
	if (cantidadDigitos%2==1){
		numero=numero*10;
		cantidadDigitos++;
	}
	printf("El numero a transformar es %d\n", numero);
	obtenerParte1YParte2(numero, &parte1, &parte2, cantidadDigitos);
	printf("Parte 1 = %d\n", parte1);
	printf("Parte 2 = %d\n", parte2);
	parte1Invertida=invertirNumero(parte1);
	printf("La parte 1 invertida es: %d\n", parte1Invertida);
	if (parte1Invertida==parte1){
		parte2=invertirNumero(parte2);
		printf("La parte 2 invertida es: %d\n", parte2);
	}
	numeroConcatenado=concatenarPartes(parte1Invertida, parte2);
	printf("El número final es: %d", numeroConcatenado);
	return 0;
}

int contarDigitos(int numero){
	int cantidadDigitos=0;
	do{
		numero/=10;
		cantidadDigitos++;
	}while(numero!=0);
	return cantidadDigitos;
}

void obtenerParte1YParte2(int numero, int *parte1, int *parte2, int cantidadDigitos){
	int nuevaCantidadDigitos1y2=cantidadDigitos/2;
	*parte1 = numero/pow(10, nuevaCantidadDigitos1y2);
	*parte2 = numero%(int)pow(10, nuevaCantidadDigitos1y2);
}

int invertirNumero(int numero){
	int digito, diferencia, nuevoNumero=0;
	do{
		digito=numero%10;
		numero=numero/10;
		nuevoNumero=nuevoNumero*10+digito;
	}while(numero>0);
	return nuevoNumero;
}

int concatenarPartes(int parte1Invertida, int parte2){
	int cantidadDigitosParte2=contarDigitos(parte2);
	int numeroConcatenado=parte1Invertida*pow(10, cantidadDigitosParte2)+parte2;
	return numeroConcatenado;
}


