#include <stdio.h>

float CalcQtdeGarrafas (int pessoas) {
int qtde_g;
  qtde_g=(0.5*pessoas)/5;
  return qtde_g;
}

void Qtde (int qtde_g) {printf("\n\nSerá necessário %d garrafa(s) de água para essa festa.",qtde_g);}

int main(void) {
//Variaveis
int qtde_g, pessoas;
  
  //Usuario
printf("Quantas pessoas foram convidadas para a festa?");
  scanf("%d", &pessoas);
  
  //Calculo & Resultados
qtde_g=CalcQtdeGarrafas(pessoas);
 Qtde(qtde_g); 
  
    return 0;
}