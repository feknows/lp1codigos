#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>

/* 1 escreva um algoritmo que leia o numero digitado e escreva o seu sucessor e antecessor */


main(){
	   int numero;
	   printf("Entre com um numero: ");
	   scanf("%d", &numero);
	//   suc = numero-1;
	//  ant = numero+1;
	  printf("o sucessor e: %d, o antecessor e: %d", numero-1, numero+1);
	  // printf("o antecessor do numero digitado e: %d", ant);
	  // printf("o sucessor do numero digitado e: %d", suc);
getch();
}

