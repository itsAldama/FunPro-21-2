#include <stdio.h>

void mostrarSucesionPerrin(int cantidad);
void mostrarSucesionPadovan(int cantidad);
int funcionPerrinDeN(int n);

int main(){
	char tipo;
	int cantidad;
	printf("Ingrese tipo de sucesión: ");
	scanf(" %c", &tipo);
	if (tipo!='P' && tipo!='E'){
	}
	else{
		printf("Ingrese cantidad de números: ");
		scanf("%d", &cantidad);
		if (tipo=='P'){
			mostrarSucesionPadovan(cantidad);
		}
		else{
			mostrarSucesionPerrin(cantidad);
		}
	}
	return 0;
}

void mostrarSucesionPerrin(int cantidad){
	int i, n, perrinDeN;
	for (i=1, n=0; i<=cantidad; i++, n++){
		perrinDeN=funcionPerrinDeN(n);
		printf("%d ", perrinDeN);
	}
}

int funcionPerrinDeN(int n){
	int FdeN;
	if (n==0){
		return 3;
	}
	else if (n==1){
		return 0;
	}
	else if (n==2){
		return 2;
	}
	else{
		return funcionPerrinDeN(n-2)+funcionPerrinDeN(n-3);
	}
}

void mostrarSucesionPadovan(int cantidad){
	int i, n, padovanDeN;
	for (i=1, n=0; i<=cantidad; i++, n++){
		padovanDeN=funcionPadovanDeN(n);
		printf("%d ", padovanDeN);
	}
}

int funcionPadovanDeN(int n){
	if (n==0){
		return 1;
	}
	else if (n==1){
		return 1;
	}
	else if (n==2){
		return 1;
	}
	else{
		return funcionPadovanDeN(n-2)+funcionPadovanDeN(n-3);
	}
}
