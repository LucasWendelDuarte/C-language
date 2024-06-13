#include <stdio.h>
main()
{
	int i;
	float nota;
	float aprovado = 0;
	float reprovado = 0;
	i=1;
	while(i<=5){
		printf("Insira sua nota: ");
		scanf("%f", &nota);
		
		if(nota>=60){
			aprovado+= 1; //aprovado++;
		}

		if(nota<60){
			reprovado = reprovado+1;//reprovado++;
		}
		i++;
	}
	
	printf("A quantidade de alunos aprovados foram: %.f\n", aprovado);
	printf("A quantidade de alunos reprovados foram: %.f", reprovado);
}
