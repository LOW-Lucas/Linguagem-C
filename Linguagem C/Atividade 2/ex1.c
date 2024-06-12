#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]){
  setlocale(LC_ALL, "Portuguese");
  int teste1[10];
  int teste2[10];
  int i,con,x,con2;
  for(con=0;con<10;con++){
  printf("Digite o %dº Indice\n\a",con);
  scanf("%d",&teste1[con]);
  if(con&2==0){
    teste2[con] = teste1[con] * 5;
  }else{
     teste2[con] = teste1[con] + 5;
  }
 }
  for(con=0;con<10;con++){
  printf("\n Indice: %d | Teste1: %d | Teste2: %d ", con, teste1[con], teste2[con]);
  }
}
