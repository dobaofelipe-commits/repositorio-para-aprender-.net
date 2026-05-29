#include <stdio.h>

int main(){
    int vetor[3], matriz[3][3], i, j, cont=1;
    printf("Digite os 3 vetores que você vai utilziar\n");
    for(i=0;i<3;i++){
        printf("%d vetor",i+1);
        scanf("%d",&vetor[i]);
    }
    printf("Digite os a matriz3x3");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
        printf("%d numero ",cont);
        scanf("%d",&matriz[i][j]);
        cont++;
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            matriz[i][j]*=vetor[j];
            printf("%d ", matriz[i][j]);
        }
        printf("\n");   
    }
    getchar();
    getchar();
    return 0;

}