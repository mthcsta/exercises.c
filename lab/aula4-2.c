/**
 ** Entre com uma letra e um numero
 ** Retorne uma contagem regressiva da letra
**/
#include <stdio.h>

int main()
{

    char letter; // Letra ou Caractere inserido
    int i, j, n; // contadores e numero de linhas

    printf("Entre com um caractere e um numero: ");
    scanf(" %c%d", &letter, &n);

    for(i = n; i > 0; i--)
    {
        for(j=i; j > 0; j--)
        {
            printf("%c",letter);
        }
        printf("\n");
    }

    for(i = n; i > 0; i--)
    {
        for(j=n-i; j > 0; j--)
            printf(" ");
        for(j=i; j > 0; j--)
            printf("%c",letter);

        printf("\n");
    }
    return 0;
}
