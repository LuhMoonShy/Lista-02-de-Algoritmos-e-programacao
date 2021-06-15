//Fazer um algoritmo que leia o nome e a altura de três pessoas, determine e apresente o nome 
//e a altura da menor delas.
#include <stdio.h>
#include <stdlib.h>
int main(){
	char nome1[20], nome2[20], nome3[20];
	double altura1, altura2, altura3;
		printf ("Informe um nome e uma altura(em centimetros),nessa ordem:\n");
		scanf("%s%lf",&nome1, &altura1);
		fflush (stdin);
		printf ("Informe um nome e uma altura(em centimetros), nessa ordem: ");
		scanf("%s%lf",&nome2, &altura2);
		fflush (stdin);
		printf ("Informe um nome e uma altura(em centimetros), nessa ordem: ");
		scanf("%s%lf",&nome3, &altura3);
		fflush (stdin);	
		system("cls");
		if (altura1 < altura2 && altura1 < altura3){
			printf("%s voce possui a menor altura (%.0lfcm) dentre os participantes!", nome1,altura1);
		}
		if (altura2 < altura1 && altura2 < altura3){
			printf("%s voce possui a menor altura (%.0lfcm) dentre os participantes!", nome2,altura2);
		}
		if (altura3 < altura1 && altura3 < altura2){
			printf("%s voce possui a menor altura (%.0lfcm) dentre os participantes!", nome3,altura3);
		}	
	return 0;	
}

