//Voc� tem um desejo incontrol�vel de descobrir quantos dias voc� j� viveu em toda a sua vida, 
//ent�o fa�a um algoritmo que leia o ano de nascimento de uma pessoa e o ano atual, depois 
//calcule e escreva o nome e o n�mero de dias, aproximados, j� vividos por essa pessoa.
#include <stdio.h>
#include <stdlib.h>
int main (){
	int dias, idade, anoNasc, anoAt;
	char nome [50];
	 printf("Informe seu nome nome: ");
	 scanf("%s",&nome);
	 fflush(stdin); 
	 printf("Informe o ano atual: ");
	 scanf("%d",&anoAt);
	 printf("Informe o ano do seu nascimento: ");
	 scanf("%d",&anoNasc);
	system("cls");
		idade=anoAt-anoNasc; 
		dias=idade*365; 
	 printf("%s, voce ja viveu aproximadamente %d dias!", nome, dias);
return 0;
}
