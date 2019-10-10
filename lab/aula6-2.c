/**
 ** Dado um numero para uma matriz quadrada
 ** Entre com os valores para cada elemento desta matriz
 ** Receba se ela é diagonal dominante e quantos elementos não-negativos ela possui
**/
#include <stdio.h>
#include <math.h>

#define MAX 7

int main(){
    int i, j; // iteraçoes
    int dimensao_matriz, dominantes = 0, nao_negativos = 0;
    float dimensoes[MAX][MAX], modulo = 0, mesma_linha = 0;

    // Inicio das Definições do usuario
    printf("Entre a dimensao da matriz: ");
    scanf("%d", &dimensao_matriz);

    for(i=0; i<dimensao_matriz; i++){
        printf("Entre os elementos da linha %d:", i + 1);
        for(j=0; j<dimensao_matriz; j++){
            scanf("%f", &dimensoes[i][j]);
        }
    }
    // Fim das Definições do usuario


    printf("Impressao da Matriz\n");
    for(i=0; i<dimensao_matriz; i++){
        modulo = fabs(dimensoes[i][i]);
        mesma_linha = 0;
        for(j=0; j<dimensao_matriz; j++){
            if(j != i){
                if(dimensoes[i][j] >= 0.00){
                    nao_negativos++;
                }
                mesma_linha += fabs(dimensoes[i][j]);
            }
            printf("%.2f ", dimensoes[i][j]);
        }
        if(modulo > mesma_linha){
            dominantes++;
        }
        printf("\n");
    }

    printf("\n");
    if(dominantes==dimensao_matriz)
        printf("A matriz lida eh diagonal dominante.");
    else
        printf("A matriz lida nao eh diagonal dominante");
    printf("\n");
    printf("A matriz possui %d elementos nao-negativos fora da diagonal principal\n", nao_negativos);

    return 0;
}
