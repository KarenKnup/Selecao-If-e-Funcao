#include <stdio.h>

int main(void) {
//Variáveis
  float base, altura, moldura, preco;

  //Usuário
  printf("Qual a base do quadro, em m?");
  scanf("%f", &base);
  printf("Qual a altura do quadro, em m?");
  scanf("%f", &altura);

  //Cálculos
moldura=2*base+2*altura;
preco=moldura*5;
  
  //Resultados
  printf("\n\nA quantidade necessária de madeira será de %.2f m e custará R$%.2f.", moldura, preco);
  
    return 0;
}