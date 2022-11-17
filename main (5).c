#include <stdio.h>

//Faça um programa que capture o saldo inicial no banco e o valor retirado mostrando o saldo final e uma mensagem caso esteja com saldo negativo. Para os clientes MUITO devedores (saldo negativo < 10000) enviar também uma mensagem para comparecer ao banco.

float CalcValorF (float saldo, float saque) {
  float VF;
VF=saldo-saque;
  return VF;
}

int main(void) {
//Variaveis
float saldo_in, saldo_fin, valor_saq;
  
  //Usuario
printf("Qual o valor inicial (antes do saque) na conta?");
  scanf("%f",&saldo_in);
 printf("Qual o valor retirado (do saque)?");
  scanf("%f",&valor_saq);
  
  //Calculos & Resultados
  saldo_fin=CalcValorF(saldo_in,valor_saq);

  if (saldo_fin<0){
    if(saldo_fin<-10000) {printf("\nO seu saldo está negativo. Compareça ao banco.");} else {printf("\nO seu saldo atual está negativo.");}
  } 
    else {printf("\nO seu saldo atual é de: R$%.2f",saldo_fin);}
  
    return 0;
}