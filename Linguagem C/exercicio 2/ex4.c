#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
    int n,i1, i2, i3, i4;
    int cont;
    cont = 1;
    i1 = 0;
    i2 = 0;
    i3 = 0;
    i4 = 0;
    
    while (cont < 5){
        printf("Digite o numero\n");
        scanf("%d",&n);
        if((n>=1)&&(n<=25)){
            i1 = i1 + 1;
        }else if((n>=26)&&(n<=50)){
            i2 = i2 + 1;
        }else if((n>=51)&&(n<=75)){
            i3 = i3 + 1;
        }else if((n>=76)&&(n<=100)){
            i4 = i4 + 1;
        }
        cont++;
    }
    printf("Numeros no intervalo de 1 a 25: %d \n", i1);
    printf("Numeros no intervalo de 26 a 50: %d \n", i2);
    printf("Numeros no intervalo de 51 a 75: %d \n", i3);
    printf("Numeros no intervalo de 76 a 100: %d \n", i4);
}
