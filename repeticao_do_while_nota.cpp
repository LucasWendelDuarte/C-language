//while    qtde desconhecida de repeticao
//do while qtde desconhecida de repeticao
//pergunta ao usuario se deseja continuar ? S/N
#include <stdio.h>
main(){
	char pergunta; //int i;
	float nota;
	
	//pergunta = 's';//i=1;
	do // o dowhile executa sempre pelo menos 1 vez, independente da variavel de controle
	//condição no final
	{
		printf("Digite a nota ");
		scanf("%f",&nota);
		fflush(stdin);
		printf("Deseja continuar ? S/N");
		scanf("%c",&pergunta); 	//i++;
	}
	while (pergunta == 's' || pergunta == 'S');
}
