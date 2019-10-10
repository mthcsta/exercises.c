/**
 ** Gere uma media das notas para cada ALUNOS baseada nas PROVAS
 ** com valor minimo(VMIN) e valor maximo(VMAX)
 ** Retorne com o numero do melhor aluno e a media que ele tirou
**/

#include <stdio.h>
#include <time.h> //para acessar o relogio do sistema
#include <stdlib.h> //para usar rand(), srand()

#define ALUNOS 20
#define PROVAS 3
#define QUESTOES 5
#define VMIN 0
#define VMAX 10

int main(){
    float accProvas, accQuestoes, melhorAluno[2]={0}; // acumulador e um arranjo que guarda no primeiro indice o numero do aluno e no segundo a sua nota.
    float turma[ALUNOS][PROVAS][QUESTOES];
    float r; // random
    int i, j, k; // iterações

    srand(time(NULL)); // inicializa a semente fixa, gera mesma sequencia de valores

    printf("Notas de cada aluno (linha) em cada prova (coluna)\n");

    /* Faz a media das provas e dos alunos */

    for(i=0; i<ALUNOS; i++){
        for(j=0; j<PROVAS; j++){
            for(k=0; k<QUESTOES; k++){
                turma[i][j][k]=VMIN + (rand() % (VMAX - VMIN + 1));
                accQuestoes = turma[i][j][k];
            }
        }
    }

    /* Printa na tela */
    for(i=1; i<=PROVAS; i++){
        printf("Prova %d ",i);
    }
    for(i=0; i<ALUNOS; i++){
        printf("\n");
        accProvas = 0;
        for(j=0; j<PROVAS; j++){
            accQuestoes = 0;
            // Acrescentando para cada questão
            for(k=0; k<QUESTOES; k++){
                accQuestoes += turma[i][j][k];
            }
            accQuestoes /= QUESTOES; // media de todas questoes para calcular a prova
            if(accQuestoes > 10){
                accQuestoes = 10;
            }
            accProvas += accQuestoes; // acrescentando a nota da prova atual ao resto
            printf("%6.1f ",accQuestoes); // printando a media da prova
        }
        accProvas /= PROVAS;
        if(accProvas > melhorAluno[1]){
            melhorAluno[0] = i + 1;
            melhorAluno[1] = accProvas;
        }
    }

    printf("\nAluno %.0f teve maior nota: %.1f",melhorAluno[0], melhorAluno[1]);


    /*

        //  IGNORAR

    printf("\n");
    for(i=0; i<ALUNOS; i++){
        printf("%2d  ",i+1);
        for(j=0, accProvas=0; j<PROVAS; j++){
            for(k=0, accQuestoes=0; k<QUESTOES; k++){
                accQuestoes += VMIN + (rand() % (VMAX - VMIN + 1));
            }
            accQuestoes /= QUESTOES;
            accProvas += accQuestoes; // acumulador das notas do ALUNO
            printf("%5.1f   ",accQuestoes);
        }
        accProvas /= PROVAS;
        if(accProvas > melhorAluno[1]){
            melhorAluno[0] = i + 1;
            melhorAluno[1] = accProvas;
        }
        printf("\n");
    }

    */

    return 0;
}
