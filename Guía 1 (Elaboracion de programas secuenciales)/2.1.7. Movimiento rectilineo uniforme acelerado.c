#include <stdio.h>
#include <math.h>

int main(){
	double velInicial=0, velFinal, tiempo, aceleracion, distanciaRecorrida;
	printf("Ingrese la aceleracion y tiempo de recorrida de la moto: ");
	scanf("%lf %lf", &aceleracion, &tiempo);
	velFinal = velInicial + aceleracion*tiempo;
	distanciaRecorrida = velInicial * tiempo + (aceleracion*pow(tiempo,2))/2;
	printf("La velocidad final sera %lf y la distancia recorrida sera %lf", velFinal, distanciaRecorrida);
	
	return 0;
}
