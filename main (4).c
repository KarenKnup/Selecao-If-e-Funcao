#include <stdio.h>
#include <math.h>

int CalcDist (int x1, int x2, int y1, int y2) {
  int d, d1;
d1=(x1-x2)^2+(y1-y2)^2;
d=pow (d1,2);
  return d;
}

int CalcPer (int dAB, int dAC, int dBC){
  int per;
per=dAB+dBC+dAC;
  return per;
}

int main(void) {
//Variaveis
int xA,xB,xC,yA,yB,yC;
int perimetro, dAB, dBC, dAC;
  
  //Usuario
  printf("Qual o valor de x no ponto A?");
  scanf("%d",&xA);
  printf("Qual o valor de x no ponto B?");
  scanf("%d",&xB);
  printf("Qual o valor de x no ponto C?");
  scanf("%d",&xC);
  printf("Qual o valor de y no ponto A?");
  scanf("%d",&yA);
  printf("Qual o valor de y no ponto B?");
  scanf("%d",&yB);
  printf("Qual o valor de y no ponto C?");
  scanf("%d",&yC);

  //Calculos & Resultados
dAB=CalcDist(xA,xB,yA,yB);
dAC=CalcDist(xA,xC,yA,yC);
dBC=CalcDist(xB,xC,yB,yC);
perimetro=CalcPer(dAB,dAC,dBC);

printf("\n\nPerímetro: %d", perimetro);
  
    return 0;
}