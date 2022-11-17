#include <stdio.h>

int main(void) {
//Faça um programa que mostre o valor da entrada e de cada parcela a ser paga por uma pessoa. O total comprado e o número de parcelas serão fornecidos pelo usuário. A loja só parcela 70% do montante e cobra 20% de taxa de administração de crédito sobre o valor parcelado quando for dividido em mais de 10x.
  
//variaveis
float totalcomp;
int numeroparc;
float parcela;
float valor_ent;
float taxadm;
  
  //usuário fornece
  printf("Qual o total comprado?");
  scanf ("%f", &totalcomp);

  printf("Qual o número de parcelas?");
  scanf("%d", &numeroparc);

  //calculos  
  
 if (numeroparc>=10){
parcela = (totalcomp * 0.7)/numeroparc;
valor_ent = totalcomp * 0.3;
  
  printf("\n\nO valor de entrada será de R$ %.2f e o valor de cada parcela será de R$ %.2f.", valor_ent, parcela);} else {
parcela = (totalcomp * 0.7)/numeroparc;
valor_ent = totalcomp * 0.1;
taxadm = totalcomp * 0.2;
   
  printf("\n\nO valor de entrada será de R$ %.2f, o valor de cada parcela será de R$ %.2f e a taxa de administração do crédito será de R$ %.2f.", valor_ent, parcela, taxadm);
 }
  
  return 0;
}