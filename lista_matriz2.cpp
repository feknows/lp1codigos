#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
/* Preencher todos os valores de uma matriz 2x2 , em seguida exibir todos os valores e a
soma de todos os valores.  */

main(){

int valores[2][2];
int l,c;
int soma=0;

	for(l=0; l<2; l++){
		for(c=0; c<2; c++){
			printf("valor %d linha %d: ", c+1, l+1);
			scanf("%d", &valores[l][c]);	
		}
	}

	for(l=0; l<2; l++){
		for(c=0; c<2; c++){
			soma = soma + valores[l][c];
			printf("%d", valores[l][c]);
		}
		printf("\n");		
	}
	printf("\n Soma: %d", soma);
		
getch();
}


