#include <stdio.h>
#include <math.h>
double calculoApotema(double radio, double lado){
	double apotema;
	apotema = sqrt(radio*radio-pow(lado/2, 2));
	return apotema;
}

double calculoAreaTriangulo(double lado, double radio){
	double apotema;
	apotema = calculoApotema(radio, lado);
	double area;
	area = (double)5*lado*apotema/2;
	return area;
}

int main(){
	double lado, radio, area;
	printf("Ingrese el lado y radio del pentágono: ");
	scanf("%lf %lf", &lado, &radio);
	area = calculoAreaTriangulo(lado, radio);
	printf("El area del pentágono es: %lf", area);
	return 0;
}
