/**
 ** Dado uma matriz com nLINHAS e nCOLUNAS,
 ** Passe uma função que pega os menores valores
 ** contidos em cada coluna
**/

#include <stdio.h>
#include <limits.h>

#define LINHAS 4
#define COLUNAS 3

int menoresElementos(int matriz[][COLUNAS],int * menores, int linhas, int colunas){
    int i, j; // iteradores

    for(i=0; i<colunas; i++){
        for(j=0; j<linhas; j++){
            if(matriz[j][i] < *menores)
                *menores = matriz[j][i];
        }
        menores++;
    }
    return 0;
}

int main(){

    int matriz[LINHAS][COLUNAS], menores[COLUNAS],
        i, j; // iteradores

    for(i=0; i<LINHAS; i++){
        printf("Entre os %d elementos da linha %d:", COLUNAS, i+1);
        for(j=0; j<COLUNAS; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    menoresElementos(matriz, menores, LINHAS, COLUNAS);

    printf("Os menores elementos em cada coluna sao, respectivamente");
    for(i=0; i<COLUNAS; i++){
        printf(", %d", menores[i]);
    }

    return 0;
}
