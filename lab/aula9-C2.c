/**
 ** função que Soma valores, da o quadrado e o cubo dela.
**/

#include <stdio.h>

int SomaValores(int end, int *soma, int *quadrado, int *cubo){
  int i;
  if(end<1) return -1;
  for(i=1; i<=end; i++){
    *soma+=i;
    *quadrado+=i * i;
    *cubo+=i * i * i;
  }
  return 0;
}
int main(){
  int init=1, n, s=0, q=0, c=0;

  // Inicio das açoes do usuario
  printf("Entre o valor de n: ");
  scanf("%d",&n);

  // Fim das açoes do usuario

  if(SomaValores(n, &s, &q, &c)==-1){
    printf("Digite um numero maior que 0\n\n");
    return 100;
  }

  printf("A soma dos valores entre %d e %d eh: %d\n", init, n, s);
  printf("A soma dos quadrados dos valores entre %d e %d eh: %d\n",init, n, q);
  printf("A soma dos cubos dos valores entre %d e %d eh: %d\n", init, n, c);

  return 0;
}
