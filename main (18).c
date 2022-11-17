#include <stdio.h>
//Implementar uma função que, dado um número inteiro, calcule (e retorne) a soma e a média de seus divisores.

void somaEmediaDivisores (int n){
  int soma=0, media, cont, qtde=0;

    for (cont=1;cont<n; cont++){
      if (n%cont==0){
        soma+=cont; //soma=soma+cont
        qtde++;
      }
    }

  printf("\n\n\tA soma dos divisores de %d é %d \ne a média de seus divisores vale %d",n,soma, soma/qtde);
  
}

int main(void) {
int n=25; //1 e 5

  somaEmediaDivisores(n);
  
  
  return 0;
}