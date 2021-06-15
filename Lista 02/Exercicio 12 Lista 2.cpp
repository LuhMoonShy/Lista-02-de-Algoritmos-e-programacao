//Faça um algoritmo em português estruturado que leia o número de DDD e informe a qual 
//cidade pertence, considerando só os seguintes valores:
//61 - Brasília
//71 - Salvador
//11 - São Paulo
//21 - Rio de Janeiro
//32 - Juiz de Fora
//19 - Campinas
//27 - Vitória
//31 - Belo Horizonte
//qualquer outro - uma cidade no Brasil sem identificação
#include<stdio.h>
#include<stdlib.h>
int main(){   
int DDD;
printf ("Informe um DDD:\n");
 scanf ("%d", &DDD);
system("cls");
	switch(DDD){
		case 61:
			printf ("O DDD %d pertence a cidade de Brasilia.\n", DDD);
		break;	
		case 71:
			printf ("O DDD %d pertence a cidade de Salvador.\n" , DDD);
		break;
		case  11:
			printf ("O DDD %d pertence a cidade de Sao Paulo.\n", DDD);
		break;	
		case 21:
			printf ("O DDD %d pertence a cidade deRio de Janeiro.\n", DDD);
		break;
		case 32:
			printf ("O DDD %d pertence a cidade de Juiz de Fora.\n", DDD);
		break;
		case 19:
			printf ("O DDD %d pertence a cidade de Campinas.\n", DDD);
		break;
		case 27:
			printf ("O DDD %d petence a cidade de Vitoria.\n", DDD);
		break;
		case 31:
			printf ("O DDD %d pertence a cidade de Belo Horizonte.\n", DDD);	
		break;
		default:
			printf	("Cidade nao identificada!");
		break;	
	}
return 0;
}
