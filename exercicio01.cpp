#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>

// faça 1 algoritmo que receba o salario base de um funcionaro, 
//calcule e mostre o salario a receber
//sabendo-se que esse funcionario tem gratificacao de 5% sobre a 
//base e paga imposto de 7% sobre o total

main(){

	   float salarioBase, salarioAumentado, salarioFinal;
	   
	   printf("Entre com o salario Base:\n");
	   scanf("%f", &salarioBase);
	   printf("%.2f \n", salarioBase);
	   
	   salarioAumentado = salarioBase*1.05;
	   
	   printf("%.2f \n", salarioAumentado);
	   
	   salarioFinal = salarioAumentado - (salarioAumentado*0.07);
	   
	   printf("%.2f", salarioFinal); 
	   
getch();
}
