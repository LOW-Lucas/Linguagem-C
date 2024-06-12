#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]){
  setlocale(LC_ALL, "Portuguese");
  int teste1[5];
  int con,x;
  x=1;
  for(con=1;con<6;con++){
  printf("Digite o %dº Indice\n\a",con);
  scanf("%d",&teste1[con]);
  if(con&2!=0){
    x = x+teste1[con];
  }
 }
  for(con=1;con<6;con++){
  printf("\n Indice: %d | NUNdigitado: %d", con,teste1[con]);
  }
  printf("\nSoma: %d",x);
}
