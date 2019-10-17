/**
 ** Dada uma string e um caractere,
 ** Retorna a string sem o caractere.
**/
#include <stdio.h>

#define MAX 50

int remove_caractere(char *str1, char del, char *str2){
    int r=0; // numero de removidos
    while(*str1!='\0'){
        if(*str1!=del){
            *str2=*str1;
            str2++;
        }else{
            r++;
        }
        str1++;
    }
    *str2='\0';
    return r;
}


int main(){

    char str1[MAX], str2[MAX], del, removidos;

    printf("Entre uma string: ");
    fgets(str1, MAX, stdin);

    printf("Entre o caractere a ser removido: ");
    scanf(" %c", &del);

    removidos = remove_caractere(str1, del, str2);

    printf("String modificada: %s",str2);

    printf("Numero de caracteres '%c' removidos: %d", del, removidos);

    return 0;
}
