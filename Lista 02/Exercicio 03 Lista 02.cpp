//Dado três valores, verificar se eles podem constituir os lados de um triângulo (triângulo é uma 
//figura geométrica onde cada lado é menor do que a soma dos outros dois lados).
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
	} 
	else{
		printf("Os lados informados nao conferem com as condicoes de existencia de um triangulo.\n");
	}
return 0;
}

