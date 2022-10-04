#include <stdio.h>
#include <math.h>
#define PI 3.141592

int main(){
	double probabilidadVariable, variable, mediaDistribucionNormal, desviacionEstandar;
	printf("Ingrese la variable, media de la distribucion normal y la desviacion estándar de la distribución normal: ");
	scanf("%lf %lf %lf", &variable, &mediaDistribucionNormal, &desviacionEstandar);
	probabilidadVariable = 1/(desviacionEstandar*sqrt(2*PI))*exp(-(pow(variable-mediaDistribucionNormal,2))/(2*desviacionEstandar*desviacionEstandar));
	printf("La probabilidad es: %.9lf", probabilidadVariable); 
	return 0;
}
