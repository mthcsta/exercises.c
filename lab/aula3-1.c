/**
 ** Pegar a quantia de dias e o nome do mês passando como dado o numero do mês e o ano.
**/
#include <stdio.h>

int main(){
    // entradas
    int mes, ano, dias;

    printf("Entre o mes e o ano da consulta: ");
    scanf("%d%d",&mes, &ano);

    if(mes < 1 && mes > 12) return 100;

    if(ano<1900) return 101;

    switch(mes){
        case 1:
            dias = 31;
            printf("O mes Janeiro possui %d dias em %d", dias, ano);
        break;
        case 2:
            dias = !(ano % 4) ? 29 : 28;
            printf("O mes Fevereiro possui %d dias em %d", dias, ano);
        break;
        case 3:
            dias = 31;
            printf("O mes Marco possui %d dias em %d", dias, ano);
        break;
        case 4:
            dias = 30;
            printf("O mes Abril possui %d dias em %d", dias, ano);
        break;
        case 5:
            dias = 31;
            printf("O mes Maio possui %d dias em %d", dias, ano);
        break;
        case 6:
            dias = 30;
            printf("O mes Junho possui %d dias em %d", dias, ano);
        break;
        case 7:
            dias = 31;
            printf("O mes Julho possui %d dias em %d", dias, ano);
        break;
        case 8:
            dias = 31;
            printf("O mes Agosto possui %d dias em %d", dias, ano);
        break;
        case 9:
            dias = 30;
            printf("O mes Setembro possui %d dias em %d", dias, ano);
        break;
        case 10:
            dias = 31;
            printf("O mes Outubro possui %d dias em %d", dias, ano);
        break;
        case 11:
            dias = 30;
            printf("O mes Novembro possui %d dias em %d", dias, ano);
        break;
        case 12:
            dias = 31;
            printf("O mes Dezembro possui %d dias em %d", dias, ano);
        break;
    }

    printf("\n");

    return 0;
}
