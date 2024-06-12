#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	typedef struct agenda{
		char nome[40];
		char email[40];
		int telefone;
	}Agenda;
	
	void alocar(Agenda **a,int*pi);
	
	void alocar(Agenda **a,int*pi){
		(*a)=(Agenda *)(realloc(*a, (*pi+1)*sizeof(Agenda)));
		if(*a==NULL){
			printf("\nErro");
			exit(1);
		}
	}
	
	void consulta();
	
	
	void sair();
	
int main(void){	
	setlocale(LC_ALL,"");
	Agenda*a;
	int cont=0;
	int i;
	i=0;
	a=(Agenda *) malloc(sizeof(Agenda));
	
	if(a == NULL){
		printf("\nErro");
		return 0;
	}
	int menu=0;	
	while(cont!=1){
	int confirma=0;
	printf("\n1 - Inclusão");
	printf("\n2 - Alteração");
	printf("\n3 - Consulta");
	printf("\n4 - Excluir");
	printf("\n5 - Pesquisar");
	printf("\n9 - Sair");
	printf("\nEntre com uma opção -> ");
	scanf("%d", &menu);
	fflush(stdin);
	
	switch(menu){
		case 1:{
			fflush(stdin);
			alocar(&a, &i);
			printf("Digite o NOME:");
			gets((*(a + i)).nome);
			fflush(stdin);
			printf("\nDigite o EMAIL:");
			gets((a + i)->email);
			fflush(stdin);
			printf("\nDigite o TELEFONE:");
			scanf("%f", &a[i].telefone);
			fflush(stdin);
			i++;
			break;
		}
		case 3:{
			consulta();
			break;
		}
		case 9:
			printf("Deseja fecha o programa? S=1/N=2");
			scanf("%d", &confirma);
			fflush(stdin);
			if(confirma==1){
				sair();
			}		
	}
}
}