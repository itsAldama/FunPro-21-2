#include <stdio.h>
#define PI 3.14151
#define e 2.718
#include <math.h>

int main() {
	double num, factorial;
	printf("Ingrese el numero: ");
	scanf("%lf", &num);
	factorial = sqrt(2*PI*num)*pow(num/e, num);
	printf("El factorial es: %lf", factorial);
	
	return 0;
}
