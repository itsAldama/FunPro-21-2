#include <stdio.h>

int main(){
	int numeroDeTerminos=1;
	double suma=1, factorial=1, termino=1;
	do{
		factorial=factorial*numeroDeTerminos;
		termino = 1/factorial;
		suma = suma+termino;
		numeroDeTerminos++;
		printf("Termino %d %.15lf, valor e: %.15lf\n", numeroDeTerminos, termino, suma);
	} while (termino>=0.00000001);
	printf("El valor del número e para una precision de 0.00000001 es %.15lf", suma);
	return 0;
}
