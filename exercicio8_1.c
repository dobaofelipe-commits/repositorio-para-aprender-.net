#include <stdio.h>

int main() {

    FILE *arq1, *arq2, *arq3;
    char c;

    arq1 = fopen("arquivo1.txt", "r");
    arq2 = fopen("arquivo2.txt", "r");
    arq3 = fopen("resultado.txt", "w");

    if(arq1 == NULL || arq2 == NULL || arq3 == NULL){
        printf("Erro ao abrir arquivo");
        return 1;
    }

    while((c = fgetc(arq1)) != EOF){
        fputc(c, arq3);
    }

    while((c = fgetc(arq2)) != EOF){
        fputc(c, arq3);
    }

    fclose(arq1);
    fclose(arq2);
    fclose(arq3);

    printf("Arquivos unidos com sucesso");

    return 0;

}