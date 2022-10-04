#include <stdio.h>
#include <math.h>
#define PI 3.14159265359

double obtenerSenoHiperbolicoTaylor(double anguloRad, int cantidadTerminos, double presicion);
double obtenerCosenoHiperbolicoTaylor(double anguloRad, int cantidadTerminos, double presicion);

int main(){
	int anguloSex, cantidadTerminos, cantidadDecimalesPresicion;
	double anguloRad, presicion, senoHiperbolicoTaylor, senoHiperbolicoMath, cosenoHiperbolicoMath, cosenoHiperbolicoTaylor;
	printf("Ingrese el ángulo en sexagesimal: ");
	scanf("%d", &anguloSex);
	anguloRad=anguloSex*PI/180;
	printf("Ingrese la cantidad de términos: ");
	scanf("%d", &cantidadTerminos);
	printf("Ingrese la cantidad de decimales de precisión: ");
	scanf("%d", &cantidadDecimalesPresicion);
	presicion = 1/pow(10, cantidadDecimalesPresicion);
	printf("\nPrecision %lf\n\n", presicion);
	senoHiperbolicoTaylor=obtenerSenoHiperbolicoTaylor(anguloRad, cantidadTerminos, presicion);
	printf("Seno hiperbólico según Taylor %lf\n", senoHiperbolicoTaylor);
	senoHiperbolicoMath=sinh(anguloRad);
	printf("Seno hiperbólico según math %lf\n", senoHiperbolicoMath);
	if (senoHiperbolicoTaylor!=senoHiperbolicoMath){
		printf("El cálculo de Taylor para el seno hiperbólico NO coincide con la función de la librería.\n\n");
	}
	cosenoHiperbolicoTaylor=obtenerCosenoHiperbolicoTaylor(anguloRad, cantidadTerminos, presicion);
	printf("Coseno hiperbólico Taylor es %lf\n", cosenoHiperbolicoTaylor);
	cosenoHiperbolicoMath=cosh(anguloRad);
	printf("Coseno hiperbólico math.h es %lf\n", cosenoHiperbolicoMath);
	if (cosenoHiperbolicoTaylor!=cosenoHiperbolicoMath){
		printf("El cálculo de Taylor para el coseno hiperbólico NO coincide con el de la librería.");
	}	
}

double obtenerSenoHiperbolicoTaylor(double anguloRad, int cantidadTerminos, double presicion){
	int n=0;
	double numerador, termino, suma=0, factorial=1;
	do{
		numerador=pow(anguloRad, 2*n+1);
		if (n!=0){
			factorial*=(2*n+1)*(2*n);
		}
		termino=numerador/factorial;
		suma+=termino;
		n++; 
	}while (termino>=presicion);
	return suma;
}

double obtenerCosenoHiperbolicoTaylor(double anguloRad, int cantidadTerminos, double presicion){
	int n=0;
	double numerador, termino, suma=0, factorial=1;
	do{
		numerador=pow(anguloRad, 2*n);
		if (n!=0){
			factorial*=(2*n)*(2*n-1);
		}
		termino=numerador/factorial;
		suma+=termino;
		n++;
	}while (termino>=presicion);
	return suma;
}
