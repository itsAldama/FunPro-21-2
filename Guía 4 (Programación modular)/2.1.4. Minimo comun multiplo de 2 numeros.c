#include <stdio.h>

int determinarMultiplicidadEntreDosNumeros(int A, int B){
	int esMultiplo;
	if (A%B==0){
		esMultiplo=1;
	}
	else{
		esMultiplo=0;
	}
	return esMultiplo;
}

int main(){
	int A, B, numeroMayor, numeroMenor, multiplo, i, esMultiplo;
	printf("Ingrese dos numeros (A B): ");
	scanf("%d %d", &A, &B);
	numeroMayor = (A<B)*B + (A>B)*A;
	numeroMenor = (A<B)*A + (A>B)*B;
	i=1;
	int minimoComunMultiplo=0;
	while (i<=100 && !minimoComunMultiplo){
		multiplo=numeroMayor*i;
		esMultiplo=determinarMultiplicidadEntreDosNumeros(multiplo, numeroMenor);
		if (esMultiplo){
			minimoComunMultiplo=multiplo;
		}
		i++;
	}
	printf("El MCM de %d y %d es %d", A, B, multiplo);
	return 0;
}
