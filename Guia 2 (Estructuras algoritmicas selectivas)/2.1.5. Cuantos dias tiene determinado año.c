#include <stdio.h>

int main() {
	int anio;
	double p, q, r;
	printf("Ingrese el a�o: ");
	scanf("%d", &anio);
	p = (anio%4)==0;
	q = (anio%100)==0;
	r = (anio%400)==0;
	if (p&&(!q||r))
		printf("El a�o tiene 366 d�as");
	else
		printf("El a�o tiene 365 d�as");
	return 0;
}
