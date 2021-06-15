//Efetuar a leitura de um número e apresentá-lo como o seu módulo (somente seu valor 
//absoluto) elaborando os cálculos matemáticos para isso
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
	
