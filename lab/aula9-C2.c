/**
 ** função que Soma valores, da o quadrado e o cubo dela.
**/

#include <stdio.h>

int Sum(int end){
    int result=0, i;
    for(i=1; i<=end; i++)
        result+=i;
    return result;
}
int Quad(int end){
    int result=0, i;
    for(i=1; i<=end; i++)
        result+=i * i;
    return result;
}
int Cube(int end){
    int result=0, i;
    for(i=1; i<=end; i++)
        result+=i * i * i;
    return result;
}
int SomaValores(int end, int type){
    int i;
    if(end<1) return -1;
    switch(type){
        case 0:
            return Sum(end);
        break;
        case 1:
            return Quad(end);
        break;
        case 2:
            return Cube(end);
        break;
        default:
            printf("Erro! Voce usou um numero invalido.");
            return 100;
    }
}
int main(){
    int init=1, n;
    printf("Entre o valor de n: ");
    scanf("%d",&n);
    /* Fim das açoes do usuario */
    printf("A soma dos valores entre %d e %d eh: %d\n", init, n, SomaValores(n, 0));
    printf("A soma dos quadrados dos valores entre %d e %d eh: %d\n",init, n, SomaValores(n, 1));
    printf("A soma dos cubos dos valores entre %d e %d eh: %d\n", init, n, SomaValores(n, 2));

    return 0;
}

