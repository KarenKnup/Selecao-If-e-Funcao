#include <stdio.h>

//Faça um programa que calcule e mostre o preço de venda do m² de um imóvel. A construtora fornecerá o valor total gasto com material, o tempo (em horas) de duração da construção, o valor hora da mão de obra e a metragem da área construída.
//Há um acréscimo de 30% no custo de mão de obra sempre que a razão entre a área construída e o tempo de construção for superior a 10 (isto é, sempre que levar mais de 10hs para construir 100m².)


int main(void) {
//Variaveis
float valor_material, custo_mao_hr, ms_construidos,r,r1,r2,r3, preco_imovel;
int tempo_construcao;

  //Usuario
printf("Qual o valor que foi gasto com material? ");
scanf("%f",&valor_material);
printf("Qual o custo por hora da mão de obra? ");
scanf("%f",&custo_mao_hr);
printf("Quantos metros foram construídos? ");
scanf("%f",&ms_construidos);
printf("Quanto tempo durou para fazer essa construção? ");
scanf("%d",&tempo_construcao);
  
//Calculos & Resultados
if ((ms_construidos/tempo_construcao)<0.035) {r1=1.3;} else {r1=1;}

r=valor_material/(custo_mao_hr*tempo_construcao);
r2=1;
r3=1;

if (r>1.5) {valor_material=valor_material*1.05;} else if (r>=0.8) {r2=1.08;} else {r3=1.1;}

preco_imovel=(valor_material+(custo_mao_hr*tempo_construcao*r1*r3))*r2;

  printf("\n\nO preço de venda do imóvel é de R$%.2f.",preco_imovel);
  
    return 0;
}