#include <stdio.h>
#define PI 3.141592
#include <math.h>
// Jeremy Daniel Aldama Giraldo 20206228
int main(){
	double diametro1, generatriz1, diametro2, generatriz2, altura1, altura2, area1, area2, volumen1, volumen2, radio1, radio2;
	double areaLateralCono1, areaLateralCono2, areaCirculo1, areaCirculo2;
	printf("Ingrese el diámetro y generatriz del cono 1: ");
	scanf("%lf %lf", &diametro1, &generatriz1);
	printf("Ingrese el diámetro y generatriz del cono 2: ");
	scanf("%lf %lf", &diametro2, &generatriz2);
	//paso a dividir el 2 de la formula diametro=radio*2
	radio1 = diametro1/2;
	radio2 = diametro2/2;
	//Calculo en el pdf de la suma de los cuadrados de la altura y el radio es igual a la generatriz al cuadrado
	//Tomando en cuenta que la altura siempre es mayor a 0
	altura1 = sqrt(generatriz1*generatriz1-radio1*radio1);
	altura2 = sqrt(generatriz2*generatriz2-radio2*radio2);
	areaLateralCono1 = PI*radio1*generatriz1;
	areaLateralCono2 = PI*radio2*generatriz2;
	areaCirculo1 = PI*radio1*radio1;
	areaCirculo2 = PI*radio2*radio2;
	area1 = areaLateralCono1 + areaCirculo1;
	area2 = areaLateralCono2 + areaCirculo2;
	//Casteo al 1/3 para que salga un número decimal
	volumen1 = (double)1/3*PI*radio1*radio1*altura1;
	volumen2 = (double)1/3*PI*radio2*radio2*altura2;
	//Si la altura 1 es menor a la altura 2 (Altura 2 mayor entonces es verdadero) saldrá 1 y 1 + 1 = 2(Altura 2)
	//Si la altura 1 no es menor a la altura 2 (Altura 1 mayor entonces es falso) saldrá 0 y 1 + 1 = 1(Altura 1)
	//Si las dos alturas son iguales no se cumplira lo primero y saldrá 0 + 1 (verdadero que las dos alturas sean iguales) = 1(Altura1)
	//fabs para que cuando salgo 1-2=-1 lo pongo en absoluto con positivo
	int verificarMayorAltura = fabs( (altura1<altura2) + 1 - (altura1==altura2)*2 );
	
	//Coloco .2 para redondear a 2 decimal tal como esta en el pdf
	printf("\nResultados del cono 1: \n");
	printf("Altura: %.2lf\n", altura1);
	printf("Área: %.2lf\n", area1);
	printf("Volumen: %.2lf\n\n", volumen1);
	
	printf("Resultados del cono 2: \n");
	printf("Altura: %.2lf\n", altura2),
	printf("Área: %.2lf\n", area2);
	printf("Volumen: %.2lf\n\n", volumen2);
	
	printf("El cono %d tiene mayor altura.", verificarMayorAltura);
	
	return 0;
}
