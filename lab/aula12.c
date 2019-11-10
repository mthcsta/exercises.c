/**
 ** Entre com nome, idade e salario de N funcionarios,
 ** Entre com um nome de arquivo para guardar estes dados
 ** Entre com um nome de arquivo para ler os dados ja guardados.
**/
#include <stdio.h>
#include <string.h>

#define MAXFUNC 7

typedef struct{
    char nome[50];
    int idade;
    float salario;
} TIPO_FUNCIONARIO;

void limpa_buffer(){
    char c;
    while((c = getchar()) != '\n' && c != EOF);
}

int le_funcionarios(TIPO_FUNCIONARIO entradas[]){
    int i=0, continua=1;
    do{
        printf("Entre o nome do funcionario: ");
        fgets(entradas[i].nome, 50, stdin);
        if(entradas[i].nome[0]!='\n'){
            entradas[i].nome[strlen(entradas[i].nome)-1] = '\0';
            printf("Entre a idade do funcionario: ");
            scanf("%d", &entradas[i].idade);
            printf("Entre o salario do funcionario: ");
            scanf("%f", &entradas[i].salario);
            i++;
        }else continua=0;
        limpa_buffer();
    } while(i<MAXFUNC && continua);

    return i;
}

void imprime_funcionarios(TIPO_FUNCIONARIO entradas[], int num){
    int i;
    printf("Impressao dos dados lidos do arquivo:\n");
    for(i=0; i<num; i++){
        printf("%s, Idade: %d, Salario: %.2f\n",
               entradas[i].nome,
               entradas[i].idade,
               entradas[i].salario);
    }
    return;
}

void escreve_arquivo(char *nome_arq, TIPO_FUNCIONARIO entradas[], int num){

    FILE *arq;

    arq = fopen(nome_arq, "wb");

    if(arq == NULL){
        printf("Erro na abertura do arquivo.");
        return;
    }

    if(fwrite(entradas, sizeof(TIPO_FUNCIONARIO), num, arq) != num){
        printf("Erro na escrita do arquivo");
        return;
    }

    fclose(arq);
    return;
}

int le_arquivo(char *nome_arq, TIPO_FUNCIONARIO entradas[]){

    int i=0, value;

    FILE *arq;

    arq = fopen(nome_arq, "r");

    if(arq == NULL){
        printf("Erro na abertura do arquivo.");
        return 100;
    }

    while(!feof(arq)){
        if(fread(&entradas[i], sizeof(TIPO_FUNCIONARIO), 1, arq)==1)
            i++;
    }

    fclose(arq);

    return i;

}

int main(){

    TIPO_FUNCIONARIO func[MAXFUNC];
    TIPO_FUNCIONARIO func_novo[MAXFUNC];

    int num;

    char nome_arq[30];

    num = le_funcionarios(func);

    if(num>0){

        printf("Entre o nome do arquivo a ser salvo (com extensao): ");

        fgets(nome_arq, 30, stdin);

        nome_arq[strlen(nome_arq)-1] = '\0';

        escreve_arquivo(nome_arq, func, num);

    }else{
        printf("\n :: Pulando para abertura de arquivo ::\nVoce pulou a parte de escrita do arquivo.\n\n");
    }

    printf("Entre o nome do arquivo a ser lido (com extensao): ");

    fgets(nome_arq, 30, stdin);

    nome_arq[strlen(nome_arq)-1] = '\0';

    num = le_arquivo(nome_arq, func_novo);

    imprime_funcionarios(func_novo, num);

    return 0;
}
