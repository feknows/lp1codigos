#include<conio.h>
#include<stdio.h>
#include<stdlib.h>


struct funcionario {
	char nome[50];
	char setor[50];
	float salario;
};


main(){
funcionario func1;
printf("Nome: ");
gets(func1.nome);
printf("\nSetor: ");
gets(func1.setor);
printf("\nSalario: ");
scanf("%f", &func1.salario);

fflush(stdin); /* limpa buffer de memoria */
funcionario func2;
printf("\nNome: ");
gets(func2.nome);
printf("\nSetor: ");
gets(func2.setor);
printf("\nSalario: ");
scanf("%f", &func2.salario);



printf("\nDados do funcionario: \n");
printf("Nome: %s\nSetor: %s\nSalario: R$%.2f\n", func1.nome, func1.setor, func1.salario);
printf("Nome: %s\nSetor: %s\nSalario: R$%.2f", func2.nome, func2.setor, func2.salario);
getch();
}


