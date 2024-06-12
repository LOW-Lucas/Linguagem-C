#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]){
  setlocale(LC_ALL, "Portuguese_Brazil");
  int cont,a;
  a=42;
  for(cont=1;cont<=1;cont++){
   printf("%c",a);
  }
  system("PAUSE");
}
