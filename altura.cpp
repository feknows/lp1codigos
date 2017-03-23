#include<conio.h>
#include<stdio.h>
#include<stdlib.h>



/*  cadastrar 6 pessoas e exibir qual a pessoa mais alta */
struct pessoa {
	char nome[40];
	float altura;
}p[2];

main(){
int c, indice;
float maiorAltura = 0;
for(c=0;c<2; c++){
	printf("Nome: ");
	gets(p[c].nome);
	printf("\nAltura: ");
	scanf("%f", &p[c].altura);
	fflush(stdin);
}
for(c=0;c<2; c++){
	if (p[c].altura > maiorAltura){
		maiorAltura = p[c].altura;
		indice = c;
	}
}
printf("\n\n MAIOR ALTURA: - %.2f Nome: %s\n", maiorAltura, p[indice].nome);

getch();
}

