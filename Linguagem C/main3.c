#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int v1,v2,v3;
	printf("Digite o primeiro Valor\n");
	scanf("%d", &v1);
	printf("Digite o segundo Valor\n");
	scanf("%d", &v2);
	printf("Digite o terceiro Valor\n");
	scanf("%d", &v3);
	if((v1<v2) && (v2<v3)){
		printf("menor numero: %d",v1);
	}else if((v2<v3)&&(v2<v1)){
		printf("menor numero: %d",v2);
	}else{
		printf("menor numero: %d",v3);
	}
}
