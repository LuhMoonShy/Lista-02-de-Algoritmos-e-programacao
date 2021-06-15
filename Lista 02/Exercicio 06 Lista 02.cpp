//Escrever um algoritmo que determine se um número inteiro qualquer é PAR ou IMPAR.
#include<stdio.h>
#include<stdlib.h>
int main(){
 int numero;
	printf("Informe um numero por favor!: "); 
	 scanf("%d",&numero); 
system("cls");
	if(numero%2==0){ 
		printf("O numero %d informado e um numero par!",numero); 
	}else
	printf("O numero %d informado e um numero impar!",numero); 
return 0;
} 
	
