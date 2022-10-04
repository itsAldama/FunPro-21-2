#include <stdio.h>
#include <math.h>

int main() {
	int cantidadLapiceros, capacidadPaquete;
	printf("Ingrese la cantidad de lapiceros y capacidad de los paquetes: ");
	scanf("%d %d", &cantidadLapiceros, &capacidadPaquete);
	if (cantidadLapiceros<capacidadPaquete)
		printf("Se requiere 1 paquete");
	else {
		double cantidadPaquetes = (double)cantidadLapiceros/capacidadPaquete;
		int parteEntera = trunc(cantidadLapiceros/capacidadPaquete);
		double parteDecimal = cantidadPaquetes - parteEntera;
		if (parteDecimal>0) {
			printf("Se requiere %d paquetes", parteEntera+1);
		}
		else
			printf("Se requiere %d", parteEntera);
	}
	return 0;
}
