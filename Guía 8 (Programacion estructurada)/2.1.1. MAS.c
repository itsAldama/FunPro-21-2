#include <stdio.h>
#define PI 3.141592

double calcularFrecuenciaCiclica(double periodo);
double calcularPeriodo(double frecuencia);

int main(){
	double frecuencia, periodo, frecuenciaCiclica;
	printf("Ingrese la frecuencia de oscilación: ");
	scanf("%lf", &frecuencia);
	periodo=calcularPeriodo(frecuencia);
	frecuenciaCiclica=calcularFrecuenciaCiclica(periodo);
	printf("Periodo: %lf s, Frecuencia Cíclica: %lf rad/s", periodo, frecuenciaCiclica);
	return 0;
}

double calcularFrecuenciaCiclica(double periodo){
	return 2*PI/periodo;
}

double calcularPeriodo(double frecuencia){
	return 1/frecuencia;
}
