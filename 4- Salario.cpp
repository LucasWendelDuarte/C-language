#include <stdio.h>

int main(){
	float salario;
	
	printf("Digite o salario do funcionario:");
	scanf("%f", &salario);
	
	if(salario<= 1000){
		printf("Estagiario");
	}
	
	else if(salario>1000 && salario<=3000){
			printf("Junior");
		}
		
		else if(salario>3000 && salario <=5000){
				printf("Pleno");
			}
			
			else if(salario>5000){
				printf("Senior");
			}
			
}
