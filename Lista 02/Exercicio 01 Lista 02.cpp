//Construa um algoritmo que a partir da leitura da velocidade e placa do carro, avise ao
//motorista somente se ele será multado, quando estiver trafegando no Eixo Rodoviário (limite
//de 80 km/h). 
#include<stdio.h>
#include<stdlib.h>

int main() {

	char placa[8];
	int velocidade;
	
		printf("--------------------------------------\n"); 
		printf("              DETRAN DF               \n"); 
		printf("--------------------------------------\n"); 
		 printf("Informe a placa do veiculo: ");
	 		scanf("%s",&placa); 
		 printf("Informe a velocidade em que estava: ");
		 	scanf("%d",&velocidade);
	system("cls");		
		if(velocidade<=80){
		  printf(" Placa: %s\n Velocidade: %d Kmh/s\n",placa,velocidade);
		  printf(" Voce estava dentro do limite permitido na avenina, nenhuma multa foi aplicada.");
		}
		else{ 
			printf(" Placa: %s\n Velocidade: %d Kmh/s\n",placa,velocidade);
				if(velocidade<=20*80/100+80){
					printf(" Infracao media.Multa gerada no valor de R$ 130,16.");
				}
				if(velocidade>20*80/100+80  && velocidade<=50*80/100+80 ){
					printf(" Infracao grave.Multa gerada no valor de  R$ 195,23.");
				}
			    if(velocidade>50*80/100+80){
 		   		printf(" Infracao gravissima.Alem de multa no valor de R$ 880,41, CNH suspensa.");
				}
		}

	return 0;
}

