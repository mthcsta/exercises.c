/**
 ** Passe um numero de clubes de futebol
 ** Passe o numero de confronto que cada um teve
 ** Retorne a media de confronto entre todos
 ** também retorne os times que mais se desafiaram.
**/
#include <stdio.h>
#include <string.h>

#define NUMCLUBES 4
#define MAXLENGTH 20
int main(){
    char times[NUMCLUBES][MAXLENGTH], string_confronto[MAXLENGTH * 2 + 3];
    int i, j; // iterações
    float numero_confronto, last=0, qnt=0, total=0; // last leva o numero do ultimo maior confronto, qnt leva a quantia de jogos para dividir pelo total e gerar a media

    // Inicio da Interação do Usuario
    printf("Entre o nome de %d times de futebol\n", NUMCLUBES);
    for(i=0; i<NUMCLUBES; i++){
        fgets(times[i],MAXLENGTH,stdin);
        times[i][strlen(times[i])-1] = '\0';
    }
    // Fim da Interação do Usuario

    for(i=0; i<NUMCLUBES; i++){
        for(j=i+1; j<NUMCLUBES; j++){
            printf("Entre o numero de confrontos entre %s e %s: ", times[i], times[j]);
            scanf("%f", &numero_confronto);
            qnt+=numero_confronto;
            total++;
            if(numero_confronto>last){
                last = numero_confronto;
                strcpy(string_confronto, times[i]);
                strcat(string_confronto, " x ");
                strcat(string_confronto, times[j]);
            }
        }
    }

    printf("O numero medio de confrontos eh %.1f\n", (qnt / total));
    printf("O confronto que mais ocorreu foi %s\n\n",string_confronto);

    return 0;
}
