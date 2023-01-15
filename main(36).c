#include <stdio.h>

/*
 Desenvolver uma função que, dado um número 
inteiro n, exiba todos os números existentes no 
intervalo definido por a e b (a < b), exceto 
aqueles que forem múltiplos de n.
  */

void ExibeNums (int n, int a, int b){
  for(int i=0; i<=n ;i++){
    if(i==a){
      while(i<=b){
        if(!(n%i==0)){
          printf("%d ",i);
        }
        i++;
      }
      break;
    }
  }
}

int main(void) {
  int n=25, a=5, b=10; //6 7 8 9 10

  if(a<b){
   ExibeNums(n,a,b);
  }

  
  return 0;
}