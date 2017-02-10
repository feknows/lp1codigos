#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>

/*2 - ler uma medida em polegadas e imprimir a equivalente em centimetros,
sabendo que2,54 cm equivale a 1 polegada */


main(){
	int pol;
	//float cm;
	//cm=2.54;
	   printf("digitar medida em polegadas:");
	   scanf("%d", &pol);
	   
	   printf("valor %d polegadas equivale a %.2f cm", pol, pol*2.54);
getch();
}

