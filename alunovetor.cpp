#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

/* cadastrar aluno e exibir os alunos cadastrados */
struct aluno {
	int ra;
	char nome[40];
};


main(){
aluno al[5];
int cont;
for(cont=0; cont<5; cont++){ /* codigo for para cadastrar os alunos no vetor */
		printf("\nRA: ");
		scanf("%d", &al[cont].ra);
		fflush(stdin);
		printf("\nNome: ");
		gets(al[cont].nome);
	} /* codigo abaixo exibe os alunos cadastrados acima  */
	printf("\n\n -- ALUNOS -- \n");
	for(cont=0;cont<5; cont++){
		printf("\nR.A: %d - Nome: %s", al[cont].ra, al[cont].nome);
	}
	
getch();
}

