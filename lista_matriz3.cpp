#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
/*
. Leia um vetor bidimensional 3 x 3 e em seguida encontre a posi��o do elemento m
(dado pelo usu�rio) na matriz. Caso o elemento n�o exista na matriz, informe o
usu�rio. 

*/ 
main(){
int v [3][3];
int m=0;
int l, c;

	for(l=0; l<3; l++){
		for(c=0; c<3; c++){
			printf("valor %d linha %d: ", c+1, l+1);
			scanf("%d", &v[l][c]);
		}
	}

	printf("\n Busque um elemento: ");
	scanf("%d", &m);

	for(l=0; l<3; l++){
		if(m =! v[c]){
			printf("q");
	} else {
		printf("\nValor nao encontrado");
	}
}
	
		
getch();
}

