#include <stdio.h>

int main(){
	int cantDinero, cantCinco, cantDos, cantUno;
	printf("Ingrese la cantidad de dinero que va a retirar: ");
	scanf("%d", &cantDinero);
	cantCinco = cantDinero/5;
	cantDinero = cantDinero%5;
	cantDos = cantDinero/2;
	cantDinero = cantDinero%2;
	cantUno = cantDinero/1;
	printf("Se debe dispensar %d monedas de 5 soles\n", cantCinco);
	printf("Se debe dispensar %d monedas de 2 soles\n", cantDos);
	printf("Se debe dispensar %d monedas de 1 soles\n", cantUno);
	return 0;
}
