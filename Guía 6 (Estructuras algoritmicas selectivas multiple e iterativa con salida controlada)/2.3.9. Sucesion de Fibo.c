#include <stdio.h>

int calcularTermino(int posicion, int *cantidadIteraciones);
int verificarPositivo(int i);
int validarTermino(int posicion);

int main(){
	int posicion, termino, esPosicion, cantidadIteraciones;
	printf("Ingrese posición del término: ");
	scanf("%d", &posicion);
	esPosicion=validarTermino(posicion);
	if (!esPosicion){
		printf("Debe ingresar una posición mayor o igual a cero");
	}
	else{
		termino=calcularTermino(posicion, &cantidadIteraciones);
		if (termino==0 || termino==1){
			printf("Número de pasos: 0\n");
			if (termino==0){
				printf("El término 0 de la sucesión de Fibonacci es: 0");
			}
			else{
				printf("El término 1 de la sucesión Fibonacci es: 1");
			}
		}
		else{
			printf("Número de pasos: %d\n", cantidadIteraciones);
			printf("El término %d de la sucesión de Fibonacci es: %d", posicion, termino);
		}
	}
	return 0;
}

int calcularTermino(int posicion, int *cantidadIteraciones){
	*cantidadIteraciones=0;
	int a=1, b=0, c=0, d=1;
	int i=posicion-1;
	int esPositivo=verificarPositivo(i);
	if (posicion==0){
		return 0;
	}
	if (esPositivo){
		do{
			if (i%2!=0){
				a=b*d+a*c;
				b=b*d+a*d+b*c;
			}
			c=c*c+d*d;
			d=2*c*d+d*d;
			i/=2;
			(*cantidadIteraciones)++;
			printf("%d %d", a, b);
		}while (i>0);
		return a+b;
	}
}

int verificarPositivo(int i){
	return i>0;
}

int validarTermino(int posicion){
	return posicion>=0;
}
