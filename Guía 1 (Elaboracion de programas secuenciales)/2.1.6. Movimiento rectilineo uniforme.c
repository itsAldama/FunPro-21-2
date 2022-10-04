#include <stdio.h>
int main(){
	double velocidadkm, tiempo, distancia, velocidadMetros;
	printf("Ingrese la velocidad y tiempo de recorrido: ");
	scanf("%lf %lf", &velocidadkm, &tiempo);
	velocidadMetros = velocidadkm * (float)5/18;
	distancia = velocidadMetros * tiempo;
	printf("La distancia recorrida es %lf", distancia);
	return 0;
}
