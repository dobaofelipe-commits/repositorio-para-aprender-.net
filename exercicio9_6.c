#include <stdio.h>

float media(float a, float b, float c, char d);

int main(){
float n1, n2, n3;
char letra;
printf("Para Media aritimetica digite A, Media ponderada digite P e Media harmonica digite H\n");
printf("Digite as 3 notas e em seguida a letra");
scanf("%f %f %f %c", &n1, &n2, &n3, &letra);
if (letra=='A' || letra=='a' ){
    printf("Sua média aritmética é %2.f", media(n1, n2, n3, letra));
} else if (letra=='P'|| letra=='p' ){
    printf("Sua média ponderada é %2.f", media(n1, n2, n3, letra));
} else  if (letra=='H' || letra=='h' ){
    printf("Sua média harmonica é %2.f", media(n1, n2, n3, letra));
} 

}

float media(float a, float b, float c, char d){
float resultado;
if(d=='A' || d=='a' ){
resultado=(a+b+c)/3;
return resultado;
} else if(d=='P' || d=='p' ){
    resultado=(a*5+b*3+c*2)/10;
    return resultado;
} else if(d=='H' || d=='h' ){
    resultado=3/(1/a+1/b+1/c);
    return resultado;
    } else{
        printf("A letra digitada não corresponde a nenhuma operação");
        return 0;
    }
}