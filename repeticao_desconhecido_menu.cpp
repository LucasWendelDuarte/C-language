#include <stdio.h>
main(){
	char pergunta; // pergunta se deseja continuar S repito N paro

	float nota;
	//pergunta = 's';//i=1;

	do //executa pelo menos 1 vez, diferença while
	{


		printf("1- cadastro\n");
		printf("2- venda\n");
		printf("3- relatorio\n");
		printf("4- sair\n");
		printf("Digite 4 para sair.");//i++;
		scanf("%c",&pergunta);
		switch(pergunta)
		{
				case '1':
				case '2':
		}
	}
	while (pergunta == '1' || pergunta == '2' || pergunta == '3'); //i<=4 
	while (pergunta >= '1' && pergunta <= '3'); //i<=4
	while (pergunta <> '4'); //i<=4
	
}
