#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese_Brazil");
	char va;
	int ve;
	printf("Digite um valor\n");
	scanf("%c",&va) && ("%f",&ve);	
	if(va="a","e"){
	printf("O valor digitado é uma vogal\n");
	system("PAUSE");	
    return 0;
	}else if(ve = va){
	printf("O valor digitado é um numero\n");
	system("PAUSE");	
    return 0;
	}else{
	printf("O valor digitado é um consoante\n");
    system("PAUSE");	
    return 0;	
	}
	return 0;
}
