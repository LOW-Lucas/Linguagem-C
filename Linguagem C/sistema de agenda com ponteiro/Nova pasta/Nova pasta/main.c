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
	
	void alterar(Agenda *a, int i){
		char o, nome[50];
		int p=0;
		printf("\nDigite o nome: ");	
		fflush(stdin);
		gets(nome);
		for(p=0;p<i && strncmp(a[p].nome,nome,strlen(nome))!=0;p++);
		
			if(p>=i){
				printf("\n Registro Inexistente");
			}else{
				printf("\n\tRegistro %d", p);
				printf("\n\tNome: %s",a[p].nome);
				printf("\n\tEmail: %s",a[p].email);
				printf("\n\tTelefone: %d",a[p].telefone);
				printf("\n\tSe deseja alterar, pressione 'S': ");
				o = getch();
				
				if(o == 'S' || o == 's'){
					fflush(stdin);
					printf("\nDigite o novo nome: ");
					gets((*(a+p)).nome);
					fflush(stdin);
					printf("\nDigite o novo email: ");
					gets((*(a+p)).email);
					fflush(stdin);
					printf("\nDigite o novo telefone: ");
					scanf("%d", &a[p].telefone);
					fflush(stdin);
		    	}
			}
	}
	
	void consultar(Agenda *a,int i);
	void consultar(Agenda *a,int i){
		int p;
		for(p=0;p<i;p++){
			printf("\n\nRegistro %d", p);
			printf("\n\tNome: %s", a[p].nome);
			printf("\n\tEmail: %s", a[p].email);
			printf("\n\tTelefone: %d", a[p].telefone);
			getch();
		}
	}
	
	void ordenar(Agenda a[],int i);
	void al_ordenar(Agenda a[],int esq,int dir);
	void ordenar(Agenda a[],int i){
		al_ordenar(a,0,i-1);
	}
	void al_ordenar(Agenda a[],int esq,int dir){
		register int d,e;
		char *x;
		Agenda t;
		e=esq;
		d=dir;
		x=a[(esq+dir)/2].nome;
		
		do{
			while(strcmp(a[e].nome,x)<0 && e<dir){
			e++; //i
		}
		while(strcmp(a[d].nome,x)>0 && d>esq){
			d--; //j
		}
		if(e <= d){
			t = a[e];
			a[e] = a[d];
			a[d] = t;
			e++;
			d--;
		}
		} while(e <= d);
		if(esq < d){
			al_ordenar(a, esq, e);
		}
		if(e < esq){
			al_ordenar(a, e, dir);
		}
	}
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
		case 2:{
			alterar(a,i);
			break;
		}
		case 3:{
			ordenar(a,i);
			consultar(a,i);
			break;
		}
		case 9:
			printf("Deseja fecha o programa? S=1/N=2");
			scanf("%d", &confirma);
			fflush(stdin);
			if(confirma==1){

			}		
	}
}
}