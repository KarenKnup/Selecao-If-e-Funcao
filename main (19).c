#include <stdio.h>
//Desenvolver uma função que exiba todos os números primos inferiores a determinado valor inteiro N.

void NumsPrimos (int n){
  int cont;

  printf("\nOs números primos inferiores a %d são: ",n);
  for (cont=1; cont<n; cont++){
    if (n%cont!=0){
    printf("\n\t%d",cont);
      }
  }
}

int main(void) {
int n=5; //2 3 e 4 

  NumsPrimos(n);
  
  return 0;
}