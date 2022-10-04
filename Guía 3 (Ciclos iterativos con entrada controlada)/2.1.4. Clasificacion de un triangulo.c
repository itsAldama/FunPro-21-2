#include <stdio.h>

int main(){
	char criterioCalificacion;
	int i, cantidadConjuntos, angulo1, angulo2, angulo3, lado1, lado2, lado3, validezTriangulo;
	printf("Ingrese criterio de calificaci�n: ");
	scanf("%c", &criterioCalificacion);
	printf("Ingrese la cantidad de conjuntos de datos a procesar: ");
	scanf("%d", &cantidadConjuntos);
	i=1;
	while (criterioCalificacion=='A' && i<=cantidadConjuntos){
		printf("Ingrese �ngulos (a, b, c) del tri�ngulo %d: ", i);
		scanf("%d %d %d", &angulo1, &angulo2, &angulo3);
		if (angulo1<90 && angulo2<90 && angulo3<90){
			printf("El tri�ngulo es acut�ngulo\n");
		}
		if (angulo1==90 || angulo2==90 || angulo3==90){
			printf("El tri�ngulo es rect�ngulo\n");
		}
		if (angulo1>90 || angulo2>90 || angulo3>90){
			printf("El tri�ngulo es obtus�ngulo\n");
		}
		if (angulo1+angulo2+angulo3 != 180){
			printf("Los �ngulos ingresados no corresponden a un tri�ngulo\n");
		}
		i++;
	}
	while (criterioCalificacion=='L' && i<=cantidadConjuntos){
		printf("Ingrese lados (l1, l2, l3) del tri�ngulo %d: ", i);
		scanf("%d %d %d", &lado1, &lado2, &lado3);
		validezTriangulo = (lado1+lado2>lado3 && lado2+lado3>lado1 && lado1+lado3>lado2);
		if (lado1==lado2 && lado1==lado3 && lado2==lado3 && validezTriangulo){
			printf("El tri�ngulo es equil�tero\n");
		}
		if (((lado1==lado2 && lado3!=lado1) || (lado2==lado3 && lado1!=lado2) || (lado1==lado3 && lado2!=lado3)) && validezTriangulo){
			printf("El tri�ngulo es is�sceles\n");
		}
		if (lado1!=lado2 && lado2!=lado3 && lado1!=lado3){
			printf("El tri�ngulo es escaleno\n");
		}
		if (!validezTriangulo){
			printf("Los lados ingresados no corresponden a un tri�ngulo\n");
		}
		i++;
	}
	return 0;
}
