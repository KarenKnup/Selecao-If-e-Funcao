#include <stdio.h>
//Faça um algoritmo que mostre o valor da entrada e de cada parcela a ser paga por uma pessoa. O total comprado e o número de parcelas será fornecido pelo usuário. A loja só parcela 70% do montante. 

int main(void) {
//Variáveis
float val_ent, parc, mont;
int nparc;
  
//Usuário
printf("Qual o valor total comprado?");
scanf("%f", &mont);
printf("Qual foi o número de parcelas realizado?");
scanf("%d", &nparc);

//Cálculos
val_ent=mont*0.3;
parc=(mont*0.7)/nparc;
  
//Resultados
printf("\n\nO valor de entrada será de %.2f e o valor de cada parcela será de %.2f.", val_ent, parc);
  
    return 0;
}