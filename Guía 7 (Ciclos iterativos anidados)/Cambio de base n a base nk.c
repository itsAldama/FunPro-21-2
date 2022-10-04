#include <stdio.h>
#include <math.h>
#define ERROR 0.0001

double obtenerExponenteKDecimales(int baseN, int nuevaBase);
int obtenerExponenteKEntero(int baseN, int nuevaBase);
int verificarNumero(int numero, int baseN);
int convertirBaseNBaseNK(int baseN, int numero, int nuevaBase);

int main(){
	int baseN, nuevaBase, numero, numeroEsCorrecto, k1, numeroConvertido;
	double k2;
	printf("Ingrese la base: ");
	scanf("%d", &baseN);
	if (baseN<=2||baseN>=9){
		printf("La base n ingresada no es correcta.");
	}
	else{
		printf("Ingrese el número en la base ingresada: ");
		scanf("%d", &numero);
		numeroEsCorrecto=verificarNumero(numero, baseN);
		if (numero<=0){
			printf("El número debe ser mayor que 0.");
		}
		else if (!numeroEsCorrecto){
			printf("El número ingresado no corresponde a la base n ingresada.");
		}
		else{
			printf("Ingrese la nueva base a donde desea pasar el número: ");
			scanf("%d", &nuevaBase);
			k1=obtenerExponenteKEntero(baseN, nuevaBase);
			k2=obtenerExponenteKDecimales(baseN, nuevaBase);
			if (nuevaBase<=baseN){
				printf("La nueva base no puede ser menor o igual que la base original.");
			}
			else if (nuevaBase>=10){
				printf("La nueva base no puede ser mayor o igual que 10.");
			}
			else if (fabs(k2-k1)>ERROR){
				printf("No se pudo determinar un exponente k entero de la forma base^k = nuevaBase");
			}
			else{
				numeroConvertido=convertirBaseNBaseNK(baseN, numero, nuevaBase);
				printf("El número %d en base %d es igual al número %d en base %d", numero, baseN, numeroConvertido, nuevaBase);
			}
		}
	}
	return 0;
}

int verificarNumero(int numero, int baseN){
	int digito, esValido;
	for(; numero>0; numero/=10){
		digito=numero%10;
		if (digito>=baseN){
			esValido=0;
			break;
		}
		else{
			esValido=1;
		}
	}
	return esValido;
}

double obtenerExponenteKDecimales(int baseN, int nuevaBase){
	return log10(nuevaBase)/log10(baseN);
}

int obtenerExponenteKEntero(int baseN, int nuevaBase){
	return log10(nuevaBase)/log10(baseN);
}

int convertirBaseNBaseNK(int baseN, int numero, int nuevaBase){
	int k=obtenerExponenteKEntero(baseN, nuevaBase), i, grupoDeKCifras, digito, nuevoNumero, nuevoNumeroBaseNK, exponente;
	for (i=0, nuevoNumeroBaseNK=0; numero>0; nuevoNumeroBaseNK+=nuevoNumero*pow(10, i), numero/=pow(10, k), i++){
		grupoDeKCifras=numero%(int)pow(10, k);
		for (exponente=0, nuevoNumero=0; grupoDeKCifras>0; digito=grupoDeKCifras%10, nuevoNumero+=digito*pow(baseN, exponente),exponente++, grupoDeKCifras/=10){
		}
	}
	return nuevoNumeroBaseNK;
}
