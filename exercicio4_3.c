
#include <stdio.h>

int main(){
    int number, numeros[3][3], i, j, cont=0, resultado;
    printf("Escreva os numeros que serão multiplicados por 5 ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cont++;
            printf("\nDigite o %d numero",cont);
            scanf("%d", &number);
            numeros[i][j]=number*5;
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",numeros[i][j]);
        }
        printf("\n");
    }
    getchar();
    getchar();
    return 0;
}