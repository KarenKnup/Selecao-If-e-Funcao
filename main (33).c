#include <stdio.h>

int main(void) {
//Faça um algoritmo que calcule e mostre a área e o perímetro de uma sala retangular cujas medidas reais são fornecidas pelo usuário. 
  
  //Variáveis
int b,h,area,perim;

 //Usuário
  printf("Qual o valor da base da sala, em cm?");
scanf("%d",&b);
printf("Qual o valor da altura da sala, em cm?");
scanf("%d",&h);

//Cálculos
  area=b*h;
  perim=2*b+2*h;

  //Resultados
  if(area>0 && perim>0 && h>b){
printf("\n\nO valor da área dessa sala é %d cm² e o perímetro é %d cm.",area,perim);
  } else {printf("\n\nOs valores devem ser inteiros e positivos, e o valor da altura deve ser superior ao da base!");}
  
    return 0;
}