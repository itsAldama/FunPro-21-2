#include <stdio.h>

int calcularDiaDeInicioDelMes(int mes, int anio);
int calcularDiasDelMes(int mes, int anio);
void calendario(int diaDeInicio, int diasDelMes);
	
int main(){
	int mes, anio, diaDeInicio, diasDelMes;
	printf("Ingrese mes: ");
	scanf("%d", &mes);
	printf("Ingrese anio: ");
	scanf("%d", &anio);
	diaDeInicio=calcularDiaDeInicioDelMes(mes, anio);
	diasDelMes=calcularDiasDelMes(mes, anio);
	calendario(diaDeInicio, diasDelMes);
	return 0;
}

int calcularDiaDeInicioDelMes(int mes, int anio){
	int diaInicial=(1+(13*(mes+1)/5)+anio+anio/4-anio/100+anio/400)%7;
	return diaInicial;
}

int calcularDiasDelMes(int mes, int anio){
	int esBisiesto=(anio%4==0)&&(anio%400==0||anio%100!=0);
	if (mes==1||mes==3||mes==5||mes==8||mes==10||mes==12){
		return 31;
	}
	else if (mes==4||mes==6||mes==7||mes==9||mes==11){
		return 30;
	}
	else{
		if (esBisiesto){
			return 29;
		}
		else{
			return 28;
		}
	}
}

void calendario(int diaDeInicio, int diasDelMes){
	int i;
	printf("\n  L  M  X  J  V  S  D\n");
	if (diaDeInicio==4){
		printf("        ");
		for (i=1; i<=diasDelMes; i++){
			if (i<=9){
				printf("%d  ", i);
			}
			else{
				printf("%d ", i);
			}
			if (i==5){
				printf("\n  ");
			}
			if (i==12){
				printf("\n  ");
			}
			if (i==19){
				printf("\n  ");
			}
			if (i==26){
				printf("\n  ");
			}
		}
	}
}
