#include <stdio.h>
#include <math.h>


//Faça um programa que calcule e mostre a quantidade de latas de tinta necessárias e o custo total para pintar tanques cilíndricos de combustível, considerando que a altura e o raio do cilindro são fornecidos pelo usuário.  
//Sabe-se que: - a lata de tinta custa R$20,00 ; cada lata contém 5 litros e cada litro de tinta pinta 3 metros quadrados. 
//** PI=3 
//a) Faça uma função para calcular a área do retângulo. Esta função recebe a altura e o comprimento (circunferência do cilindro) 

#define pi 3.1415

int Comprimento (int r) {
int C;
          C=2*pi*r;
  return C;
}

int AreaLateral (float h, int C){//Area do Retangulo
  int area;
        area=C*h;
  return area;
}

int AreaBase (int r){
  int area;
        area = pi * pow(r,2);
  return area;
}

int AreaCilindro (int areaB, int areaL){
  int area;
          area = (2*areaB)+areaL;
  return area;
}

int QtdeLatas (float areatotal){
  int qtde;
    qtde = areatotal / 15;
return qtde;
}

int main(void) {
//Variaveis
int r,C, qtde;
float h, arealateral, areadabase, areatotal, custo;


//Usuario
printf("Qual a altura do cilindro, em m?");
scanf("%f",&h);
printf("Qual o raio do cilindro, em m?");
scanf("%d",&r);
  
//Calculos e Resultados
  C=Comprimento(r);
  arealateral=AreaLateral(h,C);
  areadabase=AreaBase(r);
  areatotal=AreaCilindro(areadabase,arealateral);
      qtde = areatotal / 15;
      custo = qtde * 20;

printf("\nQUANTIDADE DE LATAS = %d\n",qtde);
printf("CUSTO = R$ %.2f\n",custo);
    
    return 0;
}