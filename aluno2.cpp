#include<stdio.h>
#include<stdlib.h>


struct aluno{
	char nome[40];
	int ra;
	float nota1, nota2;
}aluno1,aluno2;
	
main(){
	printf("Nome: ");
	gets(aluno1.nome);
	printf("\nR.A.: ");
	scanf("%d", &aluno1.ra);
	printf("\nNota 1: ");
	scanf("%f", &aluno1.nota1);
	printf("\nNota 2: ");
	scanf("%f", &aluno1.nota2);


	fflush(stdin);
	printf("\nNome: ");
	gets(aluno1.nome);
	printf("\nR.A.: ");
	scanf("%d", &aluno2.ra);
	printf("\nNota 1: ");
	scanf("%f", &aluno2.nota1);
	printf("\nNota 2: ");
	scanf("%f", &aluno2.nota2);
	
	printf("\nDados do Aluno 1: ");
	printf("\nNome: %s\nR.A.: %d\nNota 1: %.2f\nNota 2: %.2f\n Media: %.2f", aluno1.nome, aluno1.ra, aluno1.nota1, aluno1.nota2, (aluno1.nota1+aluno1.nota2)/2);
	printf("\nDados do Aluno 2: ");
	printf("\nNome: %s\nR.A.: %d\nNota 1: %.2f\nNota 2: %.2f\n Media: %.2f", aluno2.nome, aluno2.ra, aluno2.nota1, aluno2.nota2, (aluno2.nota1+aluno2.nota2)/2);
getch();	
}
