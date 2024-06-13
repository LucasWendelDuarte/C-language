#include <stdio.h>

int main(){
	float salario;
	
	printf("Digite o salario do funcionario:");
	scanf("%f", &salario);
	
	if(salario<=300){
		printf("O salario reajustado e: %.2f", salario+50);
	}
	else 	if(salario>300){
				printf("O salario reajustado e: %.2f", salario+70);
			}
			
}
