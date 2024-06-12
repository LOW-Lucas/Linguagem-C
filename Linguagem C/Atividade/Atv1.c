#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese_Brazil");
  printf("Digite o o valor conforme a figura\n");
  printf("________________________________________\n");
  printf(" 1 | 2 | 3 \n");
  printf("-----------\n");
  printf(" 4 | 5 | 6 \n");
  printf("-----------\n");
  printf(" 7 | 8 | 9 \n");
  /* 0=branco  1=circulo  2=X*/
  int c,x,b,qua,qua1,qua2,qua3,qua4,qua5,qua6,qua7,qua8,qua9;
  qua1=0;
  qua2=0;
  qua3=0;
  qua4=0;
  qua5=0;
  qua6=0;
  qua7=0;
  qua8=0;
  qua9=0;
  for(qua = 1;qua<=9;qua++){
  c=0;
  printf("Jogador 'circulo' começa, digite a posição desejada\n");
  scanf("%d", &c);
  printf("\n");
  if(c==1){
  qua1=79;
  printf(" %c | %c | %c \n",qua1,qua2,qua3);
  printf("-----------\n");
  printf(" %c | %c | %c \n",qua4,qua5,qua6);
  printf("-----------\n");
  printf(" %c | %c | %c \n",qua7,qua8,qua9); 
  }else if(c==2){
  qua2=79;
  printf(" %c | %c | %c \n",qua1,qua2,qua3);
  printf("-----------\n");
  printf(" %c | %c | %c \n",qua4,qua5,qua6);
  printf("-----------\n");
  printf(" %c | %c | %c \n",qua7,qua8,qua9);
  }else if(c==3){
  qua3=79;
  printf(" %c | %c | %c \n",qua1,qua2,qua3);
  printf("-----------\n");
  printf(" %c | %c | %c \n",qua4,qua5,qua6);
  printf("-----------\n");
  printf(" %c | %c | %c \n",qua7,qua8,qua9);
  }else if(c==4){
  qua4=79;
  printf(" %c | %c | %c \n",qua1,qua2,qua3);
  printf("-----------\n");
  printf(" %c | %c | %c \n",qua4,qua5,qua6);
  printf("-----------\n");
  printf(" %c | %c | %c \n",qua7,qua8,qua9);
  }else if(c==5){
  qua5=79;
  printf(" %c | %c | %c \n",qua1,qua2,qua3);
  printf("-----------\n");
  printf(" %c | %c | %c \n",qua4,qua5,qua6);
  printf("-----------\n");
  printf(" %c | %c | %c \n",qua7,qua8,qua9);
  }else if(c==6){
  qua6=79;
  printf(" %c | %c | %c \n",qua1,qua2,qua3);
  printf("-----------\n");
  printf(" %c | %c | %c \n",qua4,qua5,qua6);
  printf("-----------\n");
  printf(" %c | %c | %c \n",qua7,qua8,qua9);
  }
  else if(c==7){
  qua7=79;
  printf(" %c | %c | %c \n",qua1,qua2,qua3);
  printf("-----------\n");
  printf(" %c | %c | %c \n",qua4,qua5,qua6);
  printf("-----------\n");
  printf(" %c | %c | %c \n",qua7,qua8,qua9);
  }else if(c==8){
  qua8=79;
  printf(" %c | %c | %c \n",qua1,qua2,qua3);
  printf("-----------\n");
  printf(" %c | %c | %c \n",qua4,qua5,qua6);
  printf("-----------\n");
  printf(" %c | %c | %c \n",qua7,qua8,qua9);
  }else if(c==9){
  qua9=79;
  printf(" %c | %c | %c \n",qua1,qua2,qua3);
  printf("-----------\n");
  printf(" %c | %c | %c \n",qua4,qua5,qua6);
  printf("-----------\n");
  printf(" %c | %c | %c \n",qua7,qua8,qua9);
  }
  else{
     printf("Valor invalido\n");    
       }
       
       
       printf("Agora é a vez do Jogador 'X', digite a posição desejada\n");
  scanf("%d", &c);
  printf("\n");
  if(c==1){
  qua1=88;
  printf(" %c | %c | %c \n",qua1,qua2,qua3);
  printf("-----------\n");
  printf(" %c | %c | %c \n",qua4,qua5,qua6);
  printf("-----------\n");
  printf(" %c | %c | %c \n",qua7,qua8,qua9); 
  }else if(c==2){
  qua2=88;
  printf(" %c | %c | %c \n",qua1,qua2,qua3);
  printf("-----------\n");
  printf(" %c | %c | %c \n",qua4,qua5,qua6);
  printf("-----------\n");
  printf(" %c | %c | %c \n",qua7,qua8,qua9);
  }else if(c==3){
  qua3=88;
  printf(" %c | %c | %c \n",qua1,qua2,qua3);
  printf("-----------\n");
  printf(" %c | %c | %c \n",qua4,qua5,qua6);
  printf("-----------\n");
  printf(" %c | %c | %c \n",qua7,qua8,qua9);
  }else if(c==4){
  qua4=88;
  printf(" %c | %c | %c \n",qua1,qua2,qua3);
  printf("-----------\n");
  printf(" %c | %c | %c \n",qua4,qua5,qua6);
  printf("-----------\n");
  printf(" %c | %c | %c \n",qua7,qua8,qua9);
  }else if(c==5){
  qua5=88;
  printf(" %c | %c | %c \n",qua1,qua2,qua3);
  printf("-----------\n");
  printf(" %c | %c | %c \n",qua4,qua5,qua6);
  printf("-----------\n");
  printf(" %c | %c | %c \n",qua7,qua8,qua9);
  }else if(c==6){
  qua6=88;
  printf(" %c | %c | %c \n",qua1,qua2,qua3);
  printf("-----------\n");
  printf(" %c | %c | %c \n",qua4,qua5,qua6);
  printf("-----------\n");
  printf(" %c | %c | %c \n",qua7,qua8,qua9);
  }
  else if(c==7){
  qua7=88;
  printf(" %c | %c | %c \n",qua1,qua2,qua3);
  printf("-----------\n");
  printf(" %c | %c | %c \n",qua4,qua5,qua6);
  printf("-----------\n");
  printf(" %c | %c | %c \n",qua7,qua8,qua9);
  }else if(c==8){
  qua8=88;
  printf(" %c | %c | %c \n",qua1,qua2,qua3);
  printf("-----------\n");
  printf(" %c | %c | %c \n",qua4,qua5,qua6);
  printf("-----------\n");
  printf(" %c | %c | %c \n",qua7,qua8,qua9);
  }else if(c==9){
  qua9=88;
  printf(" %c | %c | %c \n",qua1,qua2,qua3);
  printf("-----------\n");
  printf(" %c | %c | %c \n",qua4,qua5,qua6);
  printf("-----------\n");
  printf(" %c | %c | %c \n",qua7,qua8,qua9);
  }else{
     printf("Valor invalido\n");    
       }
  }
  if ((qua1=qua2) && (qua1=qua2)){
  printf("O vencedor é o circulo");
  
  }
  system("PAUSE");	
  return 0;
}
