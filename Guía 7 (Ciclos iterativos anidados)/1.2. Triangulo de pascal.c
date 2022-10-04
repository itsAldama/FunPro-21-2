#include <stdio.h>

int main(){
	int totalFilas, contadorFilas;
	
	printf("Ingrese cantidad de filas: ");
	scanf("%d", &totalFilas);
	
	contadorFilas=1;
	while (contadorFilas<=totalFilas){
		printf("Filas: %d\n", contadorFilas);
		int n=contadorFilas;
		int contadorN=0;
		while (contadorN<n){
			int p=n-1;
			int r=contadorN;
			int factP=1, factR=1, factPmenosR=1;
			int contadorFact=1;
			while (contadorFact<=p){
				factP=factP*contadorFact;
				if (contadorFact<=r){
					factR=factR*contadorFact;
				}
				if (contadorFact<=(p-r)){
					factPmenosR=factPmenosR*contadorFact;
				}
				contadorFact++;
			}
			int combinatorio=factP/(factR*factPmenosR);
			printf("%d", combinatorio);
			contadorN++;
		}
		contadorFilas++;
		printf("\n");
	}
	return 0;
}
