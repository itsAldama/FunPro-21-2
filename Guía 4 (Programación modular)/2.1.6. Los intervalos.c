#include <stdio.h>

int validarIntervalo(double limiteSuperior, double limiteInferior){
	int validar = limiteSuperior>=limiteInferior;
	return validar;
}

int validarInterseccion(double limiteSuperior1, double limiteSuperior2, double limiteInferior1, double limiteInferior2){
	int validarInterseccion;
	int interseccion1 = ((limiteInferior1<limiteInferior2) && (limiteSuperior1>limiteInferior2));
	int interseccion2 = ((limiteInferior1<limiteSuperior2) && (limiteSuperior1>limiteSuperior2));
	if (interseccion1 || interseccion2)
		validarInterseccion=1;
	else
		validarInterseccion=0;
	return validarInterseccion;
}

int main(){
	double limiteInferior1, limiteInferior2, limiteSuperior1, limiteSuperior2; 
	int validarIntervaloA, validarIntervaloB, validarIntersecc;
	printf("Ingrese límite inferior y superior del primer intervalo: ");
	scanf("%lf %lf", &limiteInferior1, &limiteSuperior1);
	printf("\nIngrese límite inferior y superior del segundo intervalo: ");
	scanf("%lf %lf", &limiteInferior2, &limiteSuperior2);
	validarIntervaloA = validarIntervalo(limiteSuperior1, limiteInferior1);
	validarIntervaloB = validarIntervalo(limiteSuperior2, limiteInferior2);
	if (validarIntervaloA)
		printf("\nEl intervalo A es %d", validarIntervaloA);
	if (validarIntervaloB)
		printf("\nEl intervalo B es %d", validarIntervaloB);
	printf("\n¿Los intervalos A y B se intersecan?");
	validarIntersecc = validarInterseccion(limiteSuperior1, limiteSuperior2, limiteInferior1, limiteInferior2);
	if (validarIntersecc){
		printf("Límite inferior: %d\n", limiteInferior2);
		printf("Límite superior: %d", limiteSuperior1);
	}
	else{
		printf("No.");
	}
	return 0;
}
