#include <stdio.h>

int main(void) {
//Variaveis
  float n1,n2,media;

 //Usuario
  printf ("Qual a primeira nota?");
scanf("%f", &n1);
  printf("Qual a segunda nota?");
  scanf("%f", &n2);
  
 //Calculos
  media=(n1+n2)/2;

  //Resultado
  printf("\nA sua média é %.1f.", media);
  
    return 0;
}