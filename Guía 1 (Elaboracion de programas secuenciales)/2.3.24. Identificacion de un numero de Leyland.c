#include<stdio.h>

int main(){
	int numero, gapful, centena, unidad, residuo, numeroFormado;
	printf("Ingrese el número a evaluar: ");
	scanf("%d", &numero);
	centena = numero/100;
	unidad = (numero%10);
	numeroFormado = centena*10 + unidad;
	residuo = numero%numeroFormado;
	gapful = residuo==0;
	printf("El número %d es un numero gapful %d porque el residuo de dividir %d entre %d formado por %d  y %d es %d", numero, gapful, numero, numeroFormado, centena, unidad, residuo);
	return 0;
}
