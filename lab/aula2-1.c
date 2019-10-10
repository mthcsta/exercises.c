#include <stdio.h>
#include <math.h>

int main(){

    float capital, juros, montante, min_meses;

    printf("Digite o capital inicial: R$");
    scanf("%f",&capital);

    printf("Digite a Taxa de Juros: ");
    scanf("%f",&juros);

    printf("Digite o montante desejado: R$");
    scanf("%f",&montante);

    min_meses = ceil( (montante - capital) / (capital * (juros/100)) );

    printf("Os numero minimo de meses necessario eh %f", min_meses);

    return 0;
}
