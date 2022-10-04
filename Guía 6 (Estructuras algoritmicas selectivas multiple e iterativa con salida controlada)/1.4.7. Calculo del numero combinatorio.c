#include <stdio.h>

int main(){
	int x, y, i=1;
	int factorialX=1, factorialXMenosY=1, factorialY=1;
	int combinatorio;
	printf("Ingrese los valores para calcular el combinatorio de x sobre y: ");
	scanf("%d %d", &x, &y);
	do{
		factorialX*=i;
		if (i<=y){
			factorialY*=i;
		}
		if (i<=(x-y)){
			factorialXMenosY*=i;
		}
		i++;
	}while (i<=x);
	combinatorio = factorialX/(factorialXMenosY*factorialY);
	printf("El combinatorio de %d sobre %d es %d", x,y, combinatorio);
	return 0;
}
