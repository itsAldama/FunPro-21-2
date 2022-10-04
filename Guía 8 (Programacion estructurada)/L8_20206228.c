// Jeremy Daniel Aldama Giraldo

#include <stdio.h>

int verificarLetras(char a, char b, char c, char d);
char asignarLetra(int i, char a, char b, char c, char d);
void mostrarTablaDePermutaciones(char a, char b, char c, char d, int *cantidadPermutaciones, int *numeroMayor, char *letraMayor1, char *letraMayor2, char *letraMayor3, char *letraMayor4, int *numeroPermutacion);
int calcularNumero(char letra1, char letra2, char letra3, char letra4);

int main(){
	int letrasValidas, cantidadPermutaciones, numeroMayor, numeroPermutacion;
	char a, b, c, d, letraMayor1, letraMayor2, letraMayor3, letraMayor4;
	printf("Ingrese 4 caracteres: ");
	scanf(" %c%c%c%c", &a, &b, &c, &d);
	letrasValidas=verificarLetras(a, b, c, d);
	if (!letrasValidas){
		printf("Las letras ingresadas no son may�sculas o no son diferentes en s�");
	}
	else{
		mostrarTablaDePermutaciones(a, b, c, d, &cantidadPermutaciones, &numeroMayor, &letraMayor1, &letraMayor2, &letraMayor3, &letraMayor4, &numeroPermutacion);
		printf("Cantidad permutaciones: %d\n", cantidadPermutaciones);
		printf("El mayor n�mero formado es: %d\n", numeroMayor);
		printf("Es el resultado de la permutacion %d de las letras %c%c%c%c %cx1000+%dx100+%dx10+%d = %d", numeroPermutacion, letraMayor1, letraMayor2, letraMayor3, letraMayor4, letraMayor1, letraMayor2, letraMayor3, letraMayor4, numeroMayor);
	}
	return 0;
}

int verificarLetras(char a, char b, char c, char d){
	if (a>='A'&&a<='Z'&&b>='A'&&b<='Z'&&c>='A'&&c<='Z'&&d>='A'&&d<='Z'&&a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d){
		return 1;
	}
	else{
		return 0;
	}
}

void mostrarTablaDePermutaciones(char a, char b, char c, char d, int *cantidadPermutaciones, int *numeroMayor, char *letraMayor1, char *letraMayor2, char *letraMayor3, char *letraMayor4, int *numeroPermutacion){
	int i, j, k, l, numero;
	*cantidadPermutaciones=0;
	*numeroMayor=0;
	char letra1, letra3, letra4, letra2;
	for (i=1; i<=4; i++){
		letra1=asignarLetra(i, a, b, c, d);
		for (j=1; j<=4; j++){
			letra2=asignarLetra(j, a, b, c, d);
			for (k=1; k<=4; k++){
				letra3=asignarLetra(k, a, b, c, d);
				for (l=1; l<=4; l++){
					letra4=asignarLetra(l, a, b, c, d);
					if(i!=j && i!=k && i!=l && j!=k && j!=l && k!=l){
						numero=calcularNumero(letra1, letra2, letra3, letra4);
						(*cantidadPermutaciones)++;
						if (numero>*numeroMayor){
							*numeroMayor=numero;
							*letraMayor1=letra1;
							*letraMayor2=letra2;
							*letraMayor3=letra3;
							*letraMayor4=letra4;
							*numeroPermutacion=*cantidadPermutaciones;
						}
						printf("%d) %c %c %c %c\n", *cantidadPermutaciones, letra1, letra2, letra3, letra4);
					}
				}
			}
		}
	}
}

char asignarLetra(int i, char a, char b, char c, char d){
	if (i==1){
		return a;
	}
	else if (i==2){
		return b;
	}
	else if (i==3){
		return c;
	}
	else{
		return d;
	}
}

int calcularNumero(char letra1, char letra2, char letra3, char letra4){
	return ((int) letra1*1000+ (int) letra2*100+ (int) letra3*10+ (int) letra4);
}
