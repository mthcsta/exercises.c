/**
 ** Criando uma função que calcula o seno
 ** e a comparando com o valor dado pela Sin da biblioteca math.h
**/

#include <stdio.h>
#include <math.h>

double seno(double x, int terms){
  double r=x, potencia=1*r;
  int i, expoente, fatorial=1;

  for(i=1, expoente=3; i<terms; i++, expoente+=2){
    potencia *= r * r;
    fatorial *= (expoente-1)*expoente;
    if(i%2){
      x -= potencia / fatorial;;
    }else{
      x += potencia / fatorial;;
    }
  }
  return x;
}

int main(){
  double x=0.7854;
  int terms=5;

  // Inicio das ações do usuario
  printf("Entre o valor de x: ",x);
  scanf("%lf", &x);

  printf("Entre o numero de termos: ",terms);
  scanf("%d", &terms);

  // Fim das açoes do usuario

  printf("Valor aproximado: %.10lf\n", seno(x, terms));
  printf("Valor retornado pela funcao sin: %.10lf\n", sin(x));
  return 0;
}
