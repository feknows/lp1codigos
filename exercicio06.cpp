#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>

/* uma loja fornece 10% de desconto para funcionarios e 5% de escontos para clientes vip
. Faça um programa q calcule valor total a ser pago por uma pessoa. 
O programa devera ler o valor total da compra efetuada e um codigo que identifique se o
comprador é um cliente comum (1), funcionario (2) ou vip

*/
main(){
	   float compra;
	   int cliente;
	   
	   printf("Insira o valor total da compra:");
	   scanf("%f", &compra);
	   printf("\no funcionario e comum(1), funcionario(2) ou VIP (3)?");
	   scanf("%d", &cliente);
	   if(cliente == 1){
		  printf("\n O valor total da compra e: %.2f", compra); 
	   }else{
	   	if(cliente == 2){
	   		printf("\n O valor total da compra e: %.2f", compra + (compra*0.05));
	   	} else {
	   		if(cliente == 3){
	   		printf("\n O valor total da compra e: %.2f", compra + (compra*0.10)); 
	   	} else {
	   		printf("\n Valor nao encontrado.");
	   }
}
}
getch();
}

