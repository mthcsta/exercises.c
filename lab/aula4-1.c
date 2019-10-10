/**
 ** Entre com o ano, tipo e valor dos veiculos
 ** Retorno do Numero de Motocicletas, Valor medio de todos veiculos
 ** e do carro mais antigo na revenda.
**/

#include <stdio.h>
#include <ctype.h>

int main(){
    int ano, ultimo_ano = 0, qnt_moto = 0, i, n;
    char tipo;
    float valor, valor_media = 0;

    // checar quantos veiculos passaram/
    printf("Quantos Veiculos entraram?");
    scanf("%d", &n);

    for(i = 0; i < n; i++){

        printf("Entre o ano, tipo (M ou C) e valor do veiculo %d:", i + 1);

        scanf("%d %c%f", &ano, &tipo, &valor);

        // acrescenta ao valor para fazer a media
        valor_media += valor;

        // checa e declara o carro mais antigo da revenda
        if(toupper(tipo) == 'C' && (ultimo_ano == 0 || ultimo_ano > ano))
            ultimo_ano = ano;

        // acrescenta a quantidade de motocicletas se for do tipo Motocicleta
        if(toupper(tipo) == 'M') qnt_moto++;
    }
    // calcula o valor da media
    valor_media /= n;

    printf( "Ha %d motocicleta no estoque\n"
            "O valor medio de todos veiculos eh de %.2f reais\n"
            "O carro mais antigo na revenda eh de %d\n\n",
            qnt_moto, valor_media, ultimo_ano);

    return 0;
}
