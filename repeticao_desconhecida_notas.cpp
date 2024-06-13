/*6-) Implementar um programa capaz de ler a nota de 
TODOS os alunos e retornar a quantidade de alunos aprovados, 
considerando que a média para aprovação no mínimo 60,00 pontos.*/
#include<stdio.h>
main(){
	float nota;
	int qtde;
	char pergunta;
	qtde = 0;
	pergunta = 's';
	do
	{	printf("Digite a nota");
		scanf("%f", &nota);
		fflush(stdin); //texto char e numero int ou float scanf,voce vai precisar do fflush
		if(nota>= 60)
			qtde++;
		printf("Deseja continuar? S/N");//i++;
		scanf("%c",&pergunta);
		while (pergunta != 's' && pergunta != 'S' && 	//não precisa
				pergunta != 'n' && pergunta != 'N' ){
					printf("Deseja continuar, digite novamente? S/N");//i++;
					scanf("%c",&pergunta);
					fflush(stdin); 
		}
	}
	while (pergunta == 's' || pergunta == 'S');
	printf("Qtde aprovado %i", qtde);
}
