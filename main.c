#include <stdio.h>

int fcalc(int faltura){
int alturam; 
int alturacm;

alturacm = faltura % 100;
alturam = (faltura - alturacm) / 100;

if (alturacm == 0) {
return printf ("Sua altura é %dm", alturam);
  } else {
  return printf ("Sua altura é %dm e %dcm", alturam, alturacm);}
}

int main(void) {
  //declaração de variáveis:
int altura;
  
  //obter os valores do usuário:
  printf("Qual a altura, em cm?");
  scanf("%d", &altura);

  fcalc(altura);
  
  return 0;}

