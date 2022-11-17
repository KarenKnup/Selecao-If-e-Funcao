#include <stdio.h>
#include <math.h>

//Desenvolver uma função que calcule o n-ésimo termo da sequência de Fibonacci.

int Seq (int t){
  int f;

f=(pow(((1+sqrt(5))/2),t)-pow(((1-sqrt(5))/2),t))*(1/sqrt(5));
  
  return f;
}

int main(void) {
int termo;

  printf("\nQual o termo da sequência de Fibonacci desejado: ");
    scanf("%d",&termo);

printf("\n\tO termo %d é %d",termo,Seq(termo));
  
    return 0;
}