#include <stdio.h>

float soma (n1,n2) {
  float s;
  s=n1+n2;
  return s;
}

float divisao (x1,x2){
  float d;
  d=x1/x2;
  return d;
}

void exibe (float media){printf("\n\nA sua média é %.1f", media);}

int main(void) {
//Variaveis
  float n1,n2;
  float s1,d1;

  //Usuario
printf("Qual a primeira nota?");
scanf("%f", &n1);
 printf("Qual a segunda nota?");
scanf("%f", &n2); 
  
 //media=(n1+n2)/2
s1=soma (n1,n2);
d1=divisao(s1,2);
exibe (d1);
  
    return 0;
}