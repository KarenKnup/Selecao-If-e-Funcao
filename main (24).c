#include <stdio.h>
#include <math.h>

int main(void) {
//declaração de variáveis:
int numero;
int sucessor;
int antecessor;
//obter valores do usuário:
printf("Qual o numero?");
scanf("%d", &numero);
  
sucessor=numero+1;
antecessor=numero-1;
printf("Numero: %d", numero);
printf("\nSucessor:%d", sucessor);
printf("\nAntecessor:%d", antecessor);
  
  return 0;
}