#include <stdio.h>

int positivo(int a);

int somadivisores(int a);

int main(){
    int x[5];
printf("Digite 5 numeros inteiros positivos");
scanf("%d %d %d %d %d",&x[0], &x[1], &x[2], &x[3], &x[4] );

for(int i=0;i<5;i++){
x[i]=positivo(x[i]);
    }

    printf("A soma dos divisores dos numeros digitadoes é respectivamente %d %d %d %d %d", somadivisores(x[0]),somadivisores(x[1]),somadivisores(x[2]),somadivisores(x[3]),somadivisores(x[4]) );
    return 0;
}

int positivo(int a){
    if(a<0){
        printf("número %d digitado não é positivo, ele vai ser retirado da operação ", a);
        return 0;
    } else{
        return a;
    }
}

int somadivisores(int a){
    int soma=0;
    for(int i=1;i<a;i++){
        if(a%i==0){
            soma+=i;
        }
    }
    return soma;
}

