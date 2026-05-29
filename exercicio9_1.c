#include <stdio.h>

int menor(int a, int b);

int main(){
    int n1, n2;
    printf("Digite um numero");
    scanf("%d", &n1);
    printf("Digite outro numero");
    scanf("%d", &n2);
    printf("O Menor número é %d", menor(n1,n2) );
    return 0;
}

int menor(int a, int b){
    if(a>b){
        return a;
    } else{
        return b;
    }
}