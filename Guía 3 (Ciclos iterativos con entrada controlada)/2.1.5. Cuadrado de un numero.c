#include <stdio.h>
#include <math.h>
int main(){
	int i, suma, numero, impares;
	printf("Ingrese número n: ");
	scanf("%d", &numero);
	printf("La suma es S = ");
	i=1;
	suma=0;
	while (i <=fabs(numero)){
		impares=2*i-1;
		if (impares==1){
			printf("%d ", impares);
		}
		if (impares>1){
			printf(" + %d", impares);
		}
		suma+=impares;
		i++;
	}
	printf(" = %d", suma);
	printf("\n%d al cuadrado es %d", numero, suma);
	return 0;
}
