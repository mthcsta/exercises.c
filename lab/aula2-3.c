#include <stdio.h>

int main(){

    float distancia, valor;
    char cupom;

    printf("Entre a distancia da corrida em km: ");
    scanf("%f", &distancia);

    printf("Possui cupom de desconto? [S/N] \n");
    scanf("%s", &cupom);

    valor = 5;
    valor += distancia >= 1 ? ((distancia - 1) * 2) : 0;

    if(cupom == 'S' || cupom == 's')
        valor *= 0.9;
    else if(cupom != 'N' || cupom != 'n'){
        printf("Erro");
        return 1;
    }
    printf("O valor da corrida eh de R$ %.2f", valor);

    return 0;

}
