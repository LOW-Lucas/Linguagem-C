#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[])
{
  setlocale(LC_ALL, "Portuguese");
  Recom:printf("Digite o o valor conforme a figura\n");
  printf("________________________________________\n");
  printf(" 1 | 2 | 3 \n");
  printf("-----------\n");
  printf(" 4 | 5 | 6 \n");
  printf("-----------\n");
  printf(" 7 | 8 | 9 \n");
  int c,x,qua,qua1,qua2,qua3,qua4,qua5,qua6,qua7,qua8,qua9,Breakqua1,Breakqua2,Breakqua3,Breakqua4,Breakqua5,Breakqua6,Breakqua7,Breakqua8,Breakqua9;
  x=0;
  qua=0;
  qua1=0;
  qua2=0;
  qua3=0;
  qua4=0;
  qua5=0;
  qua6=0;
  qua7=0;
  qua8=0;
  qua9=0;
  Breakqua1=0;
  Breakqua2=0;
  Breakqua3=0;
  Breakqua4=0;
  Breakqua5=0;
  Breakqua6=0;
  Breakqua7=0;
  Breakqua8=0;
  Breakqua9=0;
  while(qua<=4.5){
  c=0;
  printf("________________________________________________________\n");
  refazCirculo:printf("Jogador 'circulo' começa, digite a posição desejada\n\a");
  scanf("%d", &c);
  printf("\n");
  
  if(c==1){
  	if(Breakqua1==1){	  
	  printf("Essa posição ja esta em uso\n Tente Novamente\n\n");
	  goto refazCirculo;}
  qua1=79;
  printf(" %c | %c | %c \n",qua1,qua2,qua3);
  printf("-----------\n");
  printf(" %c | %c | %c \n",qua4,qua5,qua6);
  printf("-----------\n");
  printf(" %c | %c | %c \n",qua7,qua8,qua9);
  Breakqua1++;
  }else if(c==2){
  	if(Breakqua2==1){	  
	  printf("Essa posição ja esta em uso\n Tente Novamente\n\n");
	  goto refazCirculo;}
  qua2=79;
  printf(" %c | %c | %c \n",qua1,qua2,qua3);
  printf("-----------\n");
  printf(" %c | %c | %c \n",qua4,qua5,qua6);
  printf("-----------\n");
  printf(" %c | %c | %c \n",qua7,qua8,qua9);
  Breakqua2++;
  }else if(c==3){
  	if(Breakqua3==1){	  
	  printf("Essa posição ja esta em uso\n Tente Novamente\n\n");
	  goto refazCirculo;}
  qua3=79;
  printf(" %c | %c | %c \n",qua1,qua2,qua3);
  printf("-----------\n");
  printf(" %c | %c | %c \n",qua4,qua5,qua6);
  printf("-----------\n");
  printf(" %c | %c | %c \n",qua7,qua8,qua9);
  Breakqua3++;
  }else if(c==4){
  	if(Breakqua4==1){	  
	  printf("Essa posição ja esta em uso\n Tente Novamente\n\n");
	  goto refazCirculo;}
  qua4=79;
  printf(" %c | %c | %c \n",qua1,qua2,qua3);
  printf("-----------\n");
  printf(" %c | %c | %c \n",qua4,qua5,qua6);
  printf("-----------\n");
  printf(" %c | %c | %c \n",qua7,qua8,qua9);
  Breakqua4++;
  }else if(c==5){
  	if(Breakqua5==1){	  
	  printf("Essa posição ja esta em uso\n Tente Novamente\n\n");
	  goto refazCirculo;}
  qua5=79;
  printf(" %c | %c | %c \n",qua1,qua2,qua3);
  printf("-----------\n");
  printf(" %c | %c | %c \n",qua4,qua5,qua6);
  printf("-----------\n");
  printf(" %c | %c | %c \n",qua7,qua8,qua9);
  Breakqua5++;
  }else if(c==6){
  	if(Breakqua6==1){	  
	  printf("Essa posição ja esta em uso\n Tente Novamente\n\n");
	  goto refazCirculo;}
  qua6=79;
  printf(" %c | %c | %c \n",qua1,qua2,qua3);
  printf("-----------\n");
  printf(" %c | %c | %c \n",qua4,qua5,qua6);
  printf("-----------\n");
  printf(" %c | %c | %c \n",qua7,qua8,qua9);
  Breakqua6++;
  }else if(c==7){
  	if(Breakqua7==1){	  
	  printf("Essa posição ja esta em uso\n Tente Novamente\n\n");
	  goto refazCirculo;}
  qua7=79;
  printf(" %c | %c | %c \n",qua1,qua2,qua3);
  printf("-----------\n");
  printf(" %c | %c | %c \n",qua4,qua5,qua6);
  printf("-----------\n");
  printf(" %c | %c | %c \n",qua7,qua8,qua9);
  Breakqua7++;
  }else if(c==8){
  	if(Breakqua8==1){	  
	  printf("Essa posição ja esta em uso\n Tente Novamente\n\n");
	  goto refazCirculo;}
  qua8=79;
  printf(" %c | %c | %c \n",qua1,qua2,qua3);
  printf("-----------\n");
  printf(" %c | %c | %c \n",qua4,qua5,qua6);
  printf("-----------\n");
  printf(" %c | %c | %c \n",qua7,qua8,qua9);
  Breakqua8++;
  }else if(c==9){
  	if(Breakqua9==1){	  
	  printf("Essa posição ja esta em uso\n Tente Novamente\n\n");
	  goto refazCirculo;}
  qua9=79;
  printf(" %c | %c | %c \n",qua1,qua2,qua3);
  printf("-----------\n");
  printf(" %c | %c | %c \n",qua4,qua5,qua6);
  printf("-----------\n");
  printf(" %c | %c | %c \n",qua7,qua8,qua9);
  Breakqua9++;
  }else{
     printf("Valor invalido\n");
     c==NULL;
	 goto refazCirculo;    
	 break;
       }
        if(((qua1==79)&&(qua2==79)&&(qua3==79)) || ((qua4==79)&&(qua5==79)&&(qua6==79)) || ((qua7==79)&&(qua8==79)&&(qua9==79)) || ((qua1==79)&&(qua4==79)&&(qua7==79)) || ((qua2==79)&&(qua5==79)&&(qua8==79)) || ((qua3==79)&&(qua6==79)&&(qua9==79)) || ((qua1==79)&&(qua5==79)&&(qua9==79)) || ((qua3==79)&&(qua5==79)&&(qua7==79))){
      	printf("O vencedor é o circulo\n");	
   		printf("Deseja recomeça o jogo? (1=S \ 2=N )\n");
 	 scanf("%d",&x);
 	 switch(x){
 	 	case 1:
 	 	 system("cls");
 	 	 goto Recom;
 	 	 break;
 	 	case 2:
 	 	 return 0;
 	 	 break;
	  }
 		}else{  
  if((Breakqua1==1)&&(Breakqua2==1)&&(Breakqua3==1)&&(Breakqua4==1)&&(Breakqua5==1)&&(Breakqua6==1)&&(Breakqua7==1)&&(Breakqua8==1)&&(Breakqua9==1)){
  	printf("Deu Empate\n");
  	printf("Deseja recomeça o jogo? (1=S / 2=N )\n");
 	 scanf("%d",&x);
 	 switch(x){
 	 	case 1:
 	 	 system("cls");
 	 	 goto Recom;
 	 	 break;
 	 	case 2:
 	 	 return 0;
 	 	 break;
	  }
  }
}
  printf("________________________________________________________________\n");
  refazX:printf("Agora é a vez do Jogador 'X', digite a posição desejada\n");
  scanf("%d", &c);
  printf("\n");
  
  if(c==1){
  	if(Breakqua1==1){	  
	  printf("Essa posição ja esta em uso\n Tente Novamente\n\n");
	  goto refazX;}
  qua1=88;
  printf(" %c | %c | %c \n",qua1,qua2,qua3);
  printf("-----------\n");
  printf(" %c | %c | %c \n",qua4,qua5,qua6);
  printf("-----------\n");
  printf(" %c | %c | %c \n",qua7,qua8,qua9);
  Breakqua1++;
  }else if(c==2){
  	if(Breakqua2==1){	  
	  printf("Essa posição ja esta em uso\n Tente Novamente\n\n");
	  goto refazX;}
  qua2=88;
  printf(" %c | %c | %c \n",qua1,qua2,qua3);
  printf("-----------\n");
  printf(" %c | %c | %c \n",qua4,qua5,qua6);
  printf("-----------\n");
  printf(" %c | %c | %c \n",qua7,qua8,qua9);
  Breakqua2++;
  }else if(c==3){
  	if(Breakqua3==1){	  
	  printf("Essa posição ja esta em uso\n Tente Novamente\n\n");
	  goto refazX;}
  qua3=88;
  printf(" %c | %c | %c \n",qua1,qua2,qua3);
  printf("-----------\n");
  printf(" %c | %c | %c \n",qua4,qua5,qua6);
  printf("-----------\n");
  printf(" %c | %c | %c \n",qua7,qua8,qua9);
  Breakqua3++;
  }else if(c==4){
  	if(Breakqua1==4){	  
	  printf("Essa posição ja esta em uso\n Tente Novamente\n\n");
	  goto refazX;}
  qua4=88;
  printf(" %c | %c | %c \n",qua1,qua2,qua3);
  printf("-----------\n");
  printf(" %c | %c | %c \n",qua4,qua5,qua6);
  printf("-----------\n");
  printf(" %c | %c | %c \n",qua7,qua8,qua9);
  Breakqua4++;
  }else if(c==5){
  	if(Breakqua5==1){	  
	  printf("Essa posição ja esta em uso\n Tente Novamente\n\n");
	  goto refazX;}
  qua5=88;
  printf(" %c | %c | %c \n",qua1,qua2,qua3);
  printf("-----------\n");
  printf(" %c | %c | %c \n",qua4,qua5,qua6);
  printf("-----------\n");
  printf(" %c | %c | %c \n",qua7,qua8,qua9);
  Breakqua5++;
  }else if(c==6){
  	if(Breakqua6==1){	  
	  printf("Essa posição ja esta em uso\n Tente Novamente\n\n");
	  goto refazX;}
  qua6=88;
  printf(" %c | %c | %c \n",qua1,qua2,qua3);
  printf("-----------\n");
  printf(" %c | %c | %c \n",qua4,qua5,qua6);
  printf("-----------\n");
  printf(" %c | %c | %c \n",qua7,qua8,qua9);
  Breakqua6++;
  }else if(c==7){
  	if(Breakqua7==1){	  
	  printf("Essa posição ja esta em uso\n Tente Novamente\n\n");
	  goto refazX;}
  qua7=88;
  printf(" %c | %c | %c \n",qua1,qua2,qua3);
  printf("-----------\n");
  printf(" %c | %c | %c \n",qua4,qua5,qua6);
  printf("-----------\n");
  printf(" %c | %c | %c \n",qua7,qua8,qua9);
  Breakqua7++;
  }else if(c==8){
  	if(Breakqua8==1){	  
	  printf("Essa posição ja esta em uso\n Tente Novamente\n\n");
	  goto refazX;}
  qua8=88;
  printf(" %c | %c | %c \n",qua1,qua2,qua3);
  printf("-----------\n");
  printf(" %c | %c | %c \n",qua4,qua5,qua6);
  printf("-----------\n");
  printf(" %c | %c | %c \n",qua7,qua8,qua9);
  Breakqua8++;
  }else if(c==9){
  	if(Breakqua9==1){	  
	  printf("Essa posição ja esta em uso\n Tente Novamente\n\n");
	  goto refazX;}
  qua9=88;
  printf(" %c | %c | %c \n",qua1,qua2,qua3);
  printf("-----------\n");
  printf(" %c | %c | %c \n",qua4,qua5,qua6);
  printf("-----------\n");
  printf(" %c | %c | %c \n",qua7,qua8,qua9);
  Breakqua9++;
  	if (((qua1==88)&&(qua2==88)&&(qua3==88)) || ((qua4==88)&&(qua5==88)&&(qua6==88)) || ((qua7==88)&&(qua8==88)&&(qua9==88)) || ((qua1==88)&&(qua4==88)&&(qua7==88)) || ((qua2==88)&&(qua5==88)&&(qua8==88)) || ((qua3==88)&&(qua6==88)&&(qua9==88)) || ((qua1==88)&&(qua5==88)&&(qua9==88)) || ((qua3==88)&&(qua5==88)&&(qua7==88))){
 	 printf("O vencedor é o X\n");
 	 printf("Deseja recomeça o jogo? (1=S \ 2=N )\n");
 	 scanf("%d",&x);
 	 switch(x){
 	 	case 1:
 	 	 system("cls");
 	 	 goto Recom;
 	 	 break;
 	 	case 2:
 	 	 return 0;
 	 	 break;
	  }
 	 return 0;
 	  }
 	  
  }else{
    printf("Valor invalido\n");  
	if(Breakqua9==1) goto refazX;  
    }
 		}
 			 } 
 
