#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>

/* a prefeitura do rio de janeiro abriu uma linha de credito para os funcionarios
estatu�rios; O valor maximo da presta��o nao poder� ultrapassar 30% do salario bruto.

Fazer um algoritmo q permita entrar com salario bruto e o valor da presta��o
e informar se o empr�stimo pode ou n�o ser concedido


 */

main(){

	   float salario, prestacao;
	   printf("Entre com o salario bruto: ");
	   scanf("%f", &salario);
	   
	   printf("\nEntre com o valor da prestacao");
	   scanf("%f", &prestacao);
	   
	   if(prestacao < (salario - prestacao*0.30)){
	   	printf("concedido!!!!!q");
	   } else {
	   	printf("HOJE NAO");
	   }
	   
	  // salarioAumentado - (salarioAumentado*0.07);
getch();
}

