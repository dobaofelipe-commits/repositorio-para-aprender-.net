#include <stdio.h>
#include <math.h>

float distanciax(float a, float b);

float distanciay(float a, float b);

float raiz( float a, float b);

int main(){
    float x1, x2, y1, y2;
    printf("Digite o primeiro ponto (x, y)");
    scanf("%f %f", &x1, &y1);
    printf("Digite o primeiro ponto (x, y)");
    scanf("%f %f", &x2, &y2);
    printf("A distancia entre esses pontos é %2.f", raiz(distanciax(x1, x2),distanciay(y1, y2)));
}

float distanciax(float a, float b){
    float resultadox;
    resultadox=(a-b)*(a-b);
    printf ("%f",resultadox);
    return resultadox;
}
float distanciay(float a, float b){
    float resultadoy;
    resultadoy=(a-b)*(a-b);
    printf ("%f", resultadoy);
    return resultadoy;
}

float raiz(float a, float b){
  float resultado;
  resultado= sqrt(a+b);
  return resultado;
}