#include <stdio.h>

int main(void) {
//Faça um algoritmo que calcule e mostre a área de uma sala retangular cujas medidas reais são fornecidas pelo usuário. 

//Variáveis
  int b,h,area;
  
 //Usuário
printf("Qual o valor da base da sala, em cm?");
scanf("%d",&b);
  printf("Qual o valor da altura da sala, em cm?");
scanf("%d",&h);

 //Cálculos
area=b*h;
  
  //Resultado
if (area>0 && h>b){
printf("\n\nO valor da área da sala é de %d cm².", area);
  } else {printf("\n\nO valor da base e da altura devem ser positivos e não nulos, além disso, o valor da altura deve ser superior à base!");}

  
    return 0;
}