#include <stdio.h>

float calcDesconto (float percent, float tot_comprado) {
  float desc;
  desc=tot_comprado*percent;
  return desc;
}

int main(void) {
//Variaveis
  int qtde_comprada;
  float valor_unit, tot_comprado, desc, desc2, tot_apagar, r1,r2;
  
  //Usuario
printf("Qual a quantidade comprada desse produto?");
  scanf("%d", &qtde_comprada);
  printf("Qual o valor unitário desse produto?");
  scanf("%f", &valor_unit);
  
  //Calculos & Resultados
  tot_comprado=valor_unit*qtde_comprada;
printf("\nO valor total da compra foi de: R$ %.2f",tot_comprado);

if (qtde_comprada>15 && tot_comprado>100) {r1=calcDesconto(0.1,tot_comprado);
  desc=tot_comprado-r1;
  printf("\nO desconto pelas unidades é: R$ %.2f", r1);
  r2=calcDesconto(0.2,desc);
  desc2=desc-r2;
    printf("\nO desconto pelo montante é: R$ %.2f", r2);
    printf("\nO total a pagar é: R$ %.2f", desc2);
} else { if (qtde_comprada>15)  {r1=calcDesconto(0.1,tot_comprado);
printf("\nO desconto pelas unidades é: R$ %.2f", r1);
 printf("\nO desconto pelo montante é: R$ 0");
  desc=tot_comprado-r1;
      printf("\nO total a pagar é: R$ %.2f", desc);

  } else if (tot_comprado>100) {r2=calcDesconto(0.2,tot_comprado);
  printf("\nO desconto pelas unidades é: R$ 0");
  printf("\nO desconto pelo montante é: R$ %.2f", r2);
  desc2=tot_comprado-r2;
  printf("\nO total a pagar é: R$ %.2f", desc2);
} 
  }

  
  
    return 0;
}