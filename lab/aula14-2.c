/**
 ** Dado uma string, conte quantos caracteres do tipo numerico existem
**/

#include <stdio.h>
#include <string.h>

#define MAX 100

int conta_digitos(char *str){
    if(*str=='\0') return 0;
    else if(*str>='0' && *str<='9') return 1 + conta_digitos(str+1);
    else return conta_digitos(str+1);
}

int main(){

    char str[MAX];

    printf("Entre a string: ");

    fgets(str, MAX, stdin);

    str[strlen(str)-1] = '\0';


    printf("Numero de digitos %d", conta_digitos(str));

    return 0;

}
