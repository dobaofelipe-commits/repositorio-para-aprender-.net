#include <stdio.h>
#include <math.h>

float potencia(float a, float b);

int main(){
    float base, expoente;
printf("Digite a base");
scanf("%f", &base);
printf("Digite a potencia");
scanf("%f", &expoente);
printf("O valor dessa expressão é %2.f", potencia(base, expoente));
}

float potencia(float a, float b){
    return pow(a, b);
}