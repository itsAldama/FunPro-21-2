#include <stdio.h>

void mostrarTablaConversion(int a, int b);
int convertirDecimalAHexadecimal(int i);

int main(){
	printf("Ingrese rango inicial: ");
	scanf("%d", a);
	printf("Ingrese rango final: ");
	scanf("%d", b);
	if (a<b && b<=9999){
		printf("Tabla de conversión Decimal a Hexadecimal\n");
		mostrarTablaConversion(a, b);
	}
	else{
		printf("Rango incorrecto");
	}
	return 0;
}

void mostrarTablaConversion(int a, int b){
	for (i=a; i<=b; i++){
		numeroEnHexadecimal=convertirDecimalAHexadecimal(i);
		printf("%d			%d\n", i, numeroEnHexadecimal);
	}
}

int convertirDecimalAHexadecimal(int i){
	
}
