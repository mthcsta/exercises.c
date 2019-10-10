/**
 ** crie uma fun��o que calcula o cosseno, faz uma compara��o com a
 ** da biblioteca math.h
**/
#include <stdio.h>
#include <math.h>

/* Fun��o In�til para nova vers�o do programa.
int fatorial(int n){
    int r=1, i;
    for(i=2; i<=n; i++)
        r*=i;
    return r;
}
*/
double cosseno(double x, int termos){
    double r=1, x1;
    double i, p, f, fa;

    for(i=0, p=1, f=1, fa=2; i<termos-1; i++, fa+=2){
// Vers�o Antiga:
//      x1 = pow(x,p) / fatorial(p);
// Vers�o Nova:
        p *= x * x;
        f *= (fa-1)*fa;
        x1 = p / f;

        if((int)i%2){
            r+=x1;
        }else{
            r-=x1;
        }
    }
    return r;
}

int main(){
    double x;
    int termos;

    // inicio da intera��o do usuario.
    printf("Entre o valor de x: ");
    scanf("%lf", &x);
    printf("Entre o numero de termos: ");
    scanf("%d", &termos);

    // fim da intera��o do usuario
    printf("\n\n");
    printf("Valor aproximado: %.12lf\n", cosseno(x, termos));
    printf("Valor retornado pela funcao cos: %.12lf\n", cos(x));
    return 0;
}
