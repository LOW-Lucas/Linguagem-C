#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese_Brazil");
int x,y;
printf("Digite o valor de X \n");
scanf("%d",&x);
printf("Digite o valor de Y \n");
scanf("%d",&y);
  if((x>0) && (y>0)){
        printf("O ponto est� na 1� quadrante\n");
        system("PAUSE");
  }else if((x<0) && (y>0)){
        printf("O ponto est� na 2� quadrante\n");
        system("PAUSE");
  }else if((x<0) && (y<0)){
        printf("O ponto est� na 3� quadrante\n");
        system("PAUSE");
  }else if((x>0) && (y<0)){
        printf("O ponto est� na 4� quadrante\n");
        system("PAUSE");
  }else if((x==0) && (y==0)){
        printf("O ponto est� na origem do plano cartesiano\n");
        system("PAUSE");
  }else if(x==0){
        printf("O ponto est� no eixo Y\n");
        system("PAUSE");
  }else if(y==0){
        printf("O ponto est� no eixo X\n");
        system("PAUSE");
  }}
