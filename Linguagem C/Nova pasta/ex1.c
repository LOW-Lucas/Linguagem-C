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
        printf("O ponto está na 1º quadrante\n");
        system("PAUSE");
  }else if((x<0) && (y>0)){
        printf("O ponto está na 2º quadrante\n");
        system("PAUSE");
  }else if((x<0) && (y<0)){
        printf("O ponto está na 3º quadrante\n");
        system("PAUSE");
  }else if((x>0) && (y<0)){
        printf("O ponto está na 4º quadrante\n");
        system("PAUSE");
  }else if((x==0) && (y==0)){
        printf("O ponto está na origem do plano cartesiano\n");
        system("PAUSE");
  }else if(x==0){
        printf("O ponto está no eixo Y\n");
        system("PAUSE");
  }else if(y==0){
        printf("O ponto está no eixo X\n");
        system("PAUSE");
  }}
