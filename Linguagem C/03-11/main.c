#include <stdlib.h>
#include <string.h>
struct EX
{
  int cpf;  
  char nome[50];
  char endereco[50];
  int telefone;
  char cidade[50];
  char estado[50];
};
int main ()
{
  struct EX Cliente;
  printf("CPF: ");
  scanf("%d", &Cliente.cpf);
  printf ("Nome: ");
  scanf("%s", &Cliente.nome);
  printf ("Endereco: ");
  scanf("%s", &Cliente.endereco);
  printf("Telefone: ");
  scanf("%d", &Cliente.telefone);
  printf ("Cidade: ");
  scanf("%s", &Cliente.cidade);
  printf ("Estado: ");
  scanf("%s", &Cliente.estado);
  // ou gets(Cliente.nome);
  printf("----------------------------------");
  printf("\n Exibicao dos dados do aluno: \n");
  printf(" CPF:      %d \n", Cliente.cpf);
  printf("----------------------------------");
  printf("\n Nome:     %s \n", Cliente.nome);
  printf("----------------------------------");
  printf("\n Endereco: %s \n", Cliente.endereco);
  printf("----------------------------------");
  printf("\n Telefone: %d \n", Cliente.telefone);
  printf("----------------------------------");
  printf("\n Cidade:   %s \n", Cliente.cidade);
  printf("----------------------------------");
  printf("\n Estado:   %s \n", Cliente.estado);
  printf("----------------------------------\n");
  // ou puts(Cliente.nome);
  system("pause");
}

