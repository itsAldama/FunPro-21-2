#include <stdio.h>

int main(){
	char codigo;
	printf("Ingrese el c�digo de una letra: ");
	scanf(" %c", &codigo);
	if (codigo!='A' && codigo!='R' && codigo!='N' && codigo!='D' && codigo!='C' && codigo!='Q' && codigo!='E' && codigo!='G' && codigo!='H'){
		printf("Ingrese un c�digo correcto");
	}
	else{
		switch (codigo){
			case 'A':{
				printf("El amino�cido es Alanina y su radio es 67");
				break;
			}
			case 'R':{
				printf("El amino�cido es Arginina y su radio es 148");
				break;
			}
			case 'N':{
				printf("El amino�cido es Asparagina y su radio es 96");
				break;
			}
			case 'D':{
				printf("El amino�cido es �cido asp�rtico y su radio es 91");
				break;
			}
			case 'C':{
				printf("El amino�cido es Ciste�na y su radio es 86");
				break;
			}
			case 'Q':{
				printf("El amino�cido es Glutamina y su radio es 114");
				break;
			}
			case 'E':{
				printf("El amino�cido es �cido glut�mico y su radio es 109");
				break;
			}
			case 'G':{
				printf("El amino�cido es Glicina y su radio es 48");
				break;
			}
			default:{
				printf("El amino�cido es Histidina y su radio es 118");
				break;
			}
		}
	}
}
