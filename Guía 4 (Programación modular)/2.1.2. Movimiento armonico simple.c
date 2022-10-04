#include <stdio.h>
#define PI 3.141592
void leerFrecuenciaOscilacion(double *frecuencia){
	printf("Ingrese la frecuencia de la oscilación: ");
	scanf("%lf", frecuencia);
}

double calculoT(int frecuencia){
	double periodo;
	periodo = (double)1/frecuencia;
	return periodo;
}

double calculoFrecuenciaCiclica(double periodo){
	double frecuenciaCiclica;
	frecuenciaCiclica = 2*PI/periodo;
	return frecuenciaCiclica;
}

void periodoYFrecuencia(double periodo, double frecuencia){
	printf("El periodo es: %lf", periodo);
	printf("\nLa frecuencia ciclica es: %lf", frecuencia);
}

int main(){
	double frecuencia, periodo, frecuenciaCiclica;
	leerFrecuenciaOscilacion(&frecuencia);
	periodo=calculoT(frecuencia);
	frecuenciaCiclica=calculoFrecuenciaCiclica(periodo);
	periodoYFrecuencia(periodo, frecuenciaCiclica);
	return 0;
}
