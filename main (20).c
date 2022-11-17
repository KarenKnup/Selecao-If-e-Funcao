#include <stdio.h>
/*
  Implementar uma função que, dado um
número inteiro N, exiba uma sequência de
números como as ilustradas nos exemplos a
seguir:
Exemplo 1: N = 3 / n1=1

(1 2) (1 3)   = (n1   n1+1) (n1   n1+2)
(2 1) (2 3)   = (n1+1 n1  ) (n1+1 n1+2)
(3 1) (3 2)   = (n1+2 n1  ) (n1+3 n1+2)
  */

void Seq (int n){
  int n1,n2;

  for(n1=0; n1<n; n1++){//linha
    for (n2=0; n2<n; n2++){//coluna
      if (n1!=n2){
      printf("(%d %d) ",n1+1,n2+1);
        } 
      }
    printf("\n");
  }
  
}

int main(void) {
int n=3;
  
  Seq(n);
  
  return 0;
}