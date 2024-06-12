#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese_Brazil");
	int va;
	float ve;
	printf("Digite um valor\n");
	scanf("%d",&va) && ("&f",&ve);
	if (ve = va){
	printf("O valor digitado é um numero\n");
	}
	if(va='a'){
	printf("O valor digitado é uma vogal\n");
	}else{
	printf("O valor digitado é um consoante\n");	
	}
	return 0;
}
