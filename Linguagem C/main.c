#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese_Brazil");
	int es;
	float v1,v2,res;
	printf("Calculadora Simples\n");
	printf("1-Soma\n");
	printf("2-Subtracao\n");
	printf("3-Multiplicacao\n");
	printf("4-Divisao\n");
	scanf("%d",&es);
	switch (es) {
	 case 1:
	 printf("Digite o primeiro Valor\n");
	 scanf("%f", &v1);
	 printf("Digite o segundo Valor\n");
	 scanf("%f", &v2);
	 res=v1+v2;
	 printf("O resultado sera: %.2f", res);
	 break;
	 case 2:
	 printf("Digite o primeiro Valor\n");
	 scanf("%f", &v1);
	 printf("Digite o segundo Valor\n");
	 scanf("%f", &v2);
	 res=v1-v2;
	 printf("O resultado sera: %.2f", res);
	 break;
	 case 3:
	 printf("Digite o primeiro Valor\n");
	 scanf("%f", &v1);
	 printf("Digite o segundo Valor\n");
	 scanf("%f", &v2);
	 res=v1*v2;
	 printf("O resultado sera: %.2f", res);
	 break;
	 case 4:
	 printf("Digite o primeiro Valor\n");
	 scanf("%f", &v1);
	 printf("Digite o segundo Valor\n");
	 scanf("%f", &v2);
	 if (v2==0){
	 	printf("VALOR INVALIDO");
	 }else{
	 res=v1/v2;
	 printf("O resultado sera: %.2f", res);
	 break;	 
	 }
     }	
	return 0;
}
