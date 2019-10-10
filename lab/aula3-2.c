/**
 ** usa o codigo de entrada para pegar o preco, multiplica o preco pelo valor das unidades
 ** e caso estiver acima de 10, acrescenta um desconto de 30%
**/
#include <stdio.h>
#include <ctype.h>

int main(){
    // entrada
    char codigo;
    int unidades;
    // saida
    float preco;

    printf("Codigo  Cor          Preco Unitario\n"
           " A      Tinta Azul   R$ 12,00\n"
           " V      Tinta Verde  R$ 13,00\n"
           " B      Tinta Branco R$ 11,00\n"
           " P      Tinta Preto  R$ 10,00\n"
           " M      Tinta Marrom R$ 12,50\n"
           "\n");
    printf("Entre o codigo da cor escolhida: ");
    scanf(" %c",&codigo);

    switch(toupper(codigo)){
        case 'A':
            preco = 12;
        break;
        case 'V':
            preco = 13;
        break;
        case 'B':
            preco = 11;
        break;
        case 'P':
            preco = 10;
        break;
        case 'M':
            preco = 12.5;
        break;
        default:
            printf("\n--------------------------\n"
                   "Codigo Invalido!"
                   "\n--------------------------\n");
            return 100;
    }
    printf("Entre o numero de latas: ");
    scanf("%d", &unidades);

    preco *= unidades;
    if(unidades > 10) preco *= 0.7;
    printf("\n--------------------------\n"
           "O valor total a ser pago e de R$ %.2f"
           "\n--------------------------\n", preco);

    return 0;
}
