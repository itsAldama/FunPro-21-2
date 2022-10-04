#include <stdio.h>

int main(){
	int a,b, sumatoria;
	printf("Ingrese el limite inferior y superior de la sumatoria\n");
	scanf("%d %d",&a,&b);
	sumatoria= (b*(b+1))/2 - (a-1)*(a)/2;
	printf("La sumatoria desde a hasta b es:  %d",sumatoria );
	
	return 0;
}
