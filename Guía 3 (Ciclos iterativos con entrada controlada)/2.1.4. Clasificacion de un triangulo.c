#include <stdio.h>

int main(){
	char criterioCalificacion;
	int i, cantidadConjuntos, angulo1, angulo2, angulo3, lado1, lado2, lado3, validezTriangulo;
	printf("Ingrese criterio de calificación: ");
	scanf("%c", &criterioCalificacion);
	printf("Ingrese la cantidad de conjuntos de datos a procesar: ");
	scanf("%d", &cantidadConjuntos);
	i=1;
	while (criterioCalificacion=='A' && i<=cantidadConjuntos){
		printf("Ingrese ángulos (a, b, c) del triángulo %d: ", i);
		scanf("%d %d %d", &angulo1, &angulo2, &angulo3);
		if (angulo1<90 && angulo2<90 && angulo3<90){
			printf("El triángulo es acutángulo\n");
		}
		if (angulo1==90 || angulo2==90 || angulo3==90){
			printf("El triángulo es rectángulo\n");
		}
		if (angulo1>90 || angulo2>90 || angulo3>90){
			printf("El triángulo es obtusángulo\n");
		}
		if (angulo1+angulo2+angulo3 != 180){
			printf("Los ángulos ingresados no corresponden a un triángulo\n");
		}
		i++;
	}
	while (criterioCalificacion=='L' && i<=cantidadConjuntos){
		printf("Ingrese lados (l1, l2, l3) del triángulo %d: ", i);
		scanf("%d %d %d", &lado1, &lado2, &lado3);
		validezTriangulo = (lado1+lado2>lado3 && lado2+lado3>lado1 && lado1+lado3>lado2);
		if (lado1==lado2 && lado1==lado3 && lado2==lado3 && validezTriangulo){
			printf("El triángulo es equilátero\n");
		}
		if (((lado1==lado2 && lado3!=lado1) || (lado2==lado3 && lado1!=lado2) || (lado1==lado3 && lado2!=lado3)) && validezTriangulo){
			printf("El triángulo es isósceles\n");
		}
		if (lado1!=lado2 && lado2!=lado3 && lado1!=lado3){
			printf("El triángulo es escaleno\n");
		}
		if (!validezTriangulo){
			printf("Los lados ingresados no corresponden a un triángulo\n");
		}
		i++;
	}
	return 0;
}
