#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

main(){

	float notas[2][6];
	int l,c;
	float media;
	
	for(l=0;l<2;l++){
		for(c=0;c<6;c++){
			printf("nota %d do aluno %d: ", l+1, c+1);
			scanf("%f", &notas[l][c]);	
		}
	}
	
	for(l=0;l<2;l++){
		media=0;
		for(c=0;c<6;c++){
		printf("%.1f - %.1f", notas[l][c]);
		media+= notas[l][c];
	//	printf("nota %d = %.1f | aluno %d \n ",l+1, notas[l][c], c+1);
		}
		printf("- media: %.1f \n", media/2);
	//  printf("nota %d = %.1f | aluno %d \n",l+1, notas[l][c], c+1);
	}
	
getch();
}

