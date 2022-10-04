#include <stdio.h>

int main(){
	int anio, mes;
	printf("Introduzca anio: ");
	scanf("%d", &anio);
	printf("Introduzca mes: ");
	scanf("%d", &mes);
	if (anio>0){
		switch (mes){
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:{
				printf("31 d�as");
				break;
			}
			case 4:
			case 6:
			case 9:
			case 11:{
				printf("30 d�as");
				break;
			}
			default:{
				if (anio%4==0 && (anio%400==0||anio%100!=0)){
					printf("29 d�as");
				}
				else{
					printf("28 d�as");
				}
				break;
			}
		}
	}
	else{
		printf("El anio debe ser mayor a 0");
	}
	return 0;
}
