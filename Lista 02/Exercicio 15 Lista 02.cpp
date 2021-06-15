//Faça um algoritmo que calcule e escreva o valor a ser pago a sua provedora de acesso à 
//Internet, para isso você deverá ler a quantidade de horas que você utilizou. Sabe-se que você 
//pagará R$ 30,00 por até 20 horas de uso (va1or básico), caso você tenha usado mais de 20 
//horas, então você deve acrescentar 10% do valor básico para cada hora extra utilizada.
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
