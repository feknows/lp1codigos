#include <stdio.h>

struct data{
	int dia;
	int mes;
	int ano;
};


struct pessoa{
	char nome[50];
	float altura;
	data dataNascimento;
};


main(){
	
pessoa p[10];
	int cont;
	for(cont=0; cont <10; cont++){
	  	fflush(stdin);
		printf("Nome: ");
		gets(p[cont].nome);
		fflush(stdin)
		printf("\nDia do nascimento: ");
		scanf("%d", &p[cont].dataNascimento.dia);
		printf("\nMes do nascimento: ");
		scanf("%d", &p[cont].dataNascimento.mes);
		printf("\nAno do nascimento: ");
		scanf("%d", &p[cont].dataNascimento.ano);
		fflush(stdin)
	}
	for(cont=0; cont<10; cont++){
printf("\n %s - %d/%d/%d", p.nome, p.dataNascimento.dia, p.dataNascimento.mes, p.dataNascimento.ano);
}
}
