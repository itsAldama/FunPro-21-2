//Jeremy Daniel Aldama Giraldo 20206228

#include <stdio.h>
#include <math.h>

int calcularSumaDeDivisores(int numero);
void sumaDigitosYSumaDivisores(int numero, int cantidadDigitos, int *sumaDigitos, int sumaDivisores, int *verificarCanada);
void salidaDeResultados(int sumaDigitosCuadrado, int sumaDivisores, int verificarCanada);

int main(){
	int numero, cantidadDigitos, sumaDigitosCuadrado, verificarCanada, sumaDivisores;
	printf("Ingrese el número a evaluar y la cantidad de dígitos: ");
	scanf("%d %d", &numero, &cantidadDigitos);
	sumaDigitosYSumaDivisores(numero, cantidadDigitos, &sumaDigitosCuadrado, sumaDivisores, &verificarCanada);
	sumaDivisores=calcularSumaDeDivisores(numero);//llamamos a esta funcion para obtener la suma de divisores e imprimir respuestas
	salidaDeResultados(sumaDigitosCuadrado, sumaDivisores, verificarCanada);
	return 0;
}

int calcularSumaDeDivisores(int numero){//modulo que devuelve un valor y usa una iterativa.
	int i, divisor, sumaDivisores;
	sumaDivisores=0;
	i=2;//empezamos de 2, porque el 1 es trivial
	while (i<numero){//el mismo número es trivial
		if (numero%i==0){
			divisor=i;
			sumaDivisores += divisor;
		}
		i++;
	}
	return sumaDivisores;
} 

void sumaDigitosYSumaDivisores(int numero, int cantidadDigitos, int *sumaDigitosCuadrado, int sumaDeDivisores, int *verificarCanada){//modulo que modifica por lo menos 2 valores, tiene estructura selectiva y llama a otro módulo.
	int suma=0;
	int digito;
	int i=1;
	int n = cantidadDigitos-1;
	sumaDeDivisores = calcularSumaDeDivisores(numero);//primero calculamos la suma de sus divisores, porque luego el numero sera = a 0
	while (i<=cantidadDigitos){
		digito = numero/pow(10, n);
		numero = numero%(int)pow(10, n);
		suma += pow(digito, 2);
		n--;//disminuimos en 1, porque se eliminara el primer digito del número
		i++;
	}
	*sumaDigitosCuadrado=suma;
	if (*sumaDigitosCuadrado==sumaDeDivisores){
		*verificarCanada=1;
	}
	else{
		*verificarCanada=0;
	}
}

void salidaDeResultados(int sumaDigitosCuadrado, int sumaDivisores, int verificarCanada){//modulo que no modifica ni devuelve valores
	if (verificarCanada){
		printf("El número es Canada");
	}
	else{
		printf("El número no es Canada");
	}
	printf("\nLa suma de los cuadrados de sus dígitos es %d y de sus divisores es %d", sumaDigitosCuadrado, sumaDivisores);
}
