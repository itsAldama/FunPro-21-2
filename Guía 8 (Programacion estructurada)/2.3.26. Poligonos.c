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
		printf("Ingrese la opción del menú: ");
		scanf(" %char", &opcion);
		if (opcion=='R'){
			printf("----------- Polígonos regulares -----------\n");
			printf("Ingrese la cantidad de polígonos regulares a evaluar: ");
			scanf("%d", &cantidad);
			promedioDeAreaRegulares(cantidad, &promedio);
			printf("El promedio de los %d polígonos regulares es: %lf", cantidad, promedio);
			break;
		}
		else if (opcion=='C'){
			printf("----------- Figuras circulares -----------\n");
			printf("Ingrese la cantidad de figuras circulares a evaluar: ");
			scanf("%d", &cantidad);
			promedioDeAreaCirculares(cantidad, &promedio);
			printf("El promedio de áreas de las %d figuras circulares es: %lf", cantidad, promedio);
			break;
		}
		else if (opcion=='X'){
			printf("----------- Cuadriláteros -----------\n");
			printf("Ingrese la cantidad de cuadriláteros a evaluar: ");
			scanf("%d", &cantidad);
			promedioDeAreaCuadrilateros(cantidad, &promedio);
			break;
		}
		else if (opcion=='*'){
			break;
		}
		else{
			printf("Opcion no válida.\n");
		}
	}
	return 0;
}

void promedioDeAreaRegulares(int cantidad, double *promedio){
	int i, lados;
	double perimetro, area, longApotema, longLado, sumaAreas;
	char letra;
	for (i=1, sumaAreas=0; i<=cantidad; i++){
		printf("Ingrese la letra que identifica el polígono regular #%d: (P)Pentágono, (H)Hexágono, (O)Octógono: ", i);
		scanf(" %char", &letra);
		printf("Ingrese el valor de la longitud del lado del polígono regular: ");
		scanf("%lf", &longLado);
		printf("Ingrese la longitud de la apotema del polígono regular: ");
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
		printf("\n...................Polígono regular #%d de %d lados ...................\n", i, lados);
		perimetro=lados*longLado;
		area=perimetro*longApotema/2;
		printf("El perímetro es: %.2lf\n", perimetro);
		printf("El área es: %.2lf\n", area);
		sumaAreas+=area;
	}
	*promedio=sumaAreas/cantidad;
}

void promedioDeAreaCirculares(int cantidad, double *promedio){
	int i, opcion;
	double area, radio, angulo, radMayor, radMenor, sumaArea=0;
	for (i=1; i<=cantidad; i++){
		printf("Ingrese la opción de la figura circular a evaluar: (1) Sector Circular, (2) Corona circular, (3) Trapecio circular: ");
		scanf("%d", &opcion);
		if (opcion==1){
			printf("Ingrese el radio y el ángulo: ");
			scanf("%lf %lf", &radio, &angulo);
			printf("Sector circular #%d\n", i);
			printf("..................................\n");
			area=PI*radio*radio*angulo/360;
			printf("El área es: %lf", area);
			sumaArea+=area;
		}
		else if (opcion==2){
			printf("Ingrese el radio mayor y radio menor: ");
			scanf("%lf %lf", &radMayor, &radMenor);
			area=PI*(radMayor*radMayor-radMenor*radMenor);
			printf("Sector circular #%d\n", i);
			printf("..................................\n");
			printf("El área es: %lf", area);
			sumaArea+=area;	
		}
		else{
			printf("Ingrese el radio del círculo más grande y el radio del círculo más pequenio: ");
			scanf("%lf %lf", &radMayor, &radMenor);
			printf("Ingrese el ángulo: ");
			scanf("&d", &angulo);
			printf("Sector circular #%d", i);
			printf("..................................\n");
			area=PI*(radMayor*radMayor-radMenor*radMenor)*angulo/(double)360;
			printf("El área es: %lf", area);
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
		printf("Ingrese la opcion de la figura cuadrilátera a evaluar: (R)Rombo, (O)Romboide, (T)Trapecio: ");
		scanf(" %c", &opcion);
		if (opcion=='O'){
			printf("Ingrese la base y la altura: ");
			scanf("%lf %lf", &base, &altura);
			printf("Cuadrilátero #%d\n", i);
			printf("..................................");
			area=base*altura;
			printf("El área es: %lf\n", area);
			sumaArea+=area;
		}
		else if (opcion=='R'){
			printf("Ingrese diagonal mayor, diagonal menor: ");
			scanf("%lf %lf", &diagMayor, &diagMenor);
			printf("Cuadrilátero #%d\n", i);
			printf("..................................");
			area=diagMayor*diagMenor/2;
			printf("El área es: %lf\n", area);
			sumaArea+=area;
		}
		else{
			printf("Ingrese diagonal mayor, diagonal menor, altura: ");
			scanf("%lf %lf %lf", &diagMayor, &diagMenor, &altura);
			printf("Cuadrilátero #%d\n", i);
			printf("..................................");
			area=diagMayor*diagMenor*altura/2;
			printf("El área es: %lf\n", area);
			sumaArea+=area;
		}
	}
	*promedio=sumaArea/cantidad;
}
