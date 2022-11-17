#include <stdio.h>

int main(void) {
  //variáveis:
float qtdeL;
float preçopago;
float refresco;
float suco;
float valorsuco;
float valor_refresco;  
float porcent_suco;
float porcent_refresco;
  
  //valores do usuário:
  printf("Qual a litragem de concentrado comprada?");
  scanf("%f",&qtdeL);
  printf("\nQual o preço pago por essa litragem?");
  scanf("%f",&preçopago);
  
  //qtde em L de refresco com todo o concentrado:
refresco = qtdeL * 4 + qtdeL;

  //qtde em L de suco com todo o concentrado:
suco = qtdeL * 2 + qtdeL;

   //quanto irá receber transformando o concentrado em suco - R$2 por copo:
valorsuco = (suco * 10) * 2;

   //quanto irá receber transformando o concentrado em refresco - R$1 por copo:
valor_refresco = refresco * 10;

//lucro com o concentrado usado em refresco (valor recebido - custo)/valor recebido:
porcent_refresco = (valor_refresco - preçopago)/(valor_refresco/100);
  
//lucro com o concentrado usado em suco (valor recebido - custo)/valor recebido:
porcent_suco = (valorsuco - preçopago)/(valorsuco/100);
  
  //resultados:
  printf("\n\n\nConcentrado comprado: %.1f  ",qtdeL);
  printf("\nValor pago: %.2f  ",preçopago);
  printf("\n\nCom refresco se faz:\n %.1f L e R$ %.2f  com %.1f porcento de lucro.", refresco, valor_refresco, porcent_refresco);
  printf("\nCom suco se faz: \n %.1f L e R$ %.2f com %.1f porcento de lucro.", suco, valorsuco, porcent_suco);
  
  return 0;
}