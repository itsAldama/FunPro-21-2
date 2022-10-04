//Jeremy Daniel Aldama Giraldo 20206228

#include <stdio.h>

int main(){
	int numero1, numero2, i, divisor1, divisor2, sumaDivisoresComunes, divisorComun, cantidadDivisores;
	double promedioDivisoresComunes;
	printf("Ingrese los dos números a evaluar: ");
	scanf("%d %d", &numero1, &numero2);
	i=2;
	cantidadDivisores=0;
	sumaDivisoresComunes=0;
	while (i<numero1 || i<numero2){//Para que pueda escoger hasta donde quiero que llegue el contador, de acuerdo con el numero que necesito de sus divisores
		if (numero1%i==0 && i<numero1){
			divisor1=i;
		}
		else{
			divisor1=0;//Para que los divisores anteriores no sean tomados en cuenta para el if (divisor1==divisor2)
		}
		if (numero2%i==0 && i<numero2){
			divisor2=i;
		}
		else{
			divisor2=1;
		}
		if (divisor1==divisor2){
			divisorComun=i;
			sumaDivisoresComunes+=divisorComun;//Sumador de divisores comunes
			cantidadDivisores++;//Si los dos divisores iguales, añado 1 a mi contador
		}
		i++;
	}
	if (sumaDivisoresComunes==0){
		printf("Los números ingresados no tienen divisores en común.");
	}
	if (sumaDivisoresComunes>0){
		promedioDivisoresComunes = (double)sumaDivisoresComunes/cantidadDivisores;
		printf("La suma de los divisores comunes entre los dos números es: %d\n", sumaDivisoresComunes);
		printf("El promedio de divisores comunes entre los dos números es: %.2lf", promedioDivisoresComunes);
	}
	return 0;
}
