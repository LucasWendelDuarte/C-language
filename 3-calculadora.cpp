#include <stdio.h>
$ {}
int main(){
	
	int operacao;
	float num1, num2;
	
	printf("Digite o primeiro numero:");
	scanf("%f", &num1);
	
	printf("Digite o segundo numero:");
	scanf("%f", &num2);
	
	printf("\n1- Media entre os numeros digitados\n");
	printf("2- Soma dos numeros digitados \n");
	printf("3- Produto entre os numeros digitados \n\n");
	
	printf("Digite a operacao desejada:");
	scanf("%i", &operacao);
	
	switch (operacao){
		case 1: 
			printf("Voce escolheu media e o resultado e: %.2f", (num1+num2)/2);
			break;
			
		case 2:
			printf("Voce escolheu soma e o resultado e: %.2f",num1+num2);
			break;
			
		case 3: 
			printf("Voce escolheu multiplicacao e o resultado e: %.2f", num1*num2);
			break;
		
		default:
			printf("Invalido");
	
	}
}
