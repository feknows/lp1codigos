#include <stdio.h>

struct data{
	int dia;
	int mes;
	int ano;
};


struct pessoa{
	char nome[50];
	data dataNascimento;
};


main(){
	
pessoa p;
printf("Nome: ");
gets(p.nome);
printf("\nDia do nascimento: ");
scanf("%d", &p.dataNascimento.dia);
printf("\nMes do nascimento: ");
scanf("%d", &p.dataNascimento.mes);
printf("\nAno do nascimento: ");
scanf("%d", &p.dataNascimento.ano);

printf("\n %s - %d/%d/%d", p.nome, p.dataNascimento.dia, p.dataNascimento.mes, p.dataNascimento.ano);
}
