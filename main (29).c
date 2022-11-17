#include <stdio.h>

int main(void) {
//Variáveis
int diaent, diaret, dias;
  
//Usuário
printf("Qual o dia deste mês que o livro foi retirado?");
  scanf("%d", &diaret);
  printf("Qual o dia deste mês que o livro foi entregue?");
  scanf("%d", &diaent);

//Cálculos & Resultados
if (diaent>=diaret){
  dias=diaent-diaret;
  printf("\n\nO livro ficou emprestado por %d dias.", dias);
} else {printf("\n\nO dia da entrega deve ser maior ou igual ao dia da retirada!");}

  
  return 0;
}