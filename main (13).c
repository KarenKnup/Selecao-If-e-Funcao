#include <stdio.h>
/*
Faça um programa, utilizando a função abaixo, que pergunte ao usuário o código, número de horas trabalhadas e o valor da hora trabalhada por um operário, calcule e exiba seu salário. 

Quando o número de horas trabalhadas exceder a 50, as horas excedentes tem um acréscimo de 50% no valor hora. Para os operários que tiverem mais de 80 horas excedentes, há também mais um acréscimo equivalente a 10% do montante a receber pelas horas excedentes.  

Faça uma função para tratar as horas excedentes (recebe o valor da hora e a quantidade de horas excedentes) */

/* 10hs R$ 100 - 1000 (10*100)
  hr*valor_h
  
  60hs R$100 - 60*100+10*50
hr*valor_h+(hr-50)*(valor_h/2)

  90hs R$100 - 90*100+30*50+10%de(30*50)
hr*valor_h+(hr-50)*(valor_h/2)+0.1*(hr-50)*(valor_h/2)
*/

float CalcSal (int hs, float valor_h){
  float sal;
sal=hs*valor_h;
  if (hs>50){
      sal=sal+((hs-50)*(valor_h/2));
  } 
  else {
    if (hs>80){
        sal=sal+((hs-50)*(valor_h/2))+(0.1*((hs-50)*(valor_h/2)));
    } 
  }
      return sal;
}

int main(void) {
//Variaveis
int cod,hs;
float valor_h;
  
//Usuario
printf("Qual o código do funcionário?   ");
scanf ("%d",&cod);
printf("Número de horas trabalhadas?   ");
scanf("%d",&hs);
printf("Qual o valor da hora trabalhada?   ");
scanf("%f",&valor_h);
  
//Calculos e Resultados
 printf("\n__________________________________________________________");
printf("\n\n        O funcionário %d receberá R$ %.2f.",cod,CalcSal(hs,valor_h));
printf("\n__________________________________________________________");

    return 0;
}