#include <stdio.h>

//Fazer uma função que calcule o MDC (máximo divisor comum) entre dois números.

void Preenche(int *a, int *b) {
  
  printf("\nDigite A e B:  ");
  scanf("%d %d",a,b);

}

void MDC (int a, int b){ //Maior divisor entre A e B
 int conta, mdc, maior;

    if (a>b){//Qual número é o maior?
    maior=a;
    } else if(a==b) {
      printf("\n\t MDC (%d,%d) = %d",a,b,a);
      return;      
    } else { //a<b
    maior=b;
    }
  
  for(conta=1; conta<maior; conta++){
    if (a%conta==0 && b%conta==0){
      mdc=conta;
    }
  }
 printf("\n-------------------------------");
  printf("\n\t MDC (%d,%d) = %d",a,b,mdc);
}

void MMC (int a, int b){ //Menor divisor entre A e B
 int conta, mmc;

  for (conta=1; conta>0; conta++){//descobre o contador
    if (a*conta%b==0){//resto = a*conta%b
      break; //para quando resto=0
    }
  }
    //12*1/18 => resto=12
    //12*2/18 => resto=6
    //12*3/18 => resto=0 => conta=3
  
  //MMC (12,18) = a*conta = 12*3 = 36  
 printf("\n-------------------------------");
  printf("\n\t MMC (%d,%d) = %d",a,b,a*conta);
}

int main(void) {
int A,B;

Preenche(&A,&B);
MDC(A,B);
MMC(A,B);
  
  
    return 0;
}