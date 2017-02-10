#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>

/* escrever um programa pra ler um numero inteiro e informar se ele é divisivel por 5 */
main(){
	   int valor;
	   printf("Entre com um valor inteiro: ");
	   scanf("%d", &valor);
	   
	   if(valor % 5 == 0){
	   	printf("valor e divisivel por 5");
	   } else {
	   	printf("Valor nao e divisivel por 5");

}
getch();
}

