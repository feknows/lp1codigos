#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
/*
. Leia um vetor bidimensional 3 x 3 e em seguida encontre a posição do elemento m
(dado pelo usuário) na matriz. Caso o elemento não exista na matriz, informe o
usuário. 

*/ 
main(){
int v [3][3];
int m=0;
int l, c;
int flag = 0;

	for(l=0; l<3; l++){ //preenchendo dados dad matriz
		for(c=0; c<3; c++){
			printf("Coluna %d Linha %d: ", c+1, l+1);
			scanf("%d", &v[l][c]);
		}
	}

	printf("\n Busque um elemento: ");
	scanf("%d", &m);

	for(l=0; l<3; l++){
		for(c=0; c<3; c++){
			if(m == v[l][c]){
				printf("\nValor encontrado posicao: Coluna %d  Linha %d", c+1,l+1);
			} else {
				flag = 1;
			}	
		}	
	}
	if(flag == 1){
		printf("\nNão localizado");
	}
}
