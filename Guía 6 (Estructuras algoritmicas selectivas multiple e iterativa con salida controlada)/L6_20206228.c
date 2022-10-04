// Jeremy Daniel Aldama Giraldo 20206228

double calcularRazonAurea(int iteraciones);

#include <stdio.h>
#include <math.h>

int main(){
	int iteraciones;
	char tipo;
	double razonAurea, altura, ladoLateral, baseMayor, baseMenor, base, ladoIgual;
	printf("Ingrese el n�mero de iteraciones para calcular la razon �urea: ");
	scanf("%d", &iteraciones);
	if (iteraciones<10){
		printf("El n�mero de iteraciones debe ser mayor o igual a 10.");
	}
	else{
		printf("Ingrese el tipo de objeto (Rect�ngulo [R], tri�ngulo [T], o Trapecio [P]): ");
		scanf(" %c", &tipo);
		if (tipo!='R' && tipo!='T' && tipo!='P'){
			printf("El tipo de objeto ingresado no es v�lido.");
		}
		else{
			if (tipo=='R'){
				printf("Ingrese la base del rect�ngulo �ureo: ");
				scanf("%lf", &base);
				razonAurea=calcularRazonAurea(iteraciones);
				altura=razonAurea*base;
				printf("La altura de un rect�ngulo �ureo de base %.2lf es %.2lf", base, altura);
			}
			else if (tipo=='T'){
				printf("Ingrese la base del tri�ngulo �ureo: ");
				scanf("%lf", &base);
				razonAurea=calcularRazonAurea(iteraciones);
				ladoIgual=razonAurea*base;
				altura=sqrt(pow(ladoIgual, 2) - pow(base/2, 2));//se calcula la altura, apartir de obtener el valor del lado igual, por pitagora
				printf("La altura de un tri�ngulo �ureo de base %.2lf es %.2lf y sus lados iguales son de %.2lf", base, altura, ladoIgual);
			}
			else{
				printf("Ingrese el lado lateral del trapecio �ureo: ");
				scanf("%lf", &ladoLateral);
				razonAurea=calcularRazonAurea(iteraciones);
				baseMayor=razonAurea*ladoLateral;
				baseMenor=ladoLateral/razonAurea;
				printf("Las bases de un trapecio �ureo de lado lateral %.2lf son %.2lf y %.2lf", ladoLateral, baseMayor, baseMenor);
			}
		}
	}
	return 0;
}

double calcularRazonAurea(int iteraciones){
	double dentro;
	int i=1;
	dentro=sqrt(1);//de ac� empieza
	do{
		dentro=sqrt(1+dentro);//cada raiz de 1 ira dentro de otra raiz de 1
		i++;//contador de iteraciones
	}while(i<=iteraciones);
	return dentro;
}
