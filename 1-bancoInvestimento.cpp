#include <stdio.h>

int main(){
	int tipo;
	float valor;
	
	printf("1- Poupanca  3 por cento \n"); // Sandro, o % n�o estava aparecendo no execut�vel
	printf("2- Renda Fixa  4 por cento \n\n");
	
	printf("Digite o tipo de investimento:");
	scanf("%i", &tipo);
	
	printf("Digite o valor a ser investido:");
	scanf("%f", &valor);
	
	switch(tipo){
		case 1:
		 	printf("\nVoce escolheu Poupan�a e o valor corrigido e: %.2f", valor+(valor*0.03));
			break;
		case 2: 
			printf("\nVoce escolheu Renda Fixa e o valor corrigido e: %.2f", valor+(valor*0.04));
			break;
		default:
			printf("Invalido");
	}
}
