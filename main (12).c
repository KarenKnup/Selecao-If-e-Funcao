#include <stdio.h>

int DiaDoSeculo (int dia, int mes, int ano) {
  int num;
  dia=((ano-1901)*365)+((ano-1901)/4)+dia+(((mes-1)*31)-(((mes*4)+23)/10)*((mes+12)/15))+((4-(ano%4))*((mes+12)/15));
  return num;
}

int main(void) {
//Variaveis
  int dia, mes, ano, num;

//Usuario
  printf("Qual o dia, mês e ano?     ");
  scanf("%d%d%d",&dia,&mes,&ano);

//Calculos & Resultados
num=DiaDoSeculo(dia,mes,ano);
 if (num==0) {
   printf("\nO dia do século é Segunda");
 } 
 else {
   if(num==1) {
        printf("\nO dia do século é Terça");
   } 
   else {
     if (num==2) {
          printf("\nO dia do século é Quarta");
     } 
     else {
       if (num==3) {
            printf("\nO dia do século é Quinta");
       } 
       else {
         if (num==4) {
              printf("\nO dia do século é Sexta");
         } 
         else {
           if (num==5) {
                printf("\nO dia do século é Sábado");
           }
           else {
             if (num==6){
                  printf("\nO dia do século é Domingo");
             }
           }
         }
       }
     }
   }
 }
   
    return 0;
}