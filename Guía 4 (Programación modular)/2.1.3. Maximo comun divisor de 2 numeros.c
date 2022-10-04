#include <stdio.h>

int cantidadDivisores(int numero){
	int i=1, cantidadDivisores=0;
	while (i<=numero){
		if (numero%i==0){
			cantidadDivisores++;
		}
		i++;
	}
	return cantidadDivisores;
}

int divisorEncontrado(int numero, int posicion){
	int i=1;
	int contador=0;
	int divisorEncontrado;
	while (i<=numero && contador<posicion){
		if (numero%i==0){
			divisorEncontrado=i;
			contador++;
		}
		i++;
	}
	return divisorEncontrado;
}

int determinarDivisibilidadEntreDosNumeros(int numero1, int numero2){
	int validarDivisor;
	if (numero2%numero1==0){
		validarDivisor=1;
	}
	else{
		validarDivisor=0;
	}
	return validarDivisor;
}

int main(){
	int A, B, cantidadDivisoresA, cantidadDivisoresB, divisorMax;
	printf("Ingrese dos numeros (A B): ");
	scanf("%d %d", &A, &B);
	
	cantidadDivisoresA=cantidadDivisores(A);
	cantidadDivisoresB=cantidadDivisores(B);
	
	int i=0;
	int MCDEncontrado=0;
	
	if(A>=B){
        while(i<cantidadDivisoresB && !MCDEncontrado){
            divisorMax = divisorEncontrado(B,cantidadDivisoresB-i);
            if(determinarDivisibilidadEntreDosNumeros(divisorMax, A)){
                MCDEncontrado=1;
            }
            i++;
        }
    }
    printf("El MCD de %d y %d es %d", A, B, divisorMax);
	
	return 0;
}
