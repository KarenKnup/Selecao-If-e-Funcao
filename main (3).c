#include <stdio.h>

//  Faça um programa que capture as duas notas de um aluno exibindo sua média aritmética e uma mensagem de parabenização caso esteja aprovado (média superior ou igual a 5)

float calc_media (float x1, float x2) {
  float r;
  r=(x1+x2)/2;
  return r; }

void parab (float r1){printf("\n\nParabéns! Você está aprovado! Sua média é: %.1f", r1);}

void pena (float r2) {printf("\n\nVocê está reprovado! Sua média é: %.1f", r2);}



int main(void) {
//Variaveis
  float media, n1, n2;

  //Usuario
  printf("Qual a primeira nota?");
  scanf("%f", &n1);
  printf("Qual a segunda nota?");
  scanf("%f", &n2);
  
  //Calculos
    
  media=calc_media(n1,n2);
  
if (5<=media){parab(media);} else {pena(media); }
  
  
    return 0;
}