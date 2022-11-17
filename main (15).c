#include <stdio.h>

//Implementar uma função que converta determinada temperatura em graus Celsius para graus Fahrenheit.

void Fahre (float C){
  float F;
  
  F=((C*9)/5)+32;
  
   printf("Temperatura em graus Fahrenheit: %.1f ",F);
}

int main(void) {
float C;

  printf("\nTemperatura em graus Celsius:  ");
  scanf("%f",&C);

  Fahre(C);
  
    return 0;
}