#include <stdio.h>
#include <stdlib.h>

void merge(int vetor[], int inicio, int meio, int fim, int *comparacoes){
    int *temp, p1, p2, tamanho, i, j, k;
    int fim1 = 0, fim2 = 0;
    tamanho = fim - inicio + 1;
    p1 = inicio;
    p2 = meio + 1;
    temp = (int*) malloc(tamanho*sizeof(int));
    if(temp != NULL){
        for(i = 0; i < tamanho; i++){
            if(!fim1 && !fim2){
                if(vetor[p1] < vetor[p2]){
                    temp[i] = vetor[p1++];
                    (*comparacoes)++;
                } else {
                    temp[i] = vetor[p2++];
                    (*comparacoes)++;
                }
                if(p1 > meio){
                    fim1 = 1;
                }
                if(p2 > fim){
                    fim2 = 1;
                }
            } else {
                if(!fim1){
                    temp[i] = vetor[p1++];
                } else {
                    temp[i] = vetor[p2++];
                }
            }
        }
        for(j = 0, k = inicio; j < tamanho; j++, k++){
            vetor[k] = temp[j];
        }
    }
    free(temp);
}

void merge_sort(int vetor[], int inicio, int fim, int *comparacoes){
    int meio;
    if(inicio < fim){
        meio = (inicio + fim) / 2;
        merge_sort(vetor, inicio, meio, comparacoes);
        merge_sort(vetor, meio + 1, fim, comparacoes);
        merge(vetor, inicio, meio, fim, comparacoes);
    }
}
int main(){
    int vetor[] = {0,4,8,2,2,1,3,0,3,5};
    int n = 10;
    int comparacoes = 0;
    merge_sort(vetor, 0, n - 1, &comparacoes);
    printf("O vetor ordenado eh: ");
    for(int i = 0; i < n; i++){
        printf("%d ", vetor[i]);
    }
    printf("\nForam realizadas %d comparacoes\n", comparacoes);
    return 0;
}


