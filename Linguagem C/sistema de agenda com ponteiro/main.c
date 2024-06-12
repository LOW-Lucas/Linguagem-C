#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	int i=0;
	int cont=0;
	struct agenda{
		char nome[40];
		char email[40];
		int telefone;
	}a;
	
	void alocar(){
		struct agenda a[4];
		printf("\nDigite o NOME:");
		gets((a + i)->nome);
		fflush(stdin);
		printf("\nDigite o EMAIL:");
		gets((a + i)->email);
		fflush(stdin);
		printf("\nDigite o TELEFONE:");
		scanf("%f", &a[i].telefone);
		fflush(stdin);
	};
	
	void sair(){
		struct agenda a[4];
	}
	
int main(int argc, char *argv[]) {	
	setlocale(LC_ALL,"");
	struct agenda a[4];
	int menu=0;
	char confirma;
	printf("\n1 - Inclusão");
	printf("\n2 - Alteração");
	printf("\n3 - Consulta");
	printf("\n4 - Excluir");
	printf("\n5 - Pesquisar");
	printf("\n9 - Sair");
	printf("\nEntre com uma opção -> ");
	scanf("%d", &menu);
	switch(menu){
		case 1:{
			alocar();
			break;
		}
		case 9:
			confirma=" ";
			printf("Deseja fecha o programa? S/N");
			scanf("%c", &confirma);
			if(confirma=="s"){
				sair();
			}else{

			}		
	}

}