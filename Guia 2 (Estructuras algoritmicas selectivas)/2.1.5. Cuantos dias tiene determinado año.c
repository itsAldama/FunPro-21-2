#include <stdio.h>

int main() {
	int anio;
	double p, q, r;
	printf("Ingrese el año: ");
	scanf("%d", &anio);
	p = (anio%4)==0;
	q = (anio%100)==0;
	r = (anio%400)==0;
	if (p&&(!q||r))
		printf("El año tiene 366 días");
	else
		printf("El año tiene 365 días");
	return 0;
}
