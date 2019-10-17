/**
 ** Dado dois conjuntos em vetores e seus devidos tamanhos,
 ** Retorne a União destes conjuntos.
**/

#include <stdio.h>

#define M 100

int uniao(int v1[], int n1, int v2[], int n2, int v3[]){

    int i, k, j, // variaveis para iteração
        buscando; // variavel auxiliar para busca

    // começa colocando o primeiro conjunto
    for(i=0; i<n1; i++){
        v3[i]=v1[i];
    }

    k=i;

    // busca no conjunto 2 se existe mesmo numero contido
    // em conjunto união, se não, acrescenta ao conjunto união
    for(i=0; i<n2; i++){
        buscando=1;
        j=0;
        do{
            if(v2[i]==v3[j])
                buscando=0;
            j++;
        } while(buscando && j<n1);
        // se a busca for finalizada e o numero não encontrado
        // faz a inserção
        if(buscando){
            v3[k]=v2[i];
            k++;
        }
    }

    // tamanho do conjunto uniao
    return k;
}

int main(){

    int vet1[M], vet2[M], vet3[M+M], num1, num2, num3, i;

    // Conjunto 1
    printf("Entre o numero de elementos do conjunto 1: ");
    scanf("%d",&num1);
    printf("Entre os %d elemtnso do conjunto 1: ",num1);
    for(i=0; i<num1; i++){
        scanf("%d",&vet1[i]);
    }

    // Conjunto 2
    printf("Entre o numero de elementos do conjunto 2: ");
    scanf("%d",&num2);
    printf("Entre os %d elemtnso do conjunto 2: ",num2);

    for(i=0; i<num2; i++){
        scanf("%d",&vet2[i]);
    }

    num3 = uniao(vet1, num1, vet2, num2, vet3);

    printf("Elementos da uniao: ");
    for(i=0; i<num3; i++){
        printf("%d ", vet3[i]);
    }

    return 0;
}
