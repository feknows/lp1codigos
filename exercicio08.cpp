#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>

/* a prefeitura do rio de janeiro abriu uma linha de credito para os funcionarios
estatuários; O valor maximo da prestação nao poderá ultrapassar 30% do salario bruto.

Fazer um algoritmo q permita entrar com salario bruto e o valor da prestação
e informar se o empréstimo pode ou não ser concedido


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

