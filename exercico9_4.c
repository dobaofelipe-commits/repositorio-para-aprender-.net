#include <stdio.h>
#include <math.h>

int absoluto(int a);

int main(){
int x1, x2, x3, x4, x5;
printf("Digite 5 valores");
scanf(" %f %f %f %f %f", &x1, &x2, &x3, &x4, &x5);
printf(" Os valores absolutos são respectivamente %2.f %2.f %2.f %2.f %2.f ",absoluto(x1), absoluto(x2), absoluto(x3), absoluto(x4), absoluto(x5) );
}

int absoluto(int a){
    return fabs(a);
}