#include <stdio.h>

int main(){
	int cantidadLados, cantidadNumerosPoligonales, nEsimoNumeroPoligonal;
	printf("Ingrese la cantidad de lados del polígono: ");
	scanf("%d", &cantidadLados);
	printf("Ingrese la cantidad de numeros poligonales: ");
	scanf("%d", &cantidadNumerosPoligonales);
	int i=1;
	do{
		nEsimoNumeroPoligonal=i/(double)2*((cantidadLados-2)*i-(cantidadLados-4));
		printf("%d ", nEsimoNumeroPoligonal);
		esPoligonal = verificarPoligono(nEsimoNumeroPoligonal, cantidadLados);
		if (esPoligonal){
		}
		i++;
	}while (i<=cantidadNumerosPoligonales);
	return 0;
}
