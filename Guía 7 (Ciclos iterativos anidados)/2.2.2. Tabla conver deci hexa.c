#include <stdio.h>
#include <math.h>

void mostrarTablaConversionDecimalHexadecimal(int a, int b);
char convertirDigitoDecimalAHexadecimal(int i);

int main(){
	int a, b;
	printf("Ingrese rango inicial: ");
	scanf("%d", &a);
	printf("Ingrese rango final: ");
	scanf("%d", &b);
	if (b<=9999 && a<b){
		printf("Tabla de conversión Decimal a Hexadecimal\n");
		printf("Decimal			Hexadecimal\n");
		printf("-------			-----------\n");
		mostrarTablaConversionDecimalHexadecimal(a, b);
	}
	else{
		printf("Rango incorrecto");
	}
	return 0;
}

void mostrarTablaConversionDecimalHexadecimal(int a, int b){
	int i, j, digito, numero;
	char posicion1, posicion2, posicion3, posicion4, digitoConvertido;
	for (i=a; i<=b; i++){
		numero=i;//fue importante poner esto
		for (j=1, posicion1=' ', posicion2=' ', posicion3=' ', posicion4=' '; numero>0; j++, numero/=16){
			digito=numero%16;
			digitoConvertido=convertirDigitoDecimalAHexadecimal(digito);
			if (j==1){
				posicion1=digitoConvertido;
			}
			else if (j==2){
				posicion2=digitoConvertido;
			}
			else if (j==3){
				posicion3=digitoConvertido;
			}
			else{
				posicion4=digitoConvertido;
			}
		}
		printf("%d			%c%c%c%c\n", i, posicion4, posicion3, posicion2, posicion1);
	}
}

char convertirDigitoDecimalAHexadecimal(int i){
	if (i>=0 && i<=9){
		return '0'+i;
	}
	if (i>=10 && i<=15){
		return i-10+'A';
	}
}
