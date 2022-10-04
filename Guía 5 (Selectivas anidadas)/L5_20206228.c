// Jeremy Daniel Aldama Giraldo 20206228
#include <stdio.h>
#include <math.h>
#define ERROR 0.01

void leerCoeficientesYMostrarRespuestas(int cantidadCruces);
void determinarEImprimirCoincidentesParalelasOSecantes(int cantidadVecesValidar);

int main(){
	char opcion;
	int cantidadCruces, cantidadVecesValidar;
	printf("Ingrese la opción que desea calcular:\n");
	printf("Circunferencias que se intersecan (A o a)\n");
	printf("Relación entre rectas (B o b)\n");
	scanf(" %c", &opcion);
	if (opcion!='A' && opcion!='a' && opcion!='B' && opcion!='b'){
		printf("Error en la opción ingresada");
	}
	else{
		if (opcion=='a' || opcion=='A'){
			printf("Ingrese la cantidad de veces que desea validar si 2 circunferencias de la forma x2 + y2 + Cx + Dy + E se cruzan: ");
			scanf("%d", &cantidadCruces);
			if (cantidadCruces<1 || cantidadCruces>20){
				printf("El valor de n no se encuentra en el rango solicitado.");
			}
			else{
				leerCoeficientesYMostrarRespuestas(cantidadCruces);
			}
		}
		else{
			printf("Ingrese la cantidad de veces que desea validar si 2 rectas son secantes, paralelas o coincidentes: ");
			scanf("%d", &cantidadVecesValidar);
			if (cantidadVecesValidar<1 || cantidadVecesValidar>20){
				printf("El valor de n no se encuentra dentro del rango solicitado.");
			}
			else{
				determinarEImprimirCoincidentesParalelasOSecantes(cantidadVecesValidar);
			}
		}
	}
}

void leerCoeficientesYMostrarRespuestas(int cantidadCruces){
	int i=1, puntosPrimerCuadrante=0, puntosSegundoCuadrante=0, puntosTercerCuadrante=0, puntosCuartoCuadrante=0, cantidadCrucesEntreCircunferencias=0, verificarCruce;
	double h1, h2, k1, k2, radio1, radio2, distancia, c1, d1, e1, c2, d2, e2;
	while (i<=cantidadCruces){
		printf("Ingrese los coeficientes C, D y E de la circunferencia %d (x2 + y2 +Cx + Dy + E): ", i);
		scanf("%lf %lf %lf", &c1, &d1, &e1);
		printf("Ingrese los coeficientes C, D y E de la circunferencia %d (x2 + y2 +Cx + Dy + E): ", i+1);
		scanf("%lf %lf %lf", &c2, &d2, &e2);
		//formulas dadas
		h1 = -(c1/2);
		k1 = -(d1/2);
		radio1 = sqrt(h1*h1+k1*k1-e1);
		h2 = -(c2/2);
		k2 = -(d2/2);
		radio2 = sqrt(h2*h2+k2*k2-e2);
		distancia = sqrt(pow(h2-h1, 2)+pow(k2-k1, 2));
		verificarCruce = ((radio1+radio2)>=distancia);
		if (verificarCruce){
			printf("Las circunferencias se cruzan.\n");
			cantidadCrucesEntreCircunferencias++;//vamos contando cuantos cruces hay entre circunferencia
		}
		else{
			printf("Las circunferencias no se cruzan.\n");
		}
		//empezamos a contar los centros que se encuentran en cada cuadrante
		if (h1>0 && k1>0){
			puntosPrimerCuadrante++;
		}
		else if (h1<0 && k1>0){
			puntosSegundoCuadrante++;
		}
		else if (h1<0 && k1<0){
			puntosTercerCuadrante++;
		}
		else{
			puntosCuartoCuadrante++;
		}
		if (h2>0 && k2>0){
			puntosPrimerCuadrante++;
		}
		else if (h2<0 && k2>0){
			puntosSegundoCuadrante++;
		}
		else if (h2<0 && k2<0){
			puntosTercerCuadrante++;
		}
		else{
			puntosCuartoCuadrante++;
		}
		i++;
	}
	printf("Se encontraron %d cruces entre circunferencias.\n", cantidadCrucesEntreCircunferencias);
	printf("En el cuadrante 1 se encontraron %d puntos que son centro de una circunferencia\n", puntosPrimerCuadrante);
	printf("En el cuadrante 2 se encontraron %d puntos que son centro de una circunferencia\n", puntosSegundoCuadrante);
	printf("En el cuadrante 3 se encontraron %d puntos que son centro de una circunferencia\n", puntosTercerCuadrante);
	printf("En el cuadrante 4 se encontraron %d puntos que son centro de una circunferencia\n", puntosCuartoCuadrante);
}

void determinarEImprimirCoincidentesParalelasOSecantes(int cantidadVecesValidar){
	int i=1, paralelas, secantes, coincidentes;
	double a1, b1, c1, a2, b2, c2;
	while (i<=cantidadVecesValidar){
		printf("Ingrese los coeficientes A, B y C de la recta %d (Ax + By + C = 0): ", i);
		scanf("%lf %lf %lf", &a1, &b1, &c1);
		printf("Ingrese los coeficientes A, B y C de la recta %d (Ax + By + C = 0): ", i+1);
		scanf("%lf %lf %lf", &a2, &b2, &c2);
		coincidentes = (fabs(a1/a2-b1/b2)<=ERROR) && (fabs(b1/b2-c1/c2)<=ERROR) && (fabs(a1/a2-c1/c2)<=ERROR);
		paralelas = (fabs(a1/a2-b1/b2)<=ERROR) && b1/b2!=c1/c2 && a1/a2!=c1/c2;
		secantes = a1/a2!=b1/b2;
		if (coincidentes){
			printf("Las rectas son coincidentes.\n");
		}
		else if (paralelas){
			printf("Las rectas son paralelas.\n");
		}
		else{
			printf("Las rectas son secantes.\n");//no se cumplen los anteriores
		}
		i++;
	}
}
