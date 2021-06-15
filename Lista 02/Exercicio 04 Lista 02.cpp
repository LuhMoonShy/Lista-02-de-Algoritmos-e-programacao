//Desenvolver um algoritmo que leia o nome e o sexo de uma pessoa e apresente como saída 
//uma das seguintes mensagens: “Ilmo. Sr.”, para o sexo masculino ou “Ilma. Sra.” para o sexo 
//feminino, acrescentando o nome em seguida.
#include<stdio.h>
#include<stdlib.h>
int main(){
char nome[30];
int sexo;
	  printf("Insira seu nome:\n");
	  scanf("%s",&nome);
	system("cls");		  
	  printf("Informe seu sexo\n"); 
	  printf("[1] Masculino\n");
	  printf("[2] Feminino\n");
		scanf("%d",&sexo);	
	system("cls");	
	 switch (sexo) {
		case 1:
			printf("Bem vindo Ilmo. Sr. %s <3!\n",nome);			
			break;
		case 2
			printf("Bem vinda Ilma. Sra. %s <3!\n",nome);			
			break;
		}	
return 0;
}
