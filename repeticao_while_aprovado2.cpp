#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");

	float nota;
	int aprovados;
	char pergunta;
	int i = 1;
	pergunta = 'S';
	while (pergunta == 'S' || pergunta == 's') {
		printf("Digite a nota do aluno %i: ", i);
		scanf("%f", &nota);
		fflush(stdin);		
		if (nota >= 60){
			aprovados++;
		}
		printf("Deseja continuar? S/N");
		scanf("%c",&pergunta);

	}
printf("O número de alunos aprovados foi %i.", aprovados);
}
