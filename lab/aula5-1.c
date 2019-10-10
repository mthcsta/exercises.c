/**
 ** Encontrando a raiz quarta de um numero real R
 ** Dado um numero, uma aproximação para a raiz quarta,
 ** um limite de iteração e uma tolerancia
 ** Receba uma aproximação da raiz quarta junto do numero de iterações usadas.
**/
#include <stdio.h>

int main(){
    int numR, nMax, loops = 0;
    double x0, x1, tolerancia, diferenca;

    printf("Entre o numero do qual se quer extrair a raiz quarta:");
    scanf("%d", &numR);
    printf("Entre a aproximacao inicial: ");
    scanf("%lf", &x0);
    printf("Entre o numero maximo de iteracoes: ");
    scanf("%d", &nMax);
    printf("Entre a tolerancia: ");
    scanf("%lf", &tolerancia);
    do{
        x1 = x0 - ((x0 * x0 * x0 * x0) - numR) / (4 * (x0 * x0 * x0));
        diferenca = fabs(x0 - x1);
        x0 = x1;
        loops++;
    }while(diferenca > tolerancia && loops < nMax);

    printf("A raiz quarta aproximada eh %.15lf, obtida com %d iteracoes",
           x1, loops);

    return 0;
}
