/**
 ** Fa�a uma fun��o com ponteiro que retorna a soma de 1 a n,
 ** a quadrada e a cubica.
**/
#include <stdio.h>
#include <math.h>

int SomaValores(int n, int *soma, double *quadrada, double *cubica)
{
    int i;
    double r=0;

    for(i=1; i<=n; i++)
    {
        *soma += i;

        *quadrada += sqrt(i);

        *cubica += cbrt(i);
    }
    return 0;
}

int main()
{
    int n, soma=0;
    double quadrada=0, cubica=0;

    // inicio da intera��o do  usuario.
    printf("Entre o valor de n: ");
    scanf("%d", &n);

    // fim da intera��o do usuario.

    SomaValores(n, &soma, &quadrada, &cubica);

    printf("A soma dos valores entre 1 e %d eh: %d\n", n, soma);
    printf("A soma das raizes quadradas dos valores entre 1 e %d eh: %.7lf\n", n, quadrada);
    printf("A soma das raizes cubicas dos valores entre 1 e %d eh: %.7lf\n", n, cubica);
    return 0;
}
