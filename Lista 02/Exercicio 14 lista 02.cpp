//Fazer um algoritmo que leia três valores, determine e imprima o maior deles.
#include<stdio.h> 
#include<stdlib.h>
int main(){
float n1, n2, n3;	
printf("Informe tres numeros: \n"); 
 scanf("%f%f%f", &n1, &n2, &n3); 
 fflush(stdin); 	
system("cls");
	if (n1>n2 && n1>n3){
		printf("O maior numero digitado e: %.0f.", n1); 
	}
	else 
	if (n2>n1 && n2>n3){
		printf("O maior numero digitado e: %.0f.", n2);
	}
	else {
		printf("O maior numero digitado e: %.0f.", n3); 
	}
return 0;
}
