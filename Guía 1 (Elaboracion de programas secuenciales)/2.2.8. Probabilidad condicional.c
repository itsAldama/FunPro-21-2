#include <stdio.h>

int main(){
	double probabilidadLabConExam, labYExam, onlyLab;
	printf("Ingrese el porcentaje de alumnos que les gusta rendir los laboratorios y examenes: ");
	scanf("%lf", &labYExam);
	printf("Ingresar el porcentaje de alumnos que les gusta rendir el laboratorio: ");
	scanf("%lf", &onlyLab);
	probabilidadLabConExam = labYExam / onlyLab * 100;
	printf("La probabilidad de que a un alumno de FunPro que le gusta rendir el Lab, le guste rendir el examen es: %lf", probabilidadLabConExam);
	
	return 0;
}
