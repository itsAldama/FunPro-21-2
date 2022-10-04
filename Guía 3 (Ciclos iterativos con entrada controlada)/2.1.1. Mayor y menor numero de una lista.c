#include <stdio.h>

int main(){
	char nombreCiudad, primeraCiudad, segundaCiudad;
	int cantCiudades;
	double radiacion, radiacionMayor, segundaRadiacionMayor;
	printf("Ingrese la cantidad de ciudades: ");
	scanf("%d", &cantCiudades);
	int contador=1;
	radiacionMayor=0;
	segundaRadiacionMayor=0;
	while (contador<=cantCiudades){
		printf("\nIngrese nombre de la ciudad: ");
		scanf(" %c", &nombreCiudad);
		printf("Ingrese valor de radiacion: ");
		scanf("%lf", &radiacion);
		if (radiacion>radiacionMayor){
			segundaRadiacionMayor=radiacionMayor;
			segundaCiudad=primeraCiudad;
			radiacionMayor=radiacion;
			primeraCiudad=nombreCiudad;
		}
		if ((radiacion<radiacionMayor) && (radiacion>segundaRadiacionMayor)){
			segundaRadiacionMayor=radiacion;
			segundaCiudad=nombreCiudad;
		}
		contador++;
	}
	if (radiacion<0){
		printf("\nNo se ingresaron valores de radiación para ninguna ciudad");
	}
	if (cantCiudades==1){
		printf("La primera ciudad con mayor radiación es %c (%.2lf)).", nombreCiudad, radiacionMayor);
	}
	if (cantCiudades>1){
	printf("\nLa primera ciudad con mayor radiacion es %c (%.2lf)\n", primeraCiudad, radiacionMayor);
	printf("La segunda ciudad con mayor radiacion es %c (%.2lf)", segundaCiudad, segundaRadiacionMayor);
	}
	return 0;
}
