//Jeremy Daniel Aldama Giraldo 20206228

#include <stdio.h>
#define PI 3.141592

void evaluarConos(int cantConos, double *mayorVolumen);
void evaluarCilindros(int cantCilindros, double *menorVolumen);
void calcularVolumenCilindroCono(double radio, double altura, double *volCilindro, double *volCono);

int main(){
	int cantBases, cantConos, cantCilindros, sumaConos=0, sumaCilindros=0;
	char tipo;
	double mayorVolumen, menorVolumen, mayorVolumenGeneral=-1, menorVolumenGeneral=9999999;
	while (1){
		printf("Ingrese el tipo de figura a analizar: ");
		scanf(" %c", &tipo);
		if (tipo=='C'){
			printf("Ingrese la cantidad de bases del grupo de figuras a evaluar: ");
			scanf("%d", &cantBases);
			if (cantBases==1){
				printf("Figura identificada: -------CONO-------\n");
				printf("Ingrese la cantidad de conos a evaluar: ");
				scanf("%d", &cantConos);
				evaluarConos(cantConos, &mayorVolumen);
				if (mayorVolumen>mayorVolumenGeneral){
					mayorVolumenGeneral=mayorVolumen;
				}
				sumaConos+=cantConos;
			}
			else if (cantBases==2){
				printf("Figura identificada: --------CILINDRO--------\n");
				printf("Ingrese la cantidad de cilindros a evaluar: ");
				scanf("%d", &cantCilindros);
				evaluarCilindros(cantCilindros, &menorVolumen);
				if (menorVolumen<menorVolumenGeneral){
					menorVolumenGeneral=menorVolumen;
				}
				sumaCilindros+=cantCilindros;
			}
			else{
				printf("Figura no identificada");
			}
		}
		else if (tipo=='Z'){
			break;
		}
	}
	printf("REPORTE\n");
	printf("-----\n");
	printf("El total de figuras es: %d\n", sumaCilindros+sumaConos);
	printf("El porcentaje de conos analizados es: %.2lf\n", (double)sumaConos/(sumaConos+sumaCilindros)*100);
	printf("El porcentaje de cilindros analizados es: %.2lf\n", (double)sumaCilindros/(sumaConos+sumaCilindros)*100);
	printf("El mayor volumen de los conos es: %.2lf\n", mayorVolumenGeneral);
	printf("El menor volumen de los cilindros es: %.2lf", menorVolumenGeneral);
	return 0;
}


void evaluarConos(int cantConos, double *mayorVolumen){
	int i;
	double radio, altura, volCono, volCilindro;
	for (i=1, *mayorVolumen=-1; i<=cantConos; i++){
		printf("Cono %d - Ingrese el radio de la base: ", i);
		scanf("%lf", &radio);
		printf("Cono %d - Ingrese la altura del cono: ", i);
		scanf("%lf", &altura);
		calcularVolumenCilindroCono(radio, altura, &volCilindro, &volCono);
		printf("El volumen del cono %d es: %.2lf\n", i, volCono);
		if (volCono>(*mayorVolumen)){
			*mayorVolumen=volCono;
		}
	}
}

void evaluarCilindros(int cantCilindros, double *menorVolumen){
	int i;
	double radio, altura, volCilindro, volCono;
	for (i=1, *menorVolumen=99999999; i<=cantCilindros; i++){
		printf("Cilindro %d - Ingrese el radio de la base: ", i);
		scanf("%lf", &radio);
		printf("Cilindro %d - Ingrese la altura del cilindro: ", i);
		scanf("%lf", &altura);
		calcularVolumenCilindroCono(radio, altura, &volCilindro, &volCono);
		if (volCilindro<(*menorVolumen)){
			*menorVolumen=volCilindro;
		}
		printf("El volumen del cilindro %d es: %.2lf\n", i, volCilindro);
	}
}

void calcularVolumenCilindroCono(double radio, double altura, double *volCilindro, double *volCono){
	*volCilindro=PI*radio*radio*altura;
	*volCono=PI*radio*radio*altura/3;
}
