#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main(int argc, char *argv[]){
  setlocale(LC_ALL, "Portuguese_Brazil");
  float n1,n2,n3,n4,n5,m,r,t;
  printf("Digite a nota da 1� avalia��o\n");
  scanf("%f", &n1);
  printf("Digite a nota da 2� avalia��o\n");
  scanf("%f", &n2);
  printf("Digite a nota da 3� avalia��o\n");
  scanf("%f", &n3);
  m=(n1+n2+n3)/3;
  if (m>=7){
  printf("Aprovado por M�dia\n %f",m);
  }else{
      printf("REPROVADO \n");
      printf("Digite a nota de REPOSI��O\n");
      scanf("%f", &n4);
      if((n1<n2) && (n1<n3)){
          n1=n4;
          m=(n1+n2+n3)/3;
          if(m>=7){
              printf("Aprovado apos REPOSI��O\n");
          }else{
               printf("REPROVADO \n");
               printf("Digite a nota de TIRA-TAELMA\n");
               scanf("%f", &n5);
               t=m+n5;
               if(t>=12){
                   printf("Aprovado apos a TIRA-TAELMA\n");
               }else{
                   printf("REPROVADO \n");
               }
          }
      }else if((n2<n3) && (n2<n1)){
          n2=n4;
          m=(n1+n2+n3)/3;
          if(m>=7){
              printf("Aprovado apos REPOSI��O\n");
          }else{
               printf("REPROVADO \n");
               printf("Digite a nota de TIRA-TAELMA\n");
               scanf("%f", &n5);
               t=m+n5;
               if(t>=12){
                   printf("Aprovado apos a TIRA-TAELMA\n");
               }else{
                   printf("REPROVADO \n");
               }
          }
      }else if((n3<n1) && (n3<n2)){
          n3=n4;
          m=(n1+n2+n3)/3;
          if(m>=7){
              printf("Aprovado apos REPOSI��O\n");
          }else{
               printf("REPROVADO \n");
               printf("Digite a nota de TIRA-TAELMA\n");
               scanf("%f", &n5);
               t=m+n5;
               if(t>=12){
                   printf("Aprovado apos a TIRA-TAELMA\n");
               }else{
                   printf("REPROVADO \n");
               }
          }
      }else if((n1=n2) && (n1<n3)){
          n1=n4;
          m=(n1+n2+n3)/3;
          if(m>=7){
              printf("Aprovado apos REPOSI��O\n");
          }else{
               printf("REPROVADO \n");
               printf("Digite a nota de TIRA-TAELMA\n");
               scanf("%f", &n5);
               t=m+n5;
               if(t>=12){
                   printf("Aprovado apos a TIRA-TAELMA\n");
               }else{
                   printf("REPROVADO \n");
               }
          }
      }else if((n2=n3) && (n2<n1)){
          n2=n4;
          m=(n1+n2+n3)/3;
          if(m>=7){
              printf("Aprovado apos REPOSI��O\n");
          }else{
               printf("REPROVADO \n");
               printf("Digite a nota de TIRA-TAELMA\n");
               scanf("%f", &n5);
               t=m+n5;
               if(t>=12){
                   printf("Aprovado apos a TIRA-TAELMA\n");
               }else{
                   printf("REPROVADO \n");
               }
          }
      }else if((n3=n1) && (n3<n2)){
          n3=n4;
          m=(n1+n2+n3)/3;
          if(m>=7){
              printf("Aprovado apos REPOSI��O\n");
          }else{
               printf("REPROVADO \n");
               printf("Digite a nota de TIRA-TAELMA\n");
               scanf("%f", &n5);
               t=m+n5;
               if(t>=12){
                   printf("Aprovado apos a TIRA-TAELMA\n");
               }else{
                   printf("REPROVADO \n");
               }
          }
      }else{
          n3=n4;
          m=(n1+n2+n3)/3;
          if(m>=7){
              printf("Aprovado apos REPOSI��O\n");
          }else{
               printf("REPROVADO \n");
               printf("Digite a nota de TIRA-TAELMA\n");
               scanf("%f", &n5);
               t=m+n5;
               if(t>=12){
                   printf("Aprovado apos a TIRA-TAELMA\n");
               }else{
                   printf("REPROVADO \n");
               }
          }
      }
  }
}
