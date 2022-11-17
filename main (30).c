#include <stdio.h>

int main(void) {
//Variáveis
int alt;
float altcm, altm;
  
//Usuário
printf("Qual a sua altura, em cm?");
scanf("%d", &alt);
  
//Cálculos
altm=alt/100;
altcm=alt%100;
  
//Resultado
printf("\n\nSua altura é %.0f m/%.0f cm.", altm, altcm);
  
  return 0;
}