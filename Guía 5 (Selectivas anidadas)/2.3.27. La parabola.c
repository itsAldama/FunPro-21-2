#include <stdio.h>
#include <math.h>
#define PRIMERCUADRANTE 1
#define SEGUNDOCUADRANTE 2
#define TERCERCUADRANTE 3
#define CUARTOCUADRANTE 4
#define ORIGENCOORDENADAS 0
#define EJEX 5
#define EJEY 6

void leerDatos(int i, int *a, int *b, int *c);
void obtenerXeY(int a, int b, int c, double *x1, double *y1);
int obtenerCuadrante(double x1, double y1);

int main(){
	double x1, y1, x1DeY1, y1DeX1, xMasALaDerecha, yMasAbajo, copiaX1, copiaY1;
	int cantidadParabolas, i, a, b, c, cuadrante; 
	printf("Ingrese la cantidad de parábolas: ");
	scanf("%d", &cantidadParabolas);
	if (cantidadParabolas<=0){
		printf("La cantidad de parábolas debe ser un número mayor que cero");
	}
	i=1;
	copiaX1=-99999999;
	copiaY1=99999999;
	while (i<=cantidadParabolas){
		leerDatos(i, &a, &b, &c);
		if (a==0){
			printf("El coeficiente a no puede ser igual a cero\n");
		}
		else{
			obtenerXeY(a, b, c, &x1, &y1);
			printf("El vértice de la parábola es: (%.2lf, %.2lf)\n", x1, y1);
			if (a>0){
				printf("La parábola se abre hacia arriba");
			}
			else{
				printf("La parábola se abre hacia abajo");
			}
			cuadrante=obtenerCuadrante(x1, y1);
			if (cuadrante==PRIMERCUADRANTE){
				printf("\nEl vértice está en el primer cuadrante\n\n");
			}
			else if (cuadrante==SEGUNDOCUADRANTE){
				printf("\nEl vértice está en el segundo cuadrante\n\n");
			}
			else if (cuadrante==TERCERCUADRANTE){
				printf("\nEl vértice está en el tercer cuadrante\n\n");
			}
			else if (cuadrante==CUARTOCUADRANTE){
				printf("\nEl vértice está en el cuarto cuadrante\n\n");
			}
			else if (cuadrante==ORIGENCOORDENADAS){
				printf("\nEl vértice está en el origen de coordenadas\n\n");
			}
			else if (cuadrante==EJEX){
				printf("\nEl vértice está en el eje x\n\n");
			}
			else{
				printf("\nEl vértice está en el eje y\n\n");
			}
			if (x1>copiaX1){
				copiaX1=x1;
				xMasALaDerecha=copiaX1;
				y1DeX1=y1;
			}
			/*else{
				xMasALaDerecha=xMasALaDerecha;
				y1DeX1=y1DeX1;
			}*/
			if (y1<copiaY1){
				copiaY1=y1;
				yMasAbajo=copiaY1;
				x1DeY1=x1;
			}
			/*else{
				yMasAbajo=yMasAbajo;
				x1DeY1=x1DeY1;
			}*/
		}
		i++;	
	}
	printf("El vértice que se encuentra más a la derecha del origen es (%.2lf, %.2lf)\n", xMasALaDerecha, y1DeX1);
	printf("El vértice que se encuentra más abajo del origen es (%.2lf, %.2lf)", x1DeY1, yMasAbajo);
	return 0;
}

void leerDatos(int i, int *a, int *b, int *c){
	printf("\nDada la ecuacion cuadrática %d de una parábola ax2 + bx + c = 0\n", i);
		printf("Ingrese el coeficiente a: ");
		scanf("%d", a);
		printf("Ingrese el coeficiente b: ");
		scanf("%d", b);
		printf("Ingrese el coeficiente c: ");
		scanf("%d", c);
}

void obtenerXeY(int a, int b, int c, double *x1, double *y1){
	*x1 = -(double)b/(2*a);
	*y1 = (double)(4*a*c-b*b)/(4*a);
	if (*y1==-0){
		*y1=0;
	}
}

int obtenerCuadrante(double x1, double y1){
	int cuadrante;
	if (x1>0 && y1>0){
		cuadrante=1;
	}
	else if (x1<0 && y1>0){
		cuadrante=2;
	}
	else if (x1<0 && y1<0){
		cuadrante=3;
	}
	else if (x1>0 && y1<0){
		cuadrante=4;
	}
	else if (x1==0 && y1!=0){
		cuadrante=6;
	}
	else if (y1==0 && x1!=0){
		cuadrante=5;
	}
	else{
		cuadrante=0;
	}
	return cuadrante;
}
