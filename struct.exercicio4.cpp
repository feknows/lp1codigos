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
	
pessoa p;
	int cont;
	for(cont=0; cont <10; cont++){
		printf("Nome: ");
		gets(p.nome);
		printf("\nDia do nascimento: ");
		scanf("%d", &p[cont].dataNascimento.dia);
		printf("\nMes do nascimento: ");
		scanf("%d", &p[cont].dataNascimento.mes);
		printf("\nAno do nascimento: ");
		scanf("%d", &p[cont].dataNascimento.ano);
	}
	for(cont=0; cont<10; cont++){
printf("\n %s - %d/%d/%d", p.nome, p.dataNascimento.dia, p.dataNascimento.mes, p.dataNascimento.ano);
}
}
