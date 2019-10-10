/**
 ** Dado um tamanho de um arranjo e seus valores, mais um numero
 ** Mova as casas a quantia de vezes de zero até o ultimo numero digitado.
**/
#include <stdio.h>
#include <math.h>

#define TAMMAX 15
int main(){

    int valor_maior, valores_inteiros, valor_menor, diferenca = 0;
    // arranjos
    int valores[TAMMAX] = {0}, modificado[TAMMAX] = {0};
    // laços
    int i = 0, j = 0, proximo, erro = 0, indice = 0;

    printf("Entre o numero de elementos no arranjo (valor menor ou igual a %d)", TAMMAX);
    scanf("%d", &valor_maior);

    if(valor_maior > TAMMAX){
        printf("Fim do Programa! O valor deve ser menor ou igual a %d", TAMMAX);
        return 100;
    }

    printf("Entre os %d valores inteiros:\n", valor_maior);
    while(i < valor_maior && erro == 0){
        scanf("%d", &valores[i]);
        if(valores[i] > TAMMAX)
        {
            erro++;
        }
        else{
            i++;
        }
    }

    if(erro){
        printf("Erro! O valor digitado foi maior");
        return 101;
    }


    printf("Entre um valor M menor do que %d: ", valor_maior);
    scanf("%d", &valor_menor);



    for(i = 0; i < valor_maior; i++){
        if(valor_menor + i +1 > valor_maior){
            indice = i - valor_maior;
        }else{
            indice = i;
        }
        modificado[valor_menor + indice] = valores[i];
    }

    // Fim dos comandos usuario

    for(i = 0; i < valor_maior; i++){
        if(diferenca < fabs(valores[i] - modificado[i])){
            diferenca = fabs(valores[i] - modificado[i]);
        }
    }

    printf("O arranjo modificado eh \n");
    for(i=0; i<valor_maior; i++){
        printf("%d ", modificado[i]);
    }
    printf("\n");
    printf("A maior diferenca (em modulo) entre os vetores eh %d", diferenca);


    return 0;
}
