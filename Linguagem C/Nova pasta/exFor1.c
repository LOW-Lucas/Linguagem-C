#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]){
    setlocale(LC_ALL, "Portuguese_Brazil");
    int n1,d,s,n;
    d=50;
    n1=2;
    s=0;
      for(n=1;n=25;n++){
        s=(n1^n)/50;
        d= d - 2;
      }
      printf("%d",s);
}
