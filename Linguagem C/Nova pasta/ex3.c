/*#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese_Brazil");
  int v,c,x,d,y,r;
  printf("Digite um valor");
  scanf("%d",&v);
  d=v;
  c=0;
  while(d==0){
     r=v/d;
     d--;
     if(r==0){
         y++;     
     }     
    }
    if(y=2){
       printf("O valor é primo"); 
       system("PAUSE");
    }else{
       printf("O valor não é primo"); 
       system("PAUSE");    
    }    
  
}*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]){
  setlocale(LC_ALL, "Portuguese_Brazil");
  int v,c,x,d,y,r;
  printf("Digite um valor\n");
  scanf("%d",&v);
  d=0;
  c=0;
  y=0;
  while(c=v){
     d++;
     r=v/d;
     c++;    
     printf("%d",d);
    }
    
    if(y=1){
       printf("O valor é primo"); 
       system("PAUSE");
    }else if(y>1){
       printf("O valor não é primo"); 
       system("PAUSE");    
    }    
}
