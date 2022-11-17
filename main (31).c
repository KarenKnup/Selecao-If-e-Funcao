#include <stdio.h>

int main(void) {
//Faça um algoritmo que calcule o desempenho de um carro em uma viagem. A distância percorrida e a quantidade de litros colocados serão informados pelo usuário. 

 //Variáveis
int dist, qtdeL, desemp;
  
//Usuário
printf("Qual o valor da distância percorrida, em km?");
scanf("%d", &dist);
printf("Qual a quantidade, em L, consumida no trajeto?");
scanf("%d", &qtdeL);
  
 //Cálculos
 desemp=dist/qtdeL; 

//Resultado
printf("\n\nO desempenho é de %d km/L.", desemp);
  
    return 0;
}