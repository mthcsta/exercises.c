/**
 ** .:: Mapa do Jogo ::.
 **  Dado um nome de arquivo de um arquivo contendo um mapa
 **  Leia o arquivo, pegando a posicao do usuario e guardando o mapa num vetor,
 **  Guarde o vetor do mapa(mapa de forma circular) num vetor TELA e printe.
**/

#include <stdio.h>
#include <string.h>

#define LINHAS 35
#define COLUNAS 415
#define COLUNAS_TELA 105
#define NOME_ARQ 20

/**                 Estrutura                  **/

typedef struct{
    int linha, coluna;
} POSICAO;

/**                 Funções                  **/

POSICAO le_mapa(FILE *arq, char mapa[][COLUNAS]){
    POSICAO navinha={0,0};
    int i=0, j=0; // iteradores
    char c;

    do{
        c = fgetc(arq);
        if(c != EOF){
            if(c!='\n'){
                mapa[i][j] = c;
                if(c=='@'){
                    navinha.linha = i;
                    navinha.coluna = j;
                }
                j++;
            }else{
                i++;
                j=0;
            }
        }
    }while(!feof(arq));

    return navinha;
}

void gera_tela(char tela[][COLUNAS_TELA], char mapa[][COLUNAS], int coluna){
    int i, j; // iteradores
    int c;
    for(i=0; i<LINHAS; i++){
        c = coluna;
        for(j=0; j<COLUNAS_TELA; j++, c++){
            if(c==COLUNAS) c=0;
            tela[i][j] = mapa[i][c];
        }
    }

}

void imprime_tela(char tela[][COLUNAS_TELA]){
    int i, j; // iteradores

    for(i=0; i<LINHAS; i++){
        for(j=0; j<COLUNAS_TELA; j++){
            printf("%c", tela[i][j]);
        }
        printf("\n");
    }
}

/**           Função Principal          **/

int main(){

    POSICAO nave;
    FILE * arq;
    char nome_arq[NOME_ARQ];
    char mapa[LINHAS][COLUNAS];
    char tela[LINHAS][COLUNAS_TELA];
    int coluna_impressao;


    // Abrindo o arquivo...
    printf("Entre com o nome do arquivo texto: ");

    fgets(nome_arq, NOME_ARQ, stdin);

    nome_arq[strlen(nome_arq)-1] = '\0';

    arq = fopen(nome_arq, "r");

    // Lendo o arquivo e guardando no mapa...

    nave = le_mapa(arq, mapa);

    printf("Posicao inicial da nave: linha %d, coluna %d\n",nave.linha, nave.coluna);


    // Lendo a coluna impressa de acordo com o pedido do usuario

    printf("Entre o valor da coluna da impressao do mapa na tela: ");

    scanf("%d", &coluna_impressao);

    gera_tela(tela, mapa, coluna_impressao);

    // Lendo a tela...

    printf("\nImpressao do mapa:\n");

    imprime_tela(tela);



    return 0;
}
