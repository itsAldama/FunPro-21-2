#include <stdio.h>

int main(){
	int a, b, p, i, numeroIzquierda, numeroDerecha, cantidadDivisores, j, cantidadDivisoresIzquierda, cantidadDivisoresDerecha;
	printf("Ingrese rango inicial a: ");
	scanf("%d", &a);
	printf("Ingrese rango final b: ");
	scanf("%d", &b);
	if (a>=b){
		printf("El rango es incorrecto");	
	}
	else{
		for (i=a; i<=b; i++){
			if (i>2 && i%2==0){
				for (numeroIzquierda=2; numeroIzquierda<=i-2; numeroIzquierda++){//i-2 pq si el i es 14 el num de la izq no puede ser ni 13 ni 14 sino el de la derecha seria 1 o 0
					for (j=1, cantidadDivisoresIzquierda=0; j<=numeroIzquierda;j++){
						if (numeroIzquierda%j==0){
							cantidadDivisoresIzquierda++;
						}
					}
					numeroDerecha=i-numeroIzquierda;
					for (j=1, cantidadDivisoresDerecha=0; j<=numeroDerecha;j++){
						if (numeroDerecha%j==0){
							cantidadDivisoresDerecha++;
						}
					}
					if (cantidadDivisoresIzquierda==2&&cantidadDivisoresDerecha==2){
						printf("%d = %d + %d\n", i, numeroIzquierda, numeroDerecha);
					}
				}
			}
		}
	}
	return 0;
}
