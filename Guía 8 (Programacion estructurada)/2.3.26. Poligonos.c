#include <stdio.h>
#define PI 3.141592


void promedioDeAreaRegulares(int cantidad, double *promedio);
void promedioDeAreaCirculares(int cantidad, double *promedio);
void promedioDeAreaCuadrilateros(int cantidad, double *promedio);

int main(){
	int salir=0, cantidad;
	double promedio;
	char opcion;
	while (!salir){
		printf("Ingrese la opci�n del men�: ");
		scanf(" %char", &opcion);
		if (opcion=='R'){
			printf("----------- Pol�gonos regulares -----------\n");
			printf("Ingrese la cantidad de pol�gonos regulares a evaluar: ");
			scanf("%d", &cantidad);
			promedioDeAreaRegulares(cantidad, &promedio);
			printf("El promedio de los %d pol�gonos regulares es: %lf", cantidad, promedio);
			break;
		}
		else if (opcion=='C'){
			printf("----------- Figuras circulares -----------\n");
			printf("Ingrese la cantidad de figuras circulares a evaluar: ");
			scanf("%d", &cantidad);
			promedioDeAreaCirculares(cantidad, &promedio);
			printf("El promedio de �reas de las %d figuras circulares es: %lf", cantidad, promedio);
			break;
		}
		else if (opcion=='X'){
			printf("----------- Cuadril�teros -----------\n");
			printf("Ingrese la cantidad de cuadril�teros a evaluar: ");
			scanf("%d", &cantidad);
			promedioDeAreaCuadrilateros(cantidad, &promedio);
			break;
		}
		else if (opcion=='*'){
			break;
		}
		else{
			printf("Opcion no v�lida.\n");
		}
	}
	return 0;
}

void promedioDeAreaRegulares(int cantidad, double *promedio){
	int i, lados;
	double perimetro, area, longApotema, longLado, sumaAreas;
	char letra;
	for (i=1, sumaAreas=0; i<=cantidad; i++){
		printf("Ingrese la letra que identifica el pol�gono regular #%d: (P)Pent�gono, (H)Hex�gono, (O)Oct�gono: ", i);
		scanf(" %char", &letra);
		printf("Ingrese el valor de la longitud del lado del pol�gono regular: ");
		scanf("%lf", &longLado);
		printf("Ingrese la longitud de la apotema del pol�gono regular: ");
		scanf("%lf", &longApotema);
		if (letra=='P'){
			lados=5;
		}
		else if (letra=='H'){
			lados=6;
		}
		else{
			lados=8;
		}
		printf("\n...................Pol�gono regular #%d de %d lados ...................\n", i, lados);
		perimetro=lados*longLado;
		area=perimetro*longApotema/2;
		printf("El per�metro es: %.2lf\n", perimetro);
		printf("El �rea es: %.2lf\n", area);
		sumaAreas+=area;
	}
	*promedio=sumaAreas/cantidad;
}

void promedioDeAreaCirculares(int cantidad, double *promedio){
	int i, opcion;
	double area, radio, angulo, radMayor, radMenor, sumaArea=0;
	for (i=1; i<=cantidad; i++){
		printf("Ingrese la opci�n de la figura circular a evaluar: (1) Sector Circular, (2) Corona circular, (3) Trapecio circular: ");
		scanf("%d", &opcion);
		if (opcion==1){
			printf("Ingrese el radio y el �ngulo: ");
			scanf("%lf %lf", &radio, &angulo);
			printf("Sector circular #%d\n", i);
			printf("..................................\n");
			area=PI*radio*radio*angulo/360;
			printf("El �rea es: %lf", area);
			sumaArea+=area;
		}
		else if (opcion==2){
			printf("Ingrese el radio mayor y radio menor: ");
			scanf("%lf %lf", &radMayor, &radMenor);
			area=PI*(radMayor*radMayor-radMenor*radMenor);
			printf("Sector circular #%d\n", i);
			printf("..................................\n");
			printf("El �rea es: %lf", area);
			sumaArea+=area;	
		}
		else{
			printf("Ingrese el radio del c�rculo m�s grande y el radio del c�rculo m�s pequenio: ");
			scanf("%lf %lf", &radMayor, &radMenor);
			printf("Ingrese el �ngulo: ");
			scanf("&d", &angulo);
			printf("Sector circular #%d", i);
			printf("..................................\n");
			area=PI*(radMayor*radMayor-radMenor*radMenor)*angulo/(double)360;
			printf("El �rea es: %lf", area);
			sumaArea+=area;
		}
	}
	*promedio=sumaArea/cantidad;
}

void promedioDeAreaCuadrilateros(int cantidad, double *promedio){
	int i;
	double area, base, altura, diagMayor, diagMenor, sumaArea=0;
	char opcion;
	for (i=1; i<=cantidad; i++){
		printf("Ingrese la opcion de la figura cuadril�tera a evaluar: (R)Rombo, (O)Romboide, (T)Trapecio: ");
		scanf(" %c", &opcion);
		if (opcion=='O'){
			printf("Ingrese la base y la altura: ");
			scanf("%lf %lf", &base, &altura);
			printf("Cuadril�tero #%d\n", i);
			printf("..................................");
			area=base*altura;
			printf("El �rea es: %lf\n", area);
			sumaArea+=area;
		}
		else if (opcion=='R'){
			printf("Ingrese diagonal mayor, diagonal menor: ");
			scanf("%lf %lf", &diagMayor, &diagMenor);
			printf("Cuadril�tero #%d\n", i);
			printf("..................................");
			area=diagMayor*diagMenor/2;
			printf("El �rea es: %lf\n", area);
			sumaArea+=area;
		}
		else{
			printf("Ingrese diagonal mayor, diagonal menor, altura: ");
			scanf("%lf %lf %lf", &diagMayor, &diagMenor, &altura);
			printf("Cuadril�tero #%d\n", i);
			printf("..................................");
			area=diagMayor*diagMenor*altura/2;
			printf("El �rea es: %lf\n", area);
			sumaArea+=area;
		}
	}
	*promedio=sumaArea/cantidad;
}
