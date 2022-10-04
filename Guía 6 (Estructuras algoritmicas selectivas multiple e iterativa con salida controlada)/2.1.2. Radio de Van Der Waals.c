#include <stdio.h>

int main(){
	char codigo;
	printf("Ingrese el código de una letra: ");
	scanf(" %c", &codigo);
	if (codigo!='A' && codigo!='R' && codigo!='N' && codigo!='D' && codigo!='C' && codigo!='Q' && codigo!='E' && codigo!='G' && codigo!='H'){
		printf("Ingrese un código correcto");
	}
	else{
		switch (codigo){
			case 'A':{
				printf("El aminoácido es Alanina y su radio es 67");
				break;
			}
			case 'R':{
				printf("El aminoácido es Arginina y su radio es 148");
				break;
			}
			case 'N':{
				printf("El aminoácido es Asparagina y su radio es 96");
				break;
			}
			case 'D':{
				printf("El aminoácido es Ácido aspártico y su radio es 91");
				break;
			}
			case 'C':{
				printf("El aminoácido es Cisteína y su radio es 86");
				break;
			}
			case 'Q':{
				printf("El aminoácido es Glutamina y su radio es 114");
				break;
			}
			case 'E':{
				printf("El aminoácido es Ácido glutámico y su radio es 109");
				break;
			}
			case 'G':{
				printf("El aminoácido es Glicina y su radio es 48");
				break;
			}
			default:{
				printf("El aminoácido es Histidina y su radio es 118");
				break;
			}
		}
	}
}
