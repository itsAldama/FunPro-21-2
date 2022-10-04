#include <stdio.h>

void leerDatos(int *grado){
	printf("Ingrese el grado del polinomio: ");
	scanf("%d", grado);
}

int validarCoeficiente(int grado){
	int i=0, coeficiente, cantCoefInvalidos=0;
	while (i<=grado){
		printf("Ingrese el coeficiente del término %d: ", i);
		scanf("%d", &coeficiente);
		if (coeficiente==0){
			cantCoefInvalidos++;
		}
		i++;
	}
	return cantCoefInvalidos;
}

void mensajeFinal(int cantCoefInvalidos){
	if (cantCoefInvalidos!=0){
		printf("El polinomio ingresado NO es completo.");
	}
	else{
		printf("El polinomio ingresado SI es completo.");
	}
}

int main(){
	int grado, coeficiente, i, validar;
	leerDatos(&grado);
	coeficiente=validarCoeficiente(grado);
	mensajeFinal(coeficiente);
	return 0;
}
