#include <stdio.h>

int main(){
	int i, cantRespuestas, cantResN=0, cantResS=0, cantResC=0, cantResO=0, cantNulos=0;
	char regionResidencia;
	printf("Ingrese la cantidad de respuestas a procesar: ");
	scanf("%d", &cantRespuestas);
	i=1;
	while (i<=cantRespuestas){
		printf("Ingrese la región de residencia del encuestado %d: ", i);
		scanf(" %c", &regionResidencia); //No olvidad para %c, separas el % de "
		if (regionResidencia=='N'){
			cantResN++;
		}
		if (regionResidencia=='S'){
			cantResS++;
		}
		if (regionResidencia=='C'){
			cantResC++;
		}
		if (regionResidencia=='O'){
			cantResO++;
		}
		if (regionResidencia !='N' && regionResidencia !='S' && regionResidencia !='C' && regionResidencia !='O'){
			cantNulos++;
		}
		i++;
	}
	int totalRes = cantResN + cantResS + cantResC + cantResO + cantNulos;
	printf("Cantidad de residentes en Región Norte: %d\n", cantResN);
	printf("Cantidad de residentes en Región Sur: %d\n", cantResS);
	printf("Cantidad de residentes en Región Centro: %d\n", cantResC);
	printf("Cantidad de residentes en Región Oriente: %d\n", cantResO);
	printf("Cantidad de blancos o nulos: %d\n\n", cantNulos);
	double porcentajeResidentesN = (double)cantResN/totalRes*100;
	double porcentajeResidentesS = (double)cantResS/totalRes*100;
	double porcentajeResidentesC = (double)cantResC/totalRes*100;
	double porcentajeResidentesO = (double)cantResO/totalRes*100;
	double porcentajeBN = (double)cantNulos/totalRes*100;
	printf("Porcentaje de residentes en Región Norte: %.3lf%%\n", porcentajeResidentesN);
	printf("Porcentaje de residentes en Región Sur: %.3lf%%\n", porcentajeResidentesS);
	printf("Porcentaje de residentes en Región Centro: %.3lf%%\n", porcentajeResidentesC);
	printf("Porcentaje de residentes en Región Oriente: %.3lf%%\n", porcentajeResidentesO);
	printf("Porcentaje de blancos o nulos: %.2lf%%\n", porcentajeBN);
	return 0;
}
