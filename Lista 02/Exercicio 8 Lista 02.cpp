//Modifique o algoritmo 4 (Sr. ou Sra.), feito anteriormente, para ler a altura e apresentar o 
//peso ideal da pessoa, utilizando as seguintes fórmulas
//para homem: peso = (72.5 * altura) - 58
//para mulher: peso = (62.1 * altura) - 44.7
#include<stdio.h>
#include<stdlib.h>
int main(){
char nome[30];
int sexo;
double altura,peso;
	  printf("Insira seu nome:\n");
	  scanf("%s",&nome);
	system("cls");		  
	  printf("Informe seu sexo\n"); 
	  printf("[1] Masculino\n");
	  printf("[2] Feminino\n");
	  scanf("%d",&sexo);
	system("cls");
	  printf("Informe sua altura:\n");
	  scanf("%lf",&altura);				
	system("cls");	
	switch(sexo){
	case 1:
		if(peso=(72.5*altura)-58){
			printf("............Ola Ilmo. Sr. %s !............\n",nome);
			printf("Com base nas informacoes,seu peso ideal seria:\n");
			printf(".................%.1lf kg.....................\n",peso);
			printf("-----------------Se cuide!--------------------\n");
		}
		break;
	case 2:
		if(peso=(62.1*altura)-44.7){
			printf("............Ola Ilma. Sra. %s !............\n",nome);
			printf("Com base nas informacoes,seu peso ideal seria:\n");
			printf(".................%.1lf kg.....................\n",peso);
			printf("-----------------Se cuide!--------------------\n");
		}						
		break;
	}	
return 0;
}
