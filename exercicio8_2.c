
#include <stdio.h>

int main() {

    FILE *arq;

    int matriz[10][10];
    int lin, col;
    int x, y;

    arq = fopen("dados.txt", "r");

    if(arq == NULL){
        printf("Erro ao abrir arquivo");
        return 1;
    }

    fscanf(arq, "%d %d", &lin, &col);

    for(int i = 0; i < lin; i++){

        for(int j = 0; j < col; j++){

            matriz[i][j] = 1;
        }
    }

    while(fscanf(arq, "%d %d", &x, &y) != EOF){

        matriz[x][y] = 0;
    }

    fclose(arq);

    for(int i = 0; i < lin; i++){

        for(int j = 0; j < col; j++){

            printf("%d ", matriz[i][j]);
        }

    }
 }