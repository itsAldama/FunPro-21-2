#include <stdio.h>
int validarFechaMagica(int dia, int mes, int anio);
void pasarSiguienteFecha(int *dia, int *mes, int *anio);
int cantidadDiasMaximo(int mes, int anio);
int validarAnioBisiesto(int anio);


int main(){
	int anioInicio, anioFin, dia, mes, anio, esFechaMagica;
	printf("Ingrese anio de inicio: ");
	scanf("%d", &anioInicio);
	printf("Ingrese anio fin: ");
	scanf("%d", &anioFin);
	dia=1;
	mes=1;
	anio=anioInicio;
	while (anio<=anioFin){
		esFechaMagica = validarFechaMagica(dia, mes, anio);
		if (esFechaMagica){
			printf("%d-%d-%d\n", dia, mes, anio);
		}
		pasarSiguienteFecha(&dia, &mes, &anio);
	}
}

int validarFechaMagica(int dia, int mes, int anio){
	return ((dia*mes)==(anio%100));
}

void pasarSiguienteFecha(int *dia, int *mes, int *anio){
	int diasMaximo = cantidadDiasMaximo(*mes, *anio);
	(*dia)++;
	if (*dia>diasMaximo){
		(*dia)=1;
		(*mes)++;
		if (*mes>12){
			*mes=1;
			(*anio)++;
		}
	}
	
}

int cantidadDiasMaximo(int mes, int anio){
	int cantidadDiasMaximo;
	if (mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12){
		cantidadDiasMaximo=31;
	}
	else if (mes==4 || mes==6 || mes==9 || mes==11){
		cantidadDiasMaximo=30;
	}
	else{
		int esAnioBisiesto=validarAnioBisiesto(anio);
		if (esAnioBisiesto){
			cantidadDiasMaximo=29;
		}
		else{
			cantidadDiasMaximo=28;
		}
	}
	return cantidadDiasMaximo;
}

int validarAnioBisiesto(anio){
	return ((anio%4==0)&&(anio%400==0 || anio%100!=0));
}
