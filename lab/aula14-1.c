/**
 ** Dado um arquivo com uma lista de itens ordenado por: nome, preço, quantia
 ** Retorne o seu nome e o preço total multiplicando o preço pela quantia.
**/

/*
    estoque.txt:
Furadeira, 132.67, 15
Serra eletrica, 237.50, 9
Chave de fenda, 38.20, 78

*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LIMITE 200

double calcula(char *p){

    double preco;
    int quantia;

    p = strtok(NULL, ",");
    preco = atof(p);
    p = strtok(NULL, ",");
    quantia = atoi(p);

    return quantia * preco;

}

int main(){

    FILE *arq;

    char linha[LIMITE];

    char *p = strtok(NULL, ",");

    arq = fopen("estoque.txt", "r");

    do{

        fgets(linha, LIMITE, arq);

        p = strtok(linha, ",");

        printf("%s valor total de %.2lf reais\n", p, calcula(p));

    } while(!feof(arq));


    return 0;
}
