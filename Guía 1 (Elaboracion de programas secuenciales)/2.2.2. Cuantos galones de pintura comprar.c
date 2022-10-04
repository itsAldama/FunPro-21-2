#include <stdio.h>
#include <math.h>

int main(){
	double largo, alto, galones, superficie, litros;
	printf("Ingrese el largo y alto de la superficie rectangular: ");
	scanf("%lf %lf", &largo, &alto);
	superficie = largo*alto;
	litros = superficie * 1/10;
	galones = litros*0.2641720512415584;
	printf("Deberá comprar %.0lf", ceil(galones));
	return 0;
}
