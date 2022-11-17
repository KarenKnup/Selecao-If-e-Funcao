#include <stdio.h>

/*
Implementar uma função que, dado um
número inteiro n, e o intervalo definido pelos
números a e b, determine quantos valores do
intervalo possuem divisores (sendo estes
diferentes de 1) que também sejam divisores
de n.

Exemplo:
n = 6
a = 10 e b = 20
Resposta = 7 (pois os números 10, 12, 14,
15, 16, 18 e 20 possuem divisores em
comum com o número 6).
  */

int verificaDiv(int n,int p){
  int i;
  for(i=2;i<=(p/2);i++){
    if(n%i==0&&p%i==0)
      return 1;
  }
  return 0;
}

void processaInt(int a,int b,int n){
  int i,d=0;
  for(i=a;i<=b;i++){
    if(verificaDiv(n,i))
      d++;
  }
  printf("\nNo intervalo [%d,%d] existem %d valores\n com divisores em comum com %d.",a,b,d,n);
}

int main(void) {
  int n=6, a=10, b=20;
  
  processaInt(a,b,n);
  
  
    return 0;
}