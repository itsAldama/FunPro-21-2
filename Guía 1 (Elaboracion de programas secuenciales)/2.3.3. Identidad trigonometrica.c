#include <stdio.h>
#include <math.h>

int main(){
	double angulo;
	printf("Ingresar angulo en sexagesimal: ");
	scanf("%lf", &angulo);
	int verificarIdentidad = pow(sin(angulo), 2) + pow(cos(angulo), 2);
	printf("Se cumple la identidad? %d", verificarIdentidad);
	return 0;
}
