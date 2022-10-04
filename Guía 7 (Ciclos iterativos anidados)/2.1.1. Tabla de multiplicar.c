#include <stdio.h>

int main(){
	int a, b, c;
	for (a=1; a<=9; a++){
		printf("TABLA %02d\n", a);
		for (b=1; b<=12; b++){
			printf("%02d*%02d=%02d\n", b, a, b*a);
		}
		printf("\n");
	}
	return 0;
}
