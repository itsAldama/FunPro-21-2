#include <stdio.h>
#include <math.h>

int main(){
	int numeroLados, x1, y1, i, x, y, nuevox, nuevoy;
	double suma, distancia;
	printf("Ingrese el n�mero de lados del pol�gono: ");
	scanf("%d", &numeroLados);
	printf("Ingrese el punto 1 (x, y): ");
	scanf("%d %d", &x1, &y1);
	i=2;
	suma=0;
	while (i<=numeroLados){
		printf("Ingrese el punto %d (x, y): ", i);
		scanf("%d %d", &x, &y);
		if (y<0){
			printf("El punto ingresado no pertenece al primer ni al segundo cuadrante\n");
			printf("Ingrese el punto %d (x, y): ", i);
			scanf("%d %d", &x, &y);
		}
		if (i==2){
			distancia = sqrt(pow(x-x1, 2) + pow(y-y1, 2));
		}
		if (i>2){
			distancia = sqrt(pow(x-nuevox, 2) + pow(y-nuevoy, 2));
		}
		nuevox=x;
		nuevoy=y;
		suma+=distancia;
		i++;
	}
	suma = suma + sqrt(pow(nuevox-x1, 2) + pow(nuevoy-y1, 2));
	printf("El per�metro del pol�gono de %d lados es: %lf", numeroLados, suma);
}
