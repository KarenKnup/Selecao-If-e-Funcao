#include <stdio.h>
//Desenvolver uma função que determine o número de ocorrências de um número inteiro x em um vetor A.

void qtsVezes (int n, int v[]){
  int i, qtde=0;

  for (i=0; i<10; i++){
    if (v[i]==n){
      qtde++;
    }
  }

  printf("\n\n\t O número %d aparece %d vezes!",n,qtde);
}

int main(void) {
int v[10]={5,5,5,5,2,3,4,6,7,9};
  int n=5;

  qtsVezes (n,v);
  
  return 0;
}