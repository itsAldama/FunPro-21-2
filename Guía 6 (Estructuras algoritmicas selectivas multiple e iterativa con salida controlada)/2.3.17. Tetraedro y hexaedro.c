#include <stdio.h>
#include <math.h>
#define ERROR 0.00001

int validarPoliedro(char poliedro);
void leerCoordenadas(double *x, double *y);
void validarTetraedroYCantidadCarasQueNoFormanUnTrianguloEquilatero(int *validarTetraedro, int *cantidadCarasNoFormanTrianguloEquilatero);
void validarHexaedroYCantidadCarasQueNoFormanCuadrado(int *validarHexaedro, int *cantidadCarasNoFormanCuadrados);
int validarEquilatero(double x1, double y1, double x2, double y2, double x3, double y3);
int validarCuadrado(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4);
double calcularDistancia(double x1, double y1, double x2, double y2);

int main(){
	char poliedro;
	int esPoliedro, validarTetraedro, cantidadCarasNoFormanTrianguloEquilatero, validarHexaedro, cantidadCarasNoFormanCuadrados;
	printf("Evaluando tetraedros y hexaedros\n");
	printf("Ingrese el poliedro a evaluar (T-Tetraedro y H-Hexaedro): ");
	scanf(" %c", &poliedro);
	esPoliedro=validarPoliedro(poliedro);
	if (!esPoliedro){
		printf("La opción de poliedro ingresado no corresponde a un Tetraedro o Hexaedro.");
	}
	else{
		if (poliedro=='T' || poliedro=='t'){
			printf("Vamos a evaluar un Tetraedro, por ello validaremos las 4 caras que deben ser triángulos equiláteros\n");
			validarTetraedroYCantidadCarasQueNoFormanUnTrianguloEquilatero(&validarTetraedro, &cantidadCarasNoFormanTrianguloEquilatero);
			if (validarTetraedro==0){
				printf("El tetraedro ingresado no es válido.\n");
				printf(" La cantidad de caras que no son triángulos equiláteros es %d", cantidadCarasNoFormanTrianguloEquilatero);
			}
			else{
					printf("El tetraedro ingresado es válido.");
			}
		}
		else{
			printf("Vamos a evaluar un Hexaedro, por ello validaremos las 6 caras que deben ser cuadrados\n");
			validarHexaedroYCantidadCarasQueNoFormanCuadrado(&validarHexaedro, &cantidadCarasNoFormanCuadrados);
			if (validarHexaedro==0){
				printf("El hexaedro ingresado no es válido.");
				printf(" La cantidad de caras que no son cuadrados es %d", cantidadCarasNoFormanCuadrados);
			}
			else{
				printf("El tetraedro ingresado es válido.");
			}
		}
	}
	return 0;
}

void validarTetraedroYCantidadCarasQueNoFormanUnTrianguloEquilatero(int *validarTetraedro, int *cantidadCarasNoFormanTrianguloEquilatero){
	int i=1, esEquilatero;
	*cantidadCarasNoFormanTrianguloEquilatero=0;
	double x1, x2, x3, y1, y2, y3;
	do{
		printf("Ingrese las coordenadas de los puntos A, B y C del triángulo de la cara %d\n", i);
		printf("Coordenadas x e y del punto A: ");
		leerCoordenadas(&x1, &y1);
		printf("Coordenadas x e y del punto B: ");
		leerCoordenadas(&x2, &y2);
		printf("Coordenadas x e y  del punto C: ");
		leerCoordenadas(&x3, &y3);
		esEquilatero=validarEquilatero(x1, y1, x2, y2, x3, y3);
		if (!esEquilatero){
			printf("Los puntos ingresados no forman un triángulo equilátero.\n");
			(*cantidadCarasNoFormanTrianguloEquilatero)++;
		}
		i++;
	}while (i<=4);
	if (*cantidadCarasNoFormanTrianguloEquilatero==0){
		*validarTetraedro=1;
	}
	else{
		*validarTetraedro=0;
	}
}

void validarHexaedroYCantidadCarasQueNoFormanCuadrado(int *validarHexaedro, int *cantidadCarasNoFormanCuadrados){
	int i=1, esCuadrado;
	*cantidadCarasNoFormanCuadrados=0;
	double x1, x2, x3, x4, y1, y2, y3, y4;
	do{
		printf("Ingrese las coordenadas de los puntos A, B, C y D del cuadrado de la cara %d\n", i);
		printf("Coordenada x e y del punto A: ");
		leerCoordenadas(&x1, &y1);
		printf("Coordenada x e y del punto B: ");
		leerCoordenadas(&x2, &y2);
		printf("Coordenada x e y del punto C: ");
		leerCoordenadas(&x3, &y3);
		printf("Coordenada x e y del punto D: ");
		leerCoordenadas(&x4, &y4);
		esCuadrado=validarCuadrado(x1, y1, x2, y2, x3, y3, x4, y4);
		if (!esCuadrado){
			printf("Los puntos ingresados no forman un cuadrado\n");
			(*cantidadCarasNoFormanCuadrados)++;
		}
		i++;
	}while (i<=6);
	if (*cantidadCarasNoFormanCuadrados==0){
		*validarHexaedro=1;
	}
	else{
		*validarHexaedro=0;
	}
}

void leerCoordenadas(double *x, double *y){
	scanf("%lf %lf", x, y);
}

int validarEquilatero(double x1, double y1, double x2, double y2, double x3, double y3){
	double distancia1a2=calcularDistancia(x1, y1, x2, y2);
	double distancia2a3=calcularDistancia(x2, y2, x3, y3);
	double distancia3a1=calcularDistancia(x3, y3, x1, y1);
	if (fabs(distancia1a2-distancia2a3)<=ERROR && fabs(distancia2a3-distancia3a1)<=ERROR && fabs(distancia3a1-distancia1a2)<=ERROR){
		return 1;
	}
	else{
		return 0;
	}
}

int validarCuadrado(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4){
	double distancia1a2=calcularDistancia(x1, y1, x2, y2);
	double distancia2a3=calcularDistancia(x2, y2, x3, y3);
	double distancia3a4=calcularDistancia(x3, y3, x4, y4);
	double distancia4a1=calcularDistancia(x4, y4, x1, y1);
	if (fabs(distancia1a2-distancia2a3)<=ERROR && fabs(distancia2a3-distancia3a4)<=ERROR && fabs(distancia3a4-distancia4a1)<=ERROR && fabs(distancia4a1-distancia1a2)<=ERROR){
		return 1;
	}
	else{
		return 0;
	}
}

double calcularDistancia(double x1, double y1, double x2, double y2){
	double distancia=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	return distancia;
}

int validarPoliedro(char poliedro){
	if (poliedro!='T' && poliedro!='t' && poliedro!='H' && poliedro!='h'){
		return 0;
	}
	else{
		return 1;
	}
}
