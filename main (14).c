#include <stdio.h>

//Desenvolver uma função que exiba os múltiplos de N compreendidos no intervalo definido por A e B.


void Teste (int *A, int *B, int *N){
  *A=5;
  *B=10;
  *N=5;
}

void Multiplos (int *A, int *B, int *N){
  int  mult;
  
     printf("\nOs múltiplos são:");

  while ((*A)<=(*B)){
      mult=(*A)*(*N);
    printf("\n%d x %d = %d", *A,*N,mult);
      (*A)++;
  }

 
  
}

int main(void) {
int A,B,N;

printf("Digite A e B:  ");
  scanf("%d %d",&A,&B);
printf("Digite o múltiplo N:  ");
  scanf("%d",&N);
  
//Teste(&A,&B,&N);
  Multiplos(&A,&B,&N);
  
    return 0;
}