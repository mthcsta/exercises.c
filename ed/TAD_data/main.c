#include <stdio.h>
#include <stdlib.h>
#include "data.h"

int main(void) {
    Data data1;
    Data data2;
    int diferenca; // variavel que guarda a diferença em dias entre as datas.
    int flag = 0; // flag auxiliar para mostrar mensagem em caso de data invalida.
    int diferenca_dias_pascoa_data1, diferenca_dias_pascoa_data2; // variaveis auxiliar para guardar diferença em dias da data em relação a pascoa de seu ano.

    printf("Entre com duas datas e descubra qual estah mais proxima da " \
            "pascoa do ano correspondente.\n"\
            "Entre com a primeira data:\n");

    // capturando a primeira data:
    do {
        if (flag) {
            printf("data invalida\n");
        }
        le_data(&data1);
    } while (!valida_data(data1) && (++flag));

    flag = 0; // limpando flag
    printf("Entre com a segunda data:\n");

    // capturando a segund data:
    do {
        if (flag) {
            printf("data invalida\n");
        }
        le_data(&data2);
    } while (!valida_data(data2) && (++flag));

    // calculando a diferença em dias:
    diferenca = compara_datas(data1, data2);

    printf("diferenca entre as datas: %d dias\n", diferenca);

    printf("Pascoa da primeira data: ");
    imprime_data(pascoa_data(data1.ano));
    
    printf("Pascoa da segunda data: ");
    imprime_data(pascoa_data(data2.ano));

    diferenca_dias_pascoa_data1 = compara_datas(data1, pascoa_data(data1.ano));
    diferenca_dias_pascoa_data2 = compara_datas(data2, pascoa_data(data2.ano));

    if (diferenca_dias_pascoa_data1 == diferenca_dias_pascoa_data2) {
        printf("Ambas as datas estão com %d dias de diferença em relação a pascoa de seu ano\n", diferenca_dias_pascoa_data1);
    } else if(diferenca_dias_pascoa_data1 < diferenca_dias_pascoa_data2) {
        printf("A primeira data estah mais proxima da pascoa, com %d dias de diferença, enquanto a segunda estah com %d dias\n", diferenca_dias_pascoa_data1, diferenca_dias_pascoa_data2);
    } else {
        printf("A segunda data estah mais proxima da pascoa, com %d dias de diferença, enquanto a primeira estah com %d dias\n", diferenca_dias_pascoa_data2, diferenca_dias_pascoa_data1);
    }

    return 0;
}
