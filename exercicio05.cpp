#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>

/* Fa�a um algoritmo para ler dois numeros inteiros e informar se estess�o iguais ou diferentes*/

main(){
	   int num1, num2;
	   printf("Digite um numero: ");
	   scanf("%d", &num1);
	   printf("\nDigite outro numero: ");
	   scanf("%d", &num2);
	   
	   if(num1 == num2){
	   	printf("Numeros iguais");
	   } else {
	   	printf("Numeros diferentes");
}
getch();
}

