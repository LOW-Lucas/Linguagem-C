#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <string.h>

struct Funcionario{
		char nome[50];
		struct{
			int dia;
			int mes;
			int ano;
		}dataNasc;
			char depto[20];
			float salario;
		}func;

int main(void){
	
	setlocale(LC_ALL,"");
	int i=0;
	struct Funcionario func[5];
	
	for(i=0; i<2; i++){
		printf("\nEntre com o nome: ");
		gets((func + i)->nome);
		fflush(stdin);
		
		printf("\nEntre com a data de nascimento [dd mm aaaa]: ");
		scanf("%d", &func[i].dataNasc.dia);
		scanf("%d", &func[i].dataNasc.mes);
		scanf("%d", &func[i].dataNasc.ano);
		fflush(stdin);
		
		printf("\nEntre com o departamento: ");
		gets((*(func + i)).depto);
		fflush(stdin);
		
		printf("\nEntre com o salario: ");
		scanf("%f", &func[i].salario);
		fflush(stdin);
	}
	for(i=0;i<2;i++){
		printf("\nNome: %s", func[i].nome);
		printf("\nNascimento: %d/%d/%d", 
		func[i].dataNasc.dia,
		func[i].dataNasc.mes,
		func[i].dataNasc.ano);
		printf("\nDepartamento: %s", func[i].depto);
		printf("\nSalario: %.2f", func[i].salario);
		printf("\n");
	}
	return 0;
}