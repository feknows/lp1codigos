#include <stdio.h>

/* Fazer um programa para simular uma agenda de telefones. Para cada pessoa devemse
ter os seguintes dados:
• Código
• Nome
• E-mail
• Endereço (contendo campos para Rua, numero, complemento, bairro, cep, cidade,
estado, país).
• Telefone (contendo campo para DDD e numero)
• Data de aniversario (contendo campo para dia, mês, ano).
• Observações: Uma linha (string) para alguma observação especial. 
a. Definir a estrutura acima.
b. Declarar a variável agenda (vetor) com capacidade de agendar até 100 cadastros
c. Possibilitar a visualização dos dados */


struct endereco{
  char rua[100];
  int numero;
  char complemento[100];
  char bairro[60];
  int cep;
  char cidade[50];
  char estado[50];
  char pais[50];
};

struct telefone{
  int ddd;
  int numero;
};

struct data{
  int dia;
  int mes;
  int ano;
};

struct obs{
  char obs[150];
};

struct pessoa{
  int codigo;
  char nome[50];
  char email[50];
  telefone tel;
  data dataAniversario;
  endereco end;
  obs obsrv;
};

main(){
  pessoa p[100];
  int cont;
  for(cont=0; cont<100; cont++){
      fflush(stdin);
      printf("\nCodigo: ");
      scanf("%d", &p[cont].codigo);
      
  }
  
  
  
  
  
}
