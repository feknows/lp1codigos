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

struct agenda{
  int codigo;
  char nome[50];
  char email[50];
  telefone tel;
  data dataAniversario;
  endereco end;
  obs obsrv;
};

main(){
  agenda ag[100];
  int cont;
  for(cont=0; cont<100; cont++){
      fflush(stdin);
      printf("\nCodigo: ");
      scanf("%d", &ag[cont].codigo);
      fflush(stdin);
      printf("\nNome: ");
      gets(ag[cont].nome);
      printf("\nEmail: ");
      gets(ag[cont].email);
      fflush(stdin);
      printf("\nDDD do Telefone: ");
      scanf("%d", &ag[cont].tel.ddd);
      printf("\nNumero do Telefone: ");
      scanf("%d", &ag[cont].tel.numero);
      printf("\nDia do Aniversario: ");
      scanf("%d", &ag[cont].dataAniversario.dia);
      printf("\nMes do Aniversario: ");
      scanf("%d", &ag[cont].dataAniversario.mes);
      printf("\nAno do Aniversario: ");
      scanf("%d", &ag[cont].dataAniversario.ano);
      fflush(stdin);
      printf("\nEndereço");
      printf("\nRua: ");
      gets(ag[cont].end.rua);
      fflush(stdin);
      printf("\Numero: ");
      scanf("%d", &ag[cont].end.numero);
      fflush(stdin);
      printf("\Complemento: ");
      gets(ag[cont].end.complemento);
      fflush(stdin);
      printf("\nBairro: ");
      gets(ag[cont].end.bairro);
      fflush(stdin); 
      printf("\CEP: ");
      scanf("%d", &ag[cont].end.cep);
      fflush(stdin);
      printf("\Cidade: ");
      gets(ag[cont].end.cidade);
      printf("\Estado: ");
      gets(ag[cont].end.estado);
      printf("\Pais: ");
      gets(ag[cont].end.pais);    
      printf("\Observacoes: ");
      gets(ag[cont].obsrv.obs)
  }
  
  for(cont=0; cont<100; cont++){
    printf("\n --- AGENDA --- ");
    printf("\n CODIGO: %d - NOME: %s - E-MAIL: %s \n -- ENDEREÇO: RUA: %s, %d - %s - , %s \nCEP: %d - %s - %s - %s \nObservacoes: %s \nTelefone: %d - %d \n ANIVERSARIO: %d/%d/%d \n OBSERVACOES: %s", 
           
           ag[cont].codigo, ag[cont].nome, ag[cont].email, ag[cont].end.rua, ag[cont].end.numero, ag[cont].end.complemento,
           ag[cont].end.bairro, ag[cont].end.cep, ag[cont].end.cidade, ag[cont].end.estado, ag[cont].end.pais, ag[cont].end.complemento,
           ag[cont].tel.ddd, ag[cont].tel.numero, ag[cont].dataAniversario.dia, ag[cont].dataAniversario.mes, ag[cont].dataAniversario.ano,
           ag[cont].obsrv.obs );
  }
  
  
  
}
