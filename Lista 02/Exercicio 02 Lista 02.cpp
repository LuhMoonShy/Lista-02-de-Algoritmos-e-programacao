//Efetuar a leitura de um n�mero e apresent�-lo como o seu m�dulo (somente seu valor 
//absoluto) elaborando os c�lculos matem�ticos para isso
#include<stdio.h>

int main(){
  int modulo;
  double numero; 

	printf("Digite o valor desejado para conversao : "); 
	 scanf("%lf",&numero); 
	if(numero<=0){ 
		modulo = numero*(-1);
		printf("Modulo de %.0lf e: %d",numero,modulo);
	} 
	else{ 
		printf("Modulo de %.0lf e: %d",numero,(int)numero);
	} 

return 0;
}
	
