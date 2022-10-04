#include <stdio.h>

void mostrarFdeNyM(int n, int m);
int calcularSumatoriaPrimo(int n, int m);
int calcularSumatoriaFibo(int n, int m);
int obtenerPrimoDePosicionI(int i);
int funcionFibonacciDeI(int i);

int main(){
	int n, m;
	printf("Ingrese dos números : ");
	scanf("%d %d", &n, &m);
	if (n>0 && n<m){
		mostrarFdeNyM(n, m);
	}
	else{
		"Los números deben ser mayores que 0 y el segundo mayor que el primero";
	}
	return 0;
}

void mostrarFdeNyM(int n, int m){
	int sumatoria;
	if (2<=m && m<=8){
		sumatoria=calcularSumatoriaPrimo(n, m);
		printf("f(%d, %d)=%d", n, m, sumatoria);
	}
	else{
		sumatoria=calcularSumatoriaFibo(n, m);
		printf("f(%d, %d)=%d", n, m, sumatoria);
	}
}

int calcularSumatoriaPrimo(int n, int m){
	int i, suma, primo;
	for (i=n, suma=0; i<=m; i++){
		primo=obtenerPrimoDePosicionI(i);
		suma+=primo;
	}
	return suma;
}

int obtenerPrimoDePosicionI(int posicion){
	int numero, encontrado, cantidadDivisores, contarPosicion, i;
	for (numero=2, encontrado=0, contarPosicion=0; !encontrado; numero++){
		for (cantidadDivisores=0, i=1; i<=numero; i++){
			if (numero%i==0){
				cantidadDivisores++;
			}
		}
		if (cantidadDivisores==2){
			contarPosicion++;
		}
		if (contarPosicion==posicion){
			encontrado=1;
			return numero;//retornamos aca porque luego el numero se actualizara y devolvera segun el ejemplo 26 y no 23.
		}
	}
}

int calcularSumatoriaFibo(int n, int m){
	int i, fibo, suma;
	for (i=n, suma=0; i<=m; i++){
		fibo=funcionFibonacciDeI(i);
		suma+=fibo;
	}
	return suma;
}

int funcionFibonacciDeI(int i){
	if (i-1==0){
		return 1;
	}
	else if (i-1==1){
		return 1;
	}
	else{
		return funcionFibonacciDeI(i-1)+funcionFibonacciDeI(i-2);
	}
}
