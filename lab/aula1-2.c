/**
 ** Era para ser apenas um programa de soma de dois numeros
 ** resolvi praticar um pouco mais e tentar ir um pouco mais além.
**/
#include <stdio.h>
int multiSum(){
  int i, // ITERATOR 
      limit, values, // INPUT 
      sum; // OUTPUT
  puts("Quantos Numeros voce quer somar?");
  scanf("%d",&limit);
  sum = 0;
  for(i=0; i<limit; i++){
    printf("Digite o #%d numero ",1+i);
    scanf("%d", &values);
    sum += values;
  }
  return sum;
}
int simpleSum(){
  int val1, val2, // INPUT
      sum; // OUTPUT
  printf("Escreva dois valores para fazer a soma deles\n");
  scanf("%d%d", &val1, &val2);
  sum = val1 + val2;
  return sum;
}
int main(){
  int IsSimple, // INPUT
      sum; // OUTPUT
  printf("Escolha o tipo de soma:\n0: soma quantos numeros quiser\n1: soma apenas dois numeros\n");
  scanf("%d",&IsSimple);
  sum = IsSimple ? simpleSum() : multiSum();
  printf("\nA soma do valor eh %d",sum);
  return 0;
}
