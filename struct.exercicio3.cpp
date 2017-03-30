#include <stdio.h>

/* fazer um programa com uma estrutura "livro", que contem os elementos titulo, ano de edicao
numero de paginas e preço. Criar uma variavel desta estrutura que é um vetor de 5 elementos
Ler os valores para cada estrutura e imprimir a media do numero de paginas dos livros */

struct livro{
	char titulo[60];
	int numPaginas, anoEdicao;
	float preco;
};

main(){
	livro lvr[5];
	int cont;
	float soma=0;
	for(cont=0; cont <5; cont++){
		printf("\nTitulo do livro: ");
		gets(lvr[cont].titulo);
		fflush(stdin);
		printf("\nAno de Edicao: ");
		scanf("%d", &lvr[cont].anoEdicao);
		printf("\nNumero de Paginas: ");
		scanf("%d", &lvr[cont].numPaginas);
		fflush(stdin);
		printf("\nPreco do Livro: ");
		scanf("%f", &lvr[cont].preco);
		fflush(stdin);
	}
	for(cont=0; cont<5; cont++){
		soma = soma + lvr[cont].numPaginas;
	}
	printf("Media do numero de paginas dos livros cadastrados: %.2f", soma / 5);
}
