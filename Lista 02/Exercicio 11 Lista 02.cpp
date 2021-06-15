//Alterar o exercício do triângulo (exercício 9), de forma que o algoritmo apresente no caso de 
//triângulo o seu tipo: equilátero (todos os lados são iguais), isósceles (dois lados iguais) ou um 
//outro triângulo qualquer (escaleno). Apresente o algoritmo, fazendo o teste do algoritmo 
//(chinesinho) ao lado.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
int ladoA,ladoB,ladoC,ladoG;
	printf("--CONDICAO DE EXISTENCIA DE UM TRIANGULO--\n");
	printf("\nDigite o primeiro lado:\n");
	scanf("%d",&ladoA); 
	fflush(stdin);
	printf("\nDigite o segundo lado:\n");
	scanf("%d",&ladoB);
	fflush(stdin);
	printf("\nDigite o terceiro lado:\n");
	scanf("%d",&ladoC);  
	fflush(stdin);  
system("cls");	
	if(ladoA+ladoB>ladoC && ladoA+ladoC>ladoB && ladoB+ladoC>ladoA){ 
		printf("Um triangulo com os lados %d, %d, e %d pode existir.\n",ladoA,ladoB,ladoC);
		if (ladoA==ladoB && ladoB==ladoC){
	     	 printf("\nO tipo de triangulo formado sera: Equilatero.\n");
		}
		else 
			if (ladoA==ladoB || ladoA==ladoC || ladoB==ladoC){
	     	 printf("\nO tipo de triangulo formado sera: Isosceles.\n");
			}
		else 
			 printf("\nO tipo de triangulo formado sera: Escaleno.\n"); 
	}  
	else{
		printf("Os lados informados nao conferem com as condicoes de existencia de um triangulo.\n");
	}
return 0;
}
