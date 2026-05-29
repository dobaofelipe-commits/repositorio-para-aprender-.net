#include <stdio.h>

int EPar(int a);

int main(){
int num;
printf("Digite um numero inteiro");
scanf("%d", &num);
if (EPar(num)){
    printf("O numero %d é par", num);
} else{
    printf("O numero %d não é par", num);
    }
    return 0;
}

int EPar(int a){
if(a%2==0){
    return 1;
} else
return 0;
}