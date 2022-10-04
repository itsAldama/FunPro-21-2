#include <stdio.h>
#define PI 3.141592
int main(){
	double grados, minutos, segundos, minToRad, segToRad, gradesToRad, radTotal;
	printf("Ingresar los grados, minutos y segundos: ");
	scanf("%lf %lf %lf", &grados, &minutos, &segundos);
	gradesToRad = grados * (double)2*PI/360;
	minToRad = minutos / 60 * (double)2*PI/360;
	segToRad = segundos / 60 * (double)60/3600;
	radTotal = gradesToRad + minToRad + segToRad;
	printf("La conversion en radianes es: %lf", radTotal);
	return 0;
}
