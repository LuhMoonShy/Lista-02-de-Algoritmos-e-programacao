//Fa�a um algoritmo que calcule e escreva o valor a ser pago a sua provedora de acesso � 
//Internet, para isso voc� dever� ler a quantidade de horas que voc� utilizou. Sabe-se que voc� 
//pagar� R$ 30,00 por at� 20 horas de uso (va1or b�sico), caso voc� tenha usado mais de 20 
//horas, ent�o voc� deve acrescentar 10% do valor b�sico para cada hora extra utilizada.
#include <stdio.h>
#include<stdlib.h>
int main (){
int valor, horas;
printf("Informe quantas horas de internet foram utilizadas: ");
scanf("%d", &horas);
system("cls");
	if (horas>0 && horas<=20){
		printf("O valor a ser pago e:R$30,00.");
	}
else
	if (horas>20){
		valor=30+(horas-20)*3;
		printf("O valor a ser pago e:R$%d.",valor);
	}
	else{
		printf ("Valor invalido");
	}
return 0;
}
