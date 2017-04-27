#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
/*   Desenvolver um programa para armazenar as notas de 5 alunos com 4 notas cada um.
Ao término da digitação das notas, informar as médias de cada aluno e a maior média. 
 */
main(){

	float notas[5][4];
	int l,c;
	float media, maiorMedia;
	
	for(l=0;l<5;l++){
		printf("\n - Aluno %d -\n", l+1);
		for(c=0;c<4;c++){
			printf("nota %d: ", c+1);
			scanf("%f", &notas[l][c]);	
		}
		
	}
	
	printf("\nMEDIAS POR ALUNO\n");
	
	for(l=0;l<5;l++){
		media=0;
		maiorMedia=0;
		printf("\n - ALuno  %d  ", l+1);
		for(c=0;c<4;c++){
			//printf("\n - Nota  %d -\n", l+1);
			media += notas[l][c]/4;
			if(media > maiorMedia)
			maiorMedia = media;
		}
		printf("Media %.1f - ", media);
	}
		printf("\nmaior media = %.1f - ", maiorMedia);
}
