#include <stdio.h>

/* defina uma estrutura que ira representar bandas de musica. Essa estrutura deve
ter o nome da banda, que tipo de musica ela tpca, o numero de integrantes e o valor
do show que a banda toca */

struct bandas{
	char nome[50];
	char genero[50];
	int integrantes;
	float valor;
};
