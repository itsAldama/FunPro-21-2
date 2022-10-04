#include <stdio.h>

char convertirDigito(char digito);

int main(){
	char primerDigito, segundoDigito;
	int segundoDigitoConvertido, primerDigitoConvertido, valorEnBase10;
	printf("Ingrese el número de tres dígitos en base 16, dígito por dígito.\n");
	printf("Ingrese el primer dígito de más a la izquierda: ");
	scanf(" %c", &primerDigito);
	printf("Ingrese el segundo dígito de más a la derecha: ");
	scanf(" %c", &segundoDigito);
	if (((primerDigito>='1' && primerDigito<='9') || (primerDigito>='A' && primerDigito<='F')) && ((segundoDigito>='0' && segundoDigito<='9') || (segundoDigito<='F' && segundoDigito>='0'))){
		primerDigitoConvertido = convertirDigito(primerDigito);
		segundoDigitoConvertido = convertirDigito(segundoDigito);
		valorEnBase10 = primerDigitoConvertido*16+segundoDigitoConvertido;
		printf("\nEl valor %c%c en base 10 es: %d", primerDigito, segundoDigito, valorEnBase10);
	}
	else{
		printf("Ingrese dígitos correctos.");
	}
}

char convertirDigito(char digito){
	int digitoConvertido;
	switch (digito){
		case '0':{
			digitoConvertido=0;
			break;
		}
		case '1':{
			digitoConvertido=1;
			break;
		}
		case '2':{
			digitoConvertido=2;
			break;
		}
		case '3':{
			digitoConvertido=3;
			break;
		}
		case '4':{
			digitoConvertido=4;
			break;
		}
		case '5':{
			digitoConvertido=5;
			break;
		}
		case '6':{
			digitoConvertido=6;
			break;
		}
		case '7':{
			digitoConvertido=7;
			break;
		}
		case '8':{
			digitoConvertido=8;
			break;
		}
		case '9':{
			digitoConvertido=9;
			break;
		}
		case 'A':{
			digitoConvertido=10;
			break;
		}
		case 'B':{
			digitoConvertido=11;
			break;
		}
		case 'C':{
			digitoConvertido=12;
			break;
		}
		case 'D':{
			digitoConvertido=13;
			break;
		}
		case 'E':{
			digitoConvertido=14;
			break;
		}
		default:{
			digitoConvertido=15;
			break;
		}
	}
	return digitoConvertido;
}
