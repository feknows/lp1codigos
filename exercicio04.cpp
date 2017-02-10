#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>

/* faça um algoritmo que receba o anode nascimento de uma pessoa e o ano atual, calcule e mostre

idade da pessoa
quantos anos ela tera em 2018

*/
main(){

	   int ano;
	   int anoAtual;
	   
	   printf("Entre com o ano de nascimento: ");
	   scanf("%d", &ano);
	   	   printf("Entre com o ano atual: ");
	   	   scanf("%d", &anoAtual);
	   
	   printf("a idade da pessoa e: %d. Em 2018 a pessoa tera: %d anos", anoAtual-ano, 2018 - ano);
getch();
}

