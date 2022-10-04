#include <stdio.h>

int main(){
	printf("El orden de ingreso de las magnitudes es Tensión Intensidad de Corriente Resistencia Potencia.\n");
	printf("Coloque 0 en las magnitudes que desea calcular, solo 2 magnitudes pueden ser diferente de 0.\n");
	printf("Para terminar, coloque -1 para todas las magnitudes.");
	scanf("%lf %lf %lf %lf", &tension, &intensidadCorriente, &resistencia, &potencia);
	esCorrecto=validarDatos(tension, intensidadCorriente, resistencia, potencia);
	if (!esCorrecto){
		printf("Solo dos magnitudes pueden tener el valor de cero. No se cumplen con el formato de datos solicitados.");
	}
	else{
		if (tension==0){
			tension=calcularTension(intensidadCorriente, resistencia, potencia);
			printf("La tension es %lf V.\n", tension);
		}
		if (intensidadCorriente==0){
			intensidadCorriente=cancularIntensidadCorriente(tension, resistencia, potencia);
			printf("La intensidad de corriente es %lf A.\n", intensidadCorriente);
		}
		if (resistencia==0){
			resistencia=calcularResistencia(tension, intensidadCorriente, potencia);
			printf("La resistencia es %lf\n", resistencia);
		}
		if (potencia==0){
			potencia=calcularPotencia(resistencia, intensidadCorriente, tension);
			printf("La potencia es %lf", potencia);
		}
	}
	return 0;
}

int validarDatos(double tension, double intensidadCorriente, double resistencia, double potencia){
	int casoCorrecto1=(tension==0 && intensidadCorriente==0 && resistencia>0 && potencia>0);
	int casoCorrecto2=(intensidadCorriente==0 && resistencia==0 && tension>0 && ptencia>0);
	int casoCorrecto3=(resistencia==0 && potencia==0 && tension>0 && intensidadCorriente>0);
	int casoCorrecto4=(potencia==0 && tension==0 && intensidadCorriente>0 && resistencia>0);
	int casoCorrecto5=(tension==0 && resistencia==0 && intensidadCorriente>0 && potencia>0);
	int casoCorrecto6=(intensidadCorriente==0 && potencia==0 && tension>0 && resistencia>0);
	return casoCorrecto1 && casoCorrecto2 && casoCorrecto3 && casoCorrecto4 && casoCorrecto5 && casoCorrecto6;	
}

double calcularTension(double intensidadCorriente, double resistencia, double potencia){
	
}
