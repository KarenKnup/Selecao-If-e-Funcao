#include <stdio.h>

//Faça um programa que mostre o valor da entrada e de cada parcela a ser paga por uma pessoa. O total comprado e o número de parcelas serão fornecidos pelo usuário. A loja só parcela 70% do montante e cobra 20% de taxa de administração de crédito sobre o valor parcelado quando for dividido em mais de 10x. Faça uma função para o cálculo do valor da parcela. 

float CalcValEnt (float tot_comp){
  float val_ent;
val_ent=tot_comp*0.3;
return printf("\nO valor de entrada é R$%.2f",val_ent);}

void CalcParc (int n_parc, float tot_comp){
  float val_ent;
float val_parc, val_parc2;
  
  val_parc=(tot_comp*0.7)/n_parc;
val_parc2=((tot_comp*0.7)-(val_parc*0.2))/n_parc;
  
  if (n_parc>10){
       printf("\nO valor de cada parcela será R$%.2f.",val_parc2);
  } else {printf("\nO valor de cada parcela será R$%.2f.",val_parc);}
}

int main(void) {
//Variaveis
float tot_comp;
int n_parc;
  
  //Usuario  
  printf("Qual o valor total comprado?");
  scanf("%f",&tot_comp);
printf("Quantas parcelas foram feitas?");
scanf("%d",&n_parc);
  
  //Calculos & Resultados
CalcValEnt(tot_comp);
CalcParc(n_parc,tot_comp);

  
    return 0;
}