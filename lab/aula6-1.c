/**
 ** Dada uma string
 ** Receba apenas com as letras minusculas:
 **  > Contagem do numero de letras existentes
 **  > Alteração para a proxima letra do alfabeto
**/
#include <stdio.h>
#include <string.h>

#define MAX 50

int main(){

    char string[MAX];
    int i, minusculas = 0;

    printf("Digite a string: ");
    fgets(string, MAX, stdin);

    if(string[strlen(string)-1] == '\n')
    string[strlen(string)-1] = '\0';

    for(i=0; i<strlen(string); i++){
        if(string[i] >= 97 && string[i] <= 122){
            minusculas++;
            if(string[i]==122)
                string[i] = 97;
            else
                string[i]++;
        }
    }
    printf("Numero de letras em minusculo da string: %d\n", minusculas);
    printf("String Modificada: %s\n", string);

    return 0;
}
