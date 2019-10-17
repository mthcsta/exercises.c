#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define LIMITE 10
#define VMIN 10
#define VMAX 99

void show(int n[])
{
    for(int i=0; i<LIMITE; i++)
        printf("%d ",n[i]);
    printf("\n\n");
}
void generate(int *p){
  srand(time(NULL));
  for(int i=0; i<LIMITE; i++)
    p[i]=VMIN + (rand() % (VMAX - VMIN + 1));
}


// Bubble
void bubble(int n[])
{
    int desordenado = 1, indice = 0, indiceMax = LIMITE-1, anterior = 0, voltas = 0;
    printf("Ordenado Bubble: ");

    do
    {
        anterior = n[indice];
        indice++;
        if(anterior > n[indice])
        {
            n[indice - 1] = n[indice];
            n[indice] = anterior;
        }
        if(indice == indiceMax)
        {
            indice = 0;
            if(voltas == indiceMax)
                desordenado = 0;
            else
                voltas++;
        }
    }
    while(desordenado);

    show(n);
    return;
}

// Quick
void quick(int n[]){
  printf("Ordenado Quick: ");

  show(n);
  return;
}

int quickSort(int n[], int ini, int fim){
  int pp;
  if(ini < fim){
    pp = randparticao(n, ini, fim);
    quickSort(n, ini, pp);
    quickSort(n, pp+1, fim);
  }
  return n;
}
int randparticao(int n[], int ini, int fim){
  int rand = gerarRandom(ini, fim);
  int aux;
  aux = n[rand];
  n[rand] = n[fim-1];
  n[fim-1] = aux;
  return particao(n, ini, fim);
}
int particao(int n[], int ini, int fim){
  int pivo = n[fim-1], start = ini, end = ini, aux;
  for(int i=ini; i<fim; i++){
    if(n[i] > pivo)
      end += 1;
    else{
      end += 1;
      start += 1;
      aux = n[i];
      n[i] = n[start-1];
      n[start-1] = aux;
    }
  }
  return start-1;
}
int gerarRandom(int ini, int fim){
  return ini + (rand() % (fim - ini + 1));
}

int main()
{
    double current;
    int n[LIMITE];

    generate(&n);

    // Bubble

    current = time(NULL);
    bubble(n);
    printf("Tempo decorrido: %lf", time(NULL) - current);

    printf("\n\n");

    // Quick

    current = time(NULL);
    quick(n);
    printf("Tempo decorrido: %lf", time(NULL) - current);

    printf("\n\n");

    return 0;
}
