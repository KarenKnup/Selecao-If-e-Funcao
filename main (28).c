#include <stdio.h>

int main(void) {
//Variáveis
  float n1, n2, media;
  
 //Usuário
printf("Qual o valor da primeira nota?");
scanf("%f", &n1);
printf("Qual o valor da segunda nota?");
scanf("%f", &n2);

  //Cálculos
media=(n1*3+n2*7)/10;
  
  //Resultados
printf("\n\nSua média é de %.1f.", media);
  
  return 0;
}