#include <stdio.h>

int main(){
	int cantidadFilas, contadorFilas;
    printf("Ingrese la cantidad de filas: ");
    scanf("%d", &cantidadFilas);
    
    for (contadorFilas=1; contadorFilas<=cantidadFilas; contadorFilas++){
        printf("Filas: %d\n", contadorFilas);
        int k;
        for (k=0; k<contadorFilas; k++){
            int contadorFactorial, n=contadorFilas-1;
            int factorialN=1, factorialK=1, factorialNmenosK=1;
            for (contadorFactorial=1; contadorFactorial<=n; contadorFactorial++){
                factorialN*=contadorFactorial;
                if (contadorFactorial<=k){
                    factorialK*=contadorFactorial;
                }
                if (contadorFactorial<=n-k){
                    factorialNmenosK*=contadorFactorial;
                }           
            }
            int combinatorio=factorialN/(factorialK*factorialNmenosK);
            printf("%d", combinatorio);
        }
        printf("\n");
    }
	return 0;
}
