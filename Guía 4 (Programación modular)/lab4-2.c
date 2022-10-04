#include <stdio.h>
#include <math.h>

int cantidadCifras(int numero);
void decrementoKatadromePlaindrome(int numero, int *katadrome, int *plaindrome, int *numeroDecrementado);
void salidaResultados(int katadrome, int plaindrome, int numeroDecrementado);

int main(){
	int numero, numeroDecrementado, katadrome, plaindrome;
	printf("Ingrese el número a evaluar: ");
	scanf("%d", &numero);
	decrementoKatadromePlaindrome(numero, &katadrome, &plaindrome, &numeroDecrementado);
	salidaResultados(katadrome, plaindrome, numeroDecrementado);
	return 0;
	
}

int cantidadCifras(int numero){
	int cantidadCifras = log10(numero)+1;
	return cantidadCifras;
}

void decrementoKatadromePlaindrome(int numero, int *katadrome, int *plaindrome, int *numeroDecrementado){
	int i=1;
	int cantCifras = cantidadCifras(numero);
	int n = cantCifras-1;						
	int digitoEliminado=0;
	int primerDigito=0;
	*numeroDecrementado=0;
	int digitoMenor=10;
	int digitoMayor=0;
	while (i<=cantCifras){
		primerDigito = numero/pow(10, n);
		numero = numero%(int)pow(10, n);
		if (primerDigito<digitoMenor){
			digitoMenor=primerDigito;
			*numeroDecrementado=*numeroDecrementado*10+primerDigito;
			*katadrome=1;
		}
		else{
			digitoMenor=0;
			*katadrome=0;
		}
		if (primerDigito>=digitoMayor){
			digitoMayor=primerDigito;
			*plaindrome=1;
		}
		else{
			digitoMayor=10;
			*plaindrome=0;
		}
		n--;
		i++;	
	}
}

void salidaResultados(int katadrome, int plaindrome, int numeroDecrementado){
	if (katadrome){
		printf("El número es Katadrome");
	}
	else{
		printf("El número no es Katadrome");
	}
	printf("\nSe cumple el decremento en el número %d\n", numeroDecrementado);
	if (plaindrome){
		printf("El número es plaindrome");
	}
	else{
		printf("El número no es plaindrome");
	}
}
