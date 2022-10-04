#include <stdio.h>

int main(){
	int n, a, b;
	printf("Ingrese n: ");
	scanf("%d", &n);
	for (a=n; a>=0; a--){
		printf("%02d |", a);
		for (b=0; b<=n; b++){
			printf(" %02d", b*a);
		}
		printf("\n");
	}
	printf("    ");
	for (b=0; b<=n; b++){
		printf("---");
	}
	printf("\n X  ");
	for (b=0; b<=n; b++){
		printf(" %02d", b);
	}
	return 0;
}
