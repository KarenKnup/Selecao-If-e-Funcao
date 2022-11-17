#include <stdio.h>
/*
  Pede-se a implementação de uma função que,
dado um vetor contendo números reais,
determine se o mesmo encontra-se ordenado
de forma crescente.
*/

int avalia (int v[]){
  int i;

  for (i=0;i<4;i++){
    if (v[i+1]==v[i]+1){//1=0+1 -> 2=1+1
      return 1;
    } else {
    return 0;
     }
    }
}

int main(void) {
int v[4]={1,2,3,4}, v2[4]={4,3,2,1};

  if (avalia (v)==1){
    printf("\n\tO vetor v é CRESCENTE!");
  } else{
   printf("\n\tO vetor v é DECRESCENTE!"); 
  }
 
  if (avalia (v2)==1){
    printf("\n\tO vetor v2 é CRESCENTE!");
  } else{
   printf("\n\tO vetor v2 NÃO é CRESCENTE!"); 
  }
  
  return 0;
}