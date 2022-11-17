#include <stdio.h>

int main(void) {
 //declarar variáveis:
  int num1;
  float num2, valor, valorf, desconto;

  printf("Código do produto: 4 digitos: XXXX");

  printf("\n\nDigite o 1º e 2º digitos (XX--): ");
  scanf("%d", &num1);
  printf("\nDigite o 3º e 4º digitos (--XX): ");
  scanf("%f", &num2);
  valor = (num1*15) + num2;
  desconto = num2/100;
  valorf = valor*(1-desconto);
  printf("\nO valor do produto é: R$%.2f.", valor);
  printf("\nO valor final com desconto é de R$%.2f.", valorf);
  
  return 0;
}