#include <stdio.h>

/*crie uma estrutura representando os alunos do curso de introdução a programação de computadores. 
A estrutura deve conter a matrícula do aluno, nome, nota da primeira prova, nota da segunda prova 
e nota da terceira prova

a) Permita ao usuário entrar com os dados de 5 alunos.
b) Encontre o aluno com maior nota da primeira prova.
c) Encontre o aluno com maior media geral.
d) Encontre o aluno com menor media geral.
e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para aprovação. 

*/

struct aluno {
	int matricula;
	char nome[50];
	float np1, np2, np3;
};


main(){
	aluno al[5];
	int cont, index = 0;
	float maior=0;
	float soma = 0, Nota = 0;
	float aprova;
	for(cont=0; cont<5; cont++){
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
		for(cont=0; cont<5; cont++){
			if(al[cont].np1 > al[cont].np1){
				printf("%s - nota: %f", al[cont].nome, al[cont].np1);
			}
		}
		//codigo para exibir maior nota da p1
		for(cont=0; cont<5; cont++){
			if(maior < al[cont].np1){
				maior = al[cont].np1;
				index = cont;
			}
		}
	//exibir maior nota da p1
	printf("\n Maior nota: %.2f - Aluno: %c  \n", maior, al[index].nome);
	
		//aluno com a maior media geral
		for(cont=0; cont<5; cont++){
			if( maior < somaNota ){
				somaNota = somaNota + (al[cont].np1 + al[cont].np3 + al[cont].np3) / 3;
				index = cont
			}
		}
	//exibir maior nota geral
	printf("Maior Media geral das notas: %.2f - Aluno: %c", somaNota, al[index].nome);
	
		//aluno com a menor media geral
		for(cont=0; cont<5; cont++){
			if( menor > somaNota ){
				somaNota = somaNota + (al[cont].np1 + al[cont].np3 + al[cont].np3) / 3;
				index = cont
			}
		}
	//codigo para exibir menor nota geral
	printf("Menor Media geral das notas: %.2f - Aluno: %c", somaNota, al[index].nome);
	
	//codigo para informar se o aluno foi aprovado ou reprovado;
	for(cont=0; cont<10; cont++){
		if((al[cont].np1 + al[cont].np + al[cont].np) / 3 <6){
			printf("\nAluno: %c - REPROVADO", al[cont].nome);
		} else {
			printf("\nAluno: %c - APROVADO!!", al[cont].nome);
			}
		}
}
