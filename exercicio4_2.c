#include <stdio.h>

int main(){
   int matriz1[3][2], matriz2[2][3], i, j,z=0, m=0, resultados[3][2], contador=1, anterior;
   for(i=0;i<3;i++){
    for(j=0;j<2;j++)
     printf("Digite um número para a matriz3x2 ");
     scanf(" %d", &matriz1[i][j]);
     if(contador%2==0){
        resultados[z][m]=anterior*matriz1[i][j];
        z++;
     }
     contador++;
     anterior=matriz1[i][j];
   }
   for(i=0;i<2;i++){
    for(j=0;j<3;j++)
     printf("Digite um número para a matriz2x3 ");
     scanf(" %d", &matriz1[i][j]);
     z=1;
     if(contador%2==0){
        resultados[m][z]=anterior*matriz1[i][j];
        m++;
     }
     contador++;
     anterior=matriz1[i][j];
   }
   for(i=0;i<3;i++){
    for(j=0;j<2;j++){
        printf("%d ", resultados[i][j]);
    }
   }
    
   }
   
  
    

