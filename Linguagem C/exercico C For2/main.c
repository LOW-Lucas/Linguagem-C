
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]){
    double s,n1,d,n,c,cont,r;
    n=1;
    d=50;
    n1=2;
    printf("Digite um Valor\n");
    scanf("%f",cont);
      for(c=1; cont<=c ;c++){                     
        r= pow(n1, n);
        s=r/d;
        n++;
        d=d-2;
        printf("%.5f \n\n",s);
      }
      printf("%f",s);
      system("PAUSE");
}
