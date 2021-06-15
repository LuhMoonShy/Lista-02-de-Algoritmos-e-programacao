 //Ler dois valores numéricos e apresentar a diferença do maior valor pelo menor.
#include<stdio.h>
#include<stdlib.h>
int main(){
 float diferenca,numero1,numero2;	
		printf("Informe o primeiro valor: ");
		 scanf("%f",&numero1); 
		printf("Informe o segundo valor: ");
		 scanf("%f",&numero2);			
	system("cls");
	if(numero1>numero2){  
		diferenca = numero1-numero2;
		printf("A diferenca entre o maior numero e o menor numero e: %.0f.",diferenca);
	}
	else 
		if(numero2>numero1){ 
		diferenca=numero2-numero1;
		printf("A diferenca entre o maior numero e o menor numero e: %.0f.",diferenca); 
		}
	else 
		if(numero1==numero2){ 
		printf("Nao ha diferenca entre os dois numeros com valores iguais.",diferenca); 
		}
	return 0;		
} 
