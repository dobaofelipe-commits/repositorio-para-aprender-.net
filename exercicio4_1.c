#include <stdio.h>

int main() {
    float number[2][3], soma=0;
    for(int i=0;i<2;i++){
        for (int j=0;j<3;j++){
            printf("Digite um número real ");
            scanf("%f", &number[i][j]);
            soma+=number[i][j];
        }
    }
    printf("A soma dos números deu %.2f",soma);
}