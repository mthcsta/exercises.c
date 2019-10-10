#include <stdio.h>
#include <math.h>

int main(){

    float x1, y1, z1,
          x2, y2, z2,
          distancia;

    printf("Escreva as tres coordenadas do primeiro vetor: ");
    scanf("%f%f%f",&x1, &y1, &z1);

    printf("Escreva as tres coordenadas do segundo vetor: ");
    scanf("%f%f%f",&x2, &y2, &z2);

    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2));

    printf("A distancia euclidiana entre os vetores eh %.3f", distancia);

    return 0;
}
