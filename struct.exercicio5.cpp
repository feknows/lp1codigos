#include <stdio.h>

/*crie uma estrutura representando os alunos do curso de introdução a programação de computadores. 
A estrutura deve conter a matrícula do aluno, nome, nota da primeira prova, nota da segunda prova 
e nota da terceira prova

a. usuario entra com dados de 5 alunos
b. encontre o aluno com a maior nota da primeira prova
*/

struct aluno {
	int matricula;
	char nome[50];
	float np1, np2, np3;
};


main(){
	aluno al[2];
	int cont;
	float maior=0, menor=0;
	
	for(cont=0; cont<2; cont++){
		printf("\nNome do Aluno: ");
		gets(al[cont].nome);
		fflush(stdin);
		printf("\nMatricula do Aluno: ");
		scanf("%d", &al[cont].matricula);
		printf("\nNota da P1: ");
		scanf("%f", &al[cont].np1);
		printf("\nNota da P2: ");
		scanf("%f", &al[cont].np2);
		printf("\nNota da P3: ");
		scanf("%f", &al[cont].np3);
		fflush(stdin);
	}
	for(cont=0; cont<2; cont++){
		
		if(al[cont].np1 > al[cont].np1){
			printf("%s - nota: %f", al[cont].nome, al[cont].np1);
		}
		for(cont=0; cont<2; cont++){
			if(maior < al[cont].np1){
				maior = al[cont].np1;	
			}else if{
				menor = al[cont].np1;
			}
		
		}
		printf("\n Maior nota: %.2f ", maior);
	
	}
	
}
