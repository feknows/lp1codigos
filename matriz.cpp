#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

main(){
	int matriz [2][3];
	int l,c;
	/* codigo para preencher matriz */ 
	for(l=0;l<2;l++){
		for(c=0; c<3; c++){
			printf("\nDigite: ");
			scanf("%d", &matriz[l][c]);
		}
	}
	
	/*  codigo para exibir matriz  */
		for(l=0;l<2;l++){
			for(c=0; c<3; c++){
			printf("%d", matriz[l][c]);
			}
			
			printf("\n");
		}
	
getch();
}

