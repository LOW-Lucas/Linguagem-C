#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]){
  setlocale(LC_ALL, "Portuguese_Brazil");
  float ti1,ti2;
  printf("Digite a quantidade de gols do 1º time\n");
  scanf("%f", &ti1);
  printf("Digite a quantidade de gols do 2º time\n");
  scanf("%f", &ti2);
  if(ti1>ti2){
   printf("O time 1 venceu\n");
   system("PAUSE");	
   return 0;
  }else if(ti1<ti2){
   printf("O time 2 venceu\n");
   system("PAUSE");	
   return 0;
  }else{
   printf("Teve empate\n");
   system("PAUSE");	
   return 0;
  }
}
