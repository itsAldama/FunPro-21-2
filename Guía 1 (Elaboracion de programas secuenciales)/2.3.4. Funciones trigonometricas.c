#include <stdio.h>
#include <math.h>

int main(){
	double angulo, anguloRad, cotan, sec, cosec;
	printf("Ingrese el ángulo: ");
	scanf("%lf", &angulo);
	
	anguloRad = angulo*(double)3.141492/180;
	cotan = 1/(tan(anguloRad));
	sec = 1/(cos(anguloRad));
	cosec = 1/(sin(anguloRad));
	
	printf("El cotangente es %lf, sec es %.4lf y cosec es %lf", cotan, sec, cosec);
	return 0;
}
