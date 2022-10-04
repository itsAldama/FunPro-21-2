#include <stdio.h>
#include <math.h>

int main(){
	int numero, armstrongEncontrado;
	for (armstrongEncontrado=0; !armstrongEncontrado;){
		printf("Ingrese un número Armstrong: ");
		scanf("%d", &numero);
		if (numero>0){
			int numeroCopia=numero, cantidadDigitos;
			for (cantidadDigitos=0; numeroCopia!=0; cantidadDigitos++){
				numeroCopia/=10;
			}
			int suma=0;
			for (numeroCopia=numero; numeroCopia!=0; numeroCopia/=10){
				int digito=numeroCopia%10;
				suma+=pow(digito, cantidadDigitos);
			}
			if (numero==suma){
				armstrongEncontrado=1;
				printf("El numero %d es Armstrong\n", numero);
			}
		}
	}
}


