#include <stdio.h>


/* foi realizada uma pesquisa entre 500 habitantes de certa região.
De cada habitante foram coletados dados: idade, sexo, salario e número de filhos.
Crie a estrutura de dados adequada para armazenar e exibir estas informações

*/


struct habitantes{
	int idade, nFilhos;
	char sexo[1];
	float salario;
};

main(){
	habitantes ha[500];
	int cont;
	for(cont=1; cont <500; cont++){
		printf("\nIdade: ");
		scanf("%d", &ha[cont].idade);
		fflush(stdin);
		printf("\nSexo (m/f): ");
		gets(ha[cont].sexo);
		fflush(stdin);
		printf("\nSalario: ");
		scanf("%f", &ha[cont].salario);
		fflush(stdin);
		printf("\nNo. de Filhos: ");
		scanf("%d", &ha[cont].nFilhos);
		fflush(stdin);
	}
	printf("\n\n - Dados dos Habitantes - \n");
	for(cont=1;cont<501; cont++){
		printf("habitante: %d\nIdade: %d\nSexo: %s\nSalario: %.2f\nNo. de Filhos: %d\n", cont, ha[cont].idade, ha[cont].sexo, ha[cont].salario, ha[cont].nFilhos);
	}
}
