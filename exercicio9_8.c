#include <stdio.h>

int valor(int a);

int main(){
    int num;
    printf("Digite um valor\n");
    printf("Caso retorne -1 ele é negativo, 0 é 0 e 1 é positivo");
    scanf("%d", &num);
    printf("O valor retornado é %d",valor(num));
    return 0;
    }

int valor(int a){
if(a==0){
    return 0;
} else if(a<0){
    return -1;
} else 
return 1;
}