#include <stdio.h>
#define GRAVEDAD 9.8

double obtenerPosicionFinal(char letra);

int main(){
	char letra;
	double posicionFinal;
	printf("Ingrese la letra del movimiento que desea calcular: ");
	scanf(" %c", &letra);
	if (letra!='A' && letra!='B' && letra!='C'){
		printf("La opción ingresada es inválida");
	}
	else{
		posicionFinal = obtenerPosicionFinal(letra);
		printf("La posicion final es: %lfm", posicionFinal);
	}
	return 0;
}

double obtenerPosicionFinal(char letra){
	double posicionInicial, velocidad, aceleracion, altura, posicionFinal;
	int tiempo;
	switch (letra){
		case 'A':{
			printf("Ingrese la posicion inicial: ");
			scanf("%lf", &posicionInicial);
			printf("Ingrese la velocidad: ");
			scanf("%lf", &velocidad);
			printf("Ingrese el tiempo: ");
			scanf("%d", &tiempo);
			posicionFinal=posicionInicial+velocidad*tiempo;
			break;
		}
		case 'B':{
			printf("Ingrese la posicion inicial: ");
			scanf("%lf", &posicionInicial);
			printf("Ingrese la velocidad: ");
			scanf("%lf", &velocidad);
			printf("Ingrese el tiempo: ");
			scanf("%d", &tiempo);
			printf("Ingrese la aceleración: ");
			scanf("%lf", &aceleracion);
			posicionFinal=posicionInicial+velocidad*tiempo+aceleracion*tiempo*tiempo/(double)2;
			break;
		}
		default:{
			printf("Ingrese la altura del cuerpo: ");
			scanf("%lf", &altura);
			printf("Ingrese el tiempo: ");
			scanf("%d", &tiempo);
			posicionFinal=altura-GRAVEDAD*tiempo*tiempo/(double)2;
			break;
		}
	}
	return posicionFinal;
}
