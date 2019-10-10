/**
 ** Criando uma função que calcula o seno
 ** e a comparando com o valor dado pela Sin da biblioteca math.h
**/

#include <stdio.h>
#include <math.h>

int fatorial(n){
    int i, r=1;
    for(i=2; i<=n; i++)
        r*=i;
    return r;
}
double seno(double x, int terms){
    double r=x, x1;
    int i, p;
    for(i=0, p=3; i<terms; i++, p+=2){
        x1 = (pow(r,p) / fatorial(p));
        printf("%d = \n",i%2);
        if(i%2){
            x += x1;
        }else{
            x -= x1;
        }
    }
    return x;
}

int main(){
    double x;
    int terms;

    printf("Entre o valor de x: ",x);
    scanf("%lf", &x);

    printf("Entre o numero de termos: ",terms);
    scanf("%d", &terms);
    /* Fim das açoes do usuario */
    printf("Valor aproximado: %.10lf\n", seno(x, terms));
    printf("Valor retornado pela funcao sin: %.10lf\n", sin(x));
    return 0;
}
