#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main2(int argc, char *argv[]){
    setlocale(LC_ALL, "Portuguese_Brazil");
    int n1,d,c;
    double s;
    s=0;
    d=3;
    n1=1;
      for(c=1;c<=25;c++){
        s = 1 - (n1 / (d^3));
        d = d + 2;
        printf("%d",s);
      }
      printf("%d",s);
      system("PAUSE");
}
